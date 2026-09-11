/* Decompiled from Speed.exe @ 0067a22f */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0067a22f(undefined4 *param_1,int param_2,int param_3)

{
  uint unaff_retaddr;
  undefined1 local_30 [24];
  int local_18;
  int local_14;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  FUN_006818c6(*param_1,param_1[1],&local_18,local_30);
  FUN_00681795((uint)(local_18 == 0x2d) + param_2,local_14 + param_3,&local_18);
  FUN_0067a193(param_2,param_3,0);
  return param_2;
}

