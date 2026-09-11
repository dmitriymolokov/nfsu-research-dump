/* Decompiled from Speed.exe @ 005b6109 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005b6109(int param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  pvVar2 = _malloc(0x2c);
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005b5f55();
  }
  if (iVar3 == 0) {
    uVar4 = 0x8007000e;
  }
  else if ((((*(int *)(param_2 + 0x18) == 0) || (*(int *)(*(int *)(param_2 + 0x18) + 4) != 9)) ||
           (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
          (((*(int *)(iVar1 + 4) != 2 || (*(int *)(iVar1 + 0x10) != 9)) ||
           (*(int *)(iVar1 + 0x18) == 0)))) {
    uVar4 = 0x80004005;
    FUN_005b5fa7(1);
  }
  else {
    *(int *)(iVar3 + 0x20) = *(int *)(iVar1 + 0x18);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(param_2 + 0x18);
    *(int *)(iVar3 + 0x28) = *(int *)(param_1 + 0x124);
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    *(int *)(param_1 + 0x124) = iVar3;
  }
  return uVar4;
}

