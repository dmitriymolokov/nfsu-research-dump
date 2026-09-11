/* Decompiled from Speed.exe @ 0067a11f */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0067a11f(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  uint unaff_retaddr;
  undefined1 local_30 [24];
  int local_18 [4];
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  FUN_006818c6(*param_1,param_1[1],local_18,local_30);
  FUN_00681795((uint)(0 < param_3) + param_2 + (uint)(local_18[0] == 0x2d),param_3 + 1,local_18);
  __cftoe2(param_3,param_4,0);
  return param_2;
}

