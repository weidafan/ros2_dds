
/*
  WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

  This file was generated from .idl using "rtiddsgen".
  The rtiddsgen tool is part of the RTI Connext distribution.
  For more information, type 'rtiddsgen -help' at a command shell
  or consult the RTI Connext manual.
*/
    
import com.rti.dds.typecode.*;


public class MessageTypeCode {
    public static final TypeCode VALUE = getTypeCode();

    private static TypeCode getTypeCode() {
        TypeCode tc = null;
        int i=0;
        StructMember sm[] = new StructMember[2];

        sm[i]=new StructMember("time",false,(short)-1,false,(TypeCode)DateTimeTypeCode.VALUE,0,false); i++;
        sm[i]=new StructMember("msg",false,(short)-1,false,(TypeCode)new TypeCode(TCKind.TK_STRING,(MSG_MAX_LENGTH.value)),1,false); i++;

        tc = TypeCodeFactory.TheTypeCodeFactory.create_struct_tc("Message",ExtensibilityKind.EXTENSIBLE_EXTENSIBILITY,sm);
        return tc;
    }
}
