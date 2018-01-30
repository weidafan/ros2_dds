/*****************************************************************************/
/*         (c) Copyright, Real-Time Innovations, All rights reserved.        */
/*                                                                           */
/*         Permission to modify and use for internal purposes granted.       */
/* This software is provided "as is", without warranty, express or implied.  */
/*                                                                           */
/*****************************************************************************/

/* ========================================================================= */
/* RTI Routing Service Socket Adapter                                        */
/* ========================================================================= */
/*                                                                           */
/* Conversion between byte buffer and DDS dynamic data samples               */
/*                                                                           */
/* These functions are used by the socket adapter to create dynamic data     */
/* samples from a buffer of raw bytes received from the socket or            */
/* to serialize a sample and write in the socket                             */
/*                                                                           */
/* By customizing these functions the socket adapter can work with other     */
/* serialized formats. The implementation we provide                         */
/* works with the following sample format:                                   */
/*                                                                           */
/* <field>=<value>[,<field2>=<value2>[...]];                                 */
/*                                                                           */
/* For example the following buffer represents two samples:                  */
/*                                                                           */
/* x=3,y=5,color=RED;y=2,x=3,color=BLUE\n                                    */
/*                                                                           */
/* ========================================================================= */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "SampleParsing.h"

/* Character used to separate samples coming from the socket */
#define RTI_SOCKET_ADAPTER_SAMPLE_SEPARATOR (';')

#ifdef RTI_WIN32
  /* strtok warnings */
  #pragma warning( disable : 4996 )
  /* Windows name for snprintf */
  #define snprintf sprintf_s
#endif 

/* ========================================================================= */
/*                                                                           */
/* Read (deserialize)                                                        */
/*                                                                           */
/* ========================================================================= */

/**
 * @brief Deserializes a buffer and fills a dynamic data sample
 * 
 * @param sampleOut The sample whose field values shall be set
 * @param buffer The data buffer read from the socket where the samples
 *               should be located.
 * @param bufferLength The length of the buffer
 * @param env The environment to report error messages
 * 
 * @return < 0 for error, 0 if no sample was parsed, > 0 to indicate
 *         that one sample was found.
 *         When returning a positive value, its value must indicate
 *         the first position not yet parsed
 */
int RTI_RoutingServiceSocketAdapter_parse_sample(
    struct DDS_DynamicData * sampleOut, 
    char * buffer,
    int bufferLength,
    RTI_RoutingServiceEnvironment * env)
{
    int i;
    size_t length, sampleLength;
    /*
     * 0 => ready to read next assignment
     * 1 => reading field name (left)
     * 2 => reading value (right)
     */
    int state = 0;
    char c;
    char * token = NULL, * field = NULL, * value = NULL;

    /*
     * Read a sample. The delimiter is ';'
     */
    for (i = 0; i < bufferLength; i++) {
        if (buffer[i] == RTI_SOCKET_ADAPTER_SAMPLE_SEPARATOR) {
            break;
        }
    }

    if (i == bufferLength) {
        return 0;
    }

    /* We found a sample at position i */
    sampleLength = i + 1;

    /* We want to use buffer as a string */
    buffer[i]=0;

    /*printf("The buffer is:%s\n",buffer);*/

    /*
     * Trim spaces
     */
    buffer = RTI_RoutingServiceSocketAdapter_trim(buffer);
    if (*buffer == 0){
        return -1;
    }

    length = strlen(buffer);

    /*
     * Validate format (<field1>=<value1>,<field2>=<value2>,...)
     */
    for (i = 0; i < length; i++) {
        c = buffer[i];
        switch (state) {
        case 0:
            if (c == '=' || c == ',') {
                RTI_RoutingServiceEnvironment_set_error(
                    env, "Invalid sample: %s", buffer);
                return -1;
            } else {
                state = 1;
            }
            break;
        case 1:
            if (c == '=') {
                state = 2;
            } else if (c == ',') {
                RTI_RoutingServiceEnvironment_set_error(
                    env, "Invalid sample: %s", buffer);
                return -1;
            }
            break;
        case 2:
            if (c == ',') {
                state = 0;
            } else if (c == '=') {
                RTI_RoutingServiceEnvironment_set_error(
                    env, "Invalid sample: %s", buffer);
                return -1;
            }
            break;
        default:
            break;
        }
    }

    if (state != 2) {
        RTI_RoutingServiceEnvironment_set_error(
            env, "Invalid sample: %s", buffer);
        return -1;
    }

    token = strtok(buffer, ",=");
    while (token != NULL) {

        /* Remove spaces */
        field = RTI_RoutingServiceSocketAdapter_trim(token);

        token = strtok(NULL, ",=");
        if (token == NULL) {
            return -1;
        }

        /* Remove spaces */
        value = RTI_RoutingServiceSocketAdapter_trim(token);

        /* Remove quotes */
        if (*value == '"') {
            value++;
        }
        length = strlen(value);
        if (length > 0 && value[length-1]=='"') {
            value[length-1]=0;
        }

        if (!RTI_RoutingServiceSocketAdapter_assign(
                sampleOut, field, value, env)) {
            return -1;
        }

        token = strtok(NULL, ",=");
    }

    return (int) sampleLength;
}


/* ========================================================================= */
/*                                                                           */
/* Write (serialize)                                                         */
/*                                                                           */
/* ========================================================================= */

int RTI_RoutingServiceSocketAdapter_serialize_sample(
    struct DDS_DynamicData * sample, 
    char * buffer, int length,
    RTI_RoutingServiceEnvironment * env)
{
    unsigned int memberCount, i;
    DDS_ReturnCode_t retCode;
    struct DDS_DynamicDataMemberInfo info;
    int writeCount;
    char * bufferIt = buffer;

    /*
     * Get the number of fields of our sample and for each of them
     * write it in the form <field>=<value>
     */
    memberCount = DDS_DynamicData_get_member_count(sample);

    for (i=0; i<memberCount; i++) {

        retCode = DDS_DynamicData_get_member_info_by_index(
            sample, &info, i);

        if (retCode != DDS_RETCODE_OK) {
            RTI_RoutingServiceEnvironment_set_error(
                    env, "Error accessing dynamic data sample");
            return -1;
        }

        /* Serialize this member */
        writeCount = RTI_RoutingServiceSocketAdapter_write_member(
                sample, &info, bufferIt, length, env);

        if (writeCount < 0) {
            return -1;
        }

        bufferIt += writeCount;
        length -= writeCount;

        if (length-1 <= 0) {
            RTI_RoutingServiceEnvironment_set_error(
                    env, "Sample is too large");
            return -1;
        }

        /* Separator for next field-value */
        if (i < memberCount-1) {
            snprintf(bufferIt, length, ",");
            length--;
            bufferIt++;
        }
    }

    snprintf(bufferIt, length, "%c", RTI_SOCKET_ADAPTER_SAMPLE_SEPARATOR);
    length--;
    bufferIt++;

    if (length < 0) {
        RTI_RoutingServiceEnvironment_set_error(
                env, "Sample is too large");
        return -1;
    }

    return (int) (bufferIt - buffer);
}

/* ========================================================================= */
/*                                                                           */
/* Utility                                                                   */
/*                                                                           */
/* ========================================================================= */

char * RTI_RoutingServiceSocketAdapter_trim(char * str) 
{
    char * line = str;
    int pos = strlen(line) - 1;
    while (pos >= 0 && isspace(line[pos])) {
        line[pos] = '\0';
        --pos;
    }
    while (isspace(*line) && *line != '\0') {
        line++;
    }

    return line;
}

/*****************************************************************************/

int RTI_RoutingServiceSocketAdapter_assign(
    struct DDS_DynamicData * sample,
    const char * field,
    const char * value,
    RTI_RoutingServiceEnvironment * env) 
{
    DDS_ReturnCode_t retCode;
    struct DDS_DynamicDataMemberInfo info;
    DDS_Long longValue;
    DDS_Double doubleValue;
    DDS_DynamicDataMemberId unespecified = 
        DDS_DYNAMIC_DATA_MEMBER_ID_UNSPECIFIED;

    /*
     * Get information about the field
     */
    retCode = DDS_DynamicData_get_member_info(
        sample, &info, field, unespecified);

    if (retCode != DDS_RETCODE_OK) {
        RTI_RoutingServiceEnvironment_set_error(
                env, "Could not find field %s", field);
        return 0;
    }


    /*
     * Depending on the kind of the field we will convert
     * the string value to the appropiate type and assign it
     * to the dynamic data sample
     *
     * Only top-level primitive types are supported in this example
     *
     */
    switch (info.member_kind) {
    
    case DDS_TK_SHORT:
        longValue = atoi(value);
        retCode = DDS_DynamicData_set_short(
            sample, field, unespecified, (DDS_Short) longValue);
        break;
    case DDS_TK_ENUM:
    case DDS_TK_LONG:
        longValue = atoi(value);
        retCode = DDS_DynamicData_set_long(
            sample, field, unespecified, longValue);
        break;
    case DDS_TK_USHORT:
        longValue = atoi(value);
        retCode = DDS_DynamicData_set_ushort(
            sample, field, unespecified, (DDS_UnsignedShort) longValue);
        break;
    case DDS_TK_ULONG:
        longValue = atoi(value);
        retCode = DDS_DynamicData_set_ulong(
            sample, field, unespecified, (DDS_UnsignedLong) longValue);
        break;
    case DDS_TK_FLOAT:
        doubleValue = atof(value);
        retCode = DDS_DynamicData_set_float(
            sample, field, unespecified, (DDS_Float) doubleValue);
        break;
    case DDS_TK_DOUBLE:
        doubleValue = atof(value);
        retCode = DDS_DynamicData_set_double(
            sample, field, unespecified, doubleValue);
        break;
    case DDS_TK_BOOLEAN:
        if (!strcmp(value, "true") || !strcmp(value, "TRUE")) {
            longValue = 1;
        } else if (!strcmp(value, "false") || !strcmp(value, "FALSE")) {
            longValue = 0;
        } else {
            longValue = atoi(value);
        }
        
        retCode = DDS_DynamicData_set_boolean(
            sample, field, unespecified, 
            longValue ? DDS_BOOLEAN_TRUE : DDS_BOOLEAN_FALSE);
        break;
    case DDS_TK_CHAR:
        retCode = DDS_DynamicData_set_char(
            sample, field, unespecified, value[0]);
        break;
    case DDS_TK_OCTET:
        longValue = atoi(value);
        retCode = DDS_DynamicData_set_octet(
            sample, field, unespecified, (DDS_Octet) longValue);
        return 0;
    case DDS_TK_STRING:
        retCode = DDS_DynamicData_set_string(
            sample, field, unespecified, value);
        break;
    case DDS_TK_ALIAS:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (alias)", field);
        return 0;
    case DDS_TK_LONGLONG:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (long long)", field);
        return 0;
    case DDS_TK_ULONGLONG:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (ulong long)", field);
        return 0;
    case DDS_TK_WCHAR:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (wstring)", field);
        return 0;
    case DDS_TK_WSTRING:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (wstring)", field);
        return 0;
    case DDS_TK_STRUCT:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (struct)", field);
        return 0;
    case DDS_TK_UNION:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (union)", field);
        return 0;
    case DDS_TK_SEQUENCE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (sequence)", field);
        return 0;
    case DDS_TK_ARRAY:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (array)", field);
        return 0;
    case DDS_TK_LONGDOUBLE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (long double)", field);
        return 0;
    case DDS_TK_NULL:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (NULL)", field);
        return 0;
    case DDS_TK_VALUE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (value type)", field);
        return 0;
    case DDS_TK_SPARSE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (sparse type)", field);
        return 0;
    default:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (%d)", field, 
                (int) info.member_kind);
        return 0;
    }
    
    if (retCode != DDS_RETCODE_OK) {
        RTI_RoutingServiceEnvironment_set_error(
                env, "Error assigning %s=%s", field, value);
        return 0;
    }

    return 1;

}

/*****************************************************************************/

int RTI_RoutingServiceSocketAdapter_write_member(
    const struct DDS_DynamicData * sample,
    const struct DDS_DynamicDataMemberInfo * info,
    char * buffer, int maxLength,
    RTI_RoutingServiceEnvironment * env) 
{
    DDS_ReturnCode_t retCode;
    DDS_Long longValue;
    DDS_UnsignedLong ulongValue;
    DDS_Double doubleValue;
    DDS_Float floatValue;
    DDS_Short shortValue;
    DDS_UnsignedShort ushortValue;
    DDS_Boolean boolValue;
    DDS_Char charValue;
    DDS_Octet octetValue;
    DDS_DynamicDataMemberId fieldId;
    char * stringValue = NULL;
    const char * field;
    int writeCount = -1;

    fieldId = info->member_id;
    field = info->member_name;

    /*
     * Depending on the kind of the field we will convert
     * call the appropiate dynamic data method to retreive the
     * value and then write it into the buffer
     *
     * Only top-level primitive types are supported in this example
     *
     */
    switch (info->member_kind) {
    
    case DDS_TK_SHORT:
        retCode = DDS_DynamicData_get_short(
            sample, &shortValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%d", field, (int) shortValue);
        }
        break;
    case DDS_TK_ENUM:
    case DDS_TK_LONG:
        retCode = DDS_DynamicData_get_long(
            sample, &longValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%d", field, longValue);
        }
        break;
    case DDS_TK_USHORT:
        retCode = DDS_DynamicData_get_ushort(
            sample, &ushortValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%u", field, (unsigned int) ushortValue);
        }
        break;
    case DDS_TK_ULONG:
        retCode = DDS_DynamicData_get_ulong(
            sample, &ulongValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%u", field, (unsigned int) ulongValue);
        }
        break;
    case DDS_TK_FLOAT:
        retCode = DDS_DynamicData_get_float(
            sample, &floatValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%f", field, (double) floatValue);
        }
        break;
    case DDS_TK_DOUBLE:
        retCode = DDS_DynamicData_get_double(
            sample, &doubleValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%f", field, doubleValue);
        }
        break;
    case DDS_TK_BOOLEAN:
        retCode = DDS_DynamicData_get_boolean(
            sample, &boolValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%s", field, boolValue ? "true" : "false");
        }
        break;
    case DDS_TK_CHAR:
        retCode = DDS_DynamicData_get_char(
            sample, &charValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%c", field, (char) charValue);
        }
        break;
    case DDS_TK_OCTET:
        retCode = DDS_DynamicData_get_octet(
            sample, &octetValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            writeCount = snprintf(buffer, maxLength, "%s=%d", field, (int) octetValue);
        }
        break;
    case DDS_TK_STRING:
        /* The middleware will allocate the string for us */
        stringValue = NULL;
        ulongValue = 0;
        retCode = DDS_DynamicData_get_string(
            sample, &stringValue, &ulongValue, NULL, fieldId);
        if (retCode == DDS_RETCODE_OK) {
            if (strlen(stringValue) > 0) {
                writeCount = snprintf(buffer, maxLength, "%s=%s", field, stringValue);
            } else {
                writeCount = snprintf(buffer, maxLength, "%s=\"\"", field);
            }
            /* Free the allocated string */
            DDS_String_free(stringValue);
        }
        break;
    case DDS_TK_ALIAS:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (alias)", field);
        return -1;
    case DDS_TK_LONGLONG:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (long long)", field);
        return -1;
    case DDS_TK_ULONGLONG:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (ulong long)", field);
        return -1;
    case DDS_TK_WCHAR:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (wstring)", field);
        return -1;
    case DDS_TK_WSTRING:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (wstring)", field);
        return -1;
    case DDS_TK_STRUCT:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (struct)", field);
        return -1;
    case DDS_TK_UNION:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (union)", field);
        return -1;
    case DDS_TK_SEQUENCE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (sequence)", field);
        return -1;
    case DDS_TK_ARRAY:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (array)", field);
        return -1;
    case DDS_TK_LONGDOUBLE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (long double)", field);
        return -1;
    case DDS_TK_NULL:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (NULL)", field);
        return -1;
    case DDS_TK_VALUE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (value type)", field);
        return -1;
    case DDS_TK_SPARSE:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (sparse type)", field);
        return -1;
    default:
        RTI_RoutingServiceEnvironment_set_error(
                env, "Type of field %s not supported (%d)", field, 
                (int) info->member_kind);
        return -1;
    }

    if (retCode != DDS_RETCODE_OK) {
        RTI_RoutingServiceEnvironment_set_error(
                env, "Error writing field %s", field);
        return -1;
    }

    return writeCount;

}
