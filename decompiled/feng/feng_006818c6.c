/* Decompiled from Speed.exe @ 006818c6 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_006818c6(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint unaff_retaddr;
  short local_30;
  char local_2e;
  undefined1 local_2c [24];
  undefined4 local_14;
  undefined4 uStack_10;
  undefined2 uStack_c;
  uint local_8;
  
  local_8 = DAT_006eb720 ^ unaff_retaddr;
  ___dtold(&local_14,&param_1);
  iVar3 = FUN_00682466(local_14,uStack_10,uStack_c,0x11,0,&local_30);
  iVar2 = param_4;
  piVar1 = param_3;
  param_3[2] = iVar3;
  *param_3 = (int)local_2e;
  param_3[1] = (int)local_30;
  FUN_0067e1d0(param_4,local_2c);
  piVar1[3] = iVar2;
  return piVar1;
}

