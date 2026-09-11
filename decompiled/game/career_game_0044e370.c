/* Decompiled from Speed.exe @ 0044e370 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0044e370(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"AIAction");
  FUN_00458dc0();
  FUN_00571c20(param_2,param_1 + 0x1e4,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1ec,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1e8,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x1f0,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x1f2,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x1e0,1,1,0);
  FUN_00571c20(param_2,param_1 + 0x1f1,1,1,0);
  FUN_00571c20(param_2,param_1 + 499,1,1,0);
  FUN_00571c20(param_2,param_1 + 500,4,4,1);
  FUN_0044d670(param_2);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

