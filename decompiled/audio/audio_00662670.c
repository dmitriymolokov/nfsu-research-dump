/* Decompiled from Speed.exe @ 00662670 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_00662670(undefined4 param_1)

{
  uint unaff_retaddr;
  undefined1 local_14 [4];
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  local_d = (undefined1)param_1;
  local_e = (undefined1)((uint)param_1 >> 8);
  local_f = (undefined1)((uint)param_1 >> 0x10);
  local_10 = (undefined1)((uint)param_1 >> 0x18);
  FUN_00662490(local_14,&DAT_00717700,0x14);
  return &DAT_00717700;
}

