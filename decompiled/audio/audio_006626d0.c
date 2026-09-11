/* Decompiled from Speed.exe @ 006626d0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006626d0(undefined4 param_1)

{
  uint unaff_retaddr;
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  FUN_00662410(local_14,param_1);
  return CONCAT31(CONCAT21(CONCAT11(local_10,local_f),local_e),local_d);
}

