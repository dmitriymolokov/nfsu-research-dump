/* Decompiled from Speed.exe @ 0059bca0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __thiscall FUN_0059bca0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  FUN_00571ea0(0,"TrackedController");
  (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
  FUN_00571c20(param_2,param_1 + 0xc,0x20,0xffffffff,0);
  FUN_00442d10();
  FUN_00571c20(param_2,param_1 + 0x30,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x34,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x38,4,0xffffffff,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10;
  *(int *)(iVar1 + param_2 + 0x58) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0x58 + param_2);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

