
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
import com.rti.dds.typecode.*;


public class DateTimeTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int i=0;
        StructMember sm[] = new StructMember[6];

        sm[i]=new StructMember("year",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,0,false); i++;
        sm[i]=new StructMember("month",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,1,false); i++;
        sm[i]=new StructMember("day",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,2,false); i++;
        sm[i]=new StructMember("hour",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,3,false); i++;
        sm[i]=new StructMember("minute",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,4,false); i++;
        sm[i]=new StructMember("second",false,(short)-1,false,(TypeCode)TypeCode.TC_LONG,5,false); i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("DateTime",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,sm);
        return tc;
    }
}
