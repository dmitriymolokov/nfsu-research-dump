/* Decompiled from Speed.exe @ 005b0eda */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005b0eda(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int param_6,int param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_8;
  iVar1 = param_4;
  param_4 = param_5 + param_4 + param_6;
  *param_8 = 0;
  param_8 = (undefined4 *)(param_4 + param_7);
  FUN_005b0c4b(param_1,&param_2,&param_3,iVar1,&param_5,&param_4,&param_8,puVar2);
  return;
}

