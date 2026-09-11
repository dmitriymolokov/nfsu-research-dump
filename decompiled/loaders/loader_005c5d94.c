/* Decompiled from Speed.exe @ 005c5d94 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005c5d94(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = _malloc(0x10);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005c5202(param_2,*(undefined4 *)(param_1 + 0x38));
  }
  if (iVar2 == 0) {
    uVar3 = 0x8007000e;
  }
  else {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x38);
    *(int *)(*(int *)(param_1 + 0x50) + 0x38) = iVar2;
    if ((*(int *)(param_1 + 0x38) == 0) || (param_2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    uVar3 = 0;
  }
  return uVar3;
}

