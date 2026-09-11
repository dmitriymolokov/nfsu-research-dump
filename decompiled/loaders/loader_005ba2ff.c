/* Decompiled from Speed.exe @ 005ba2ff */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005ba2ff(int param_1,undefined4 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 0xc) != 0) && (param_3 == 0)) {
    param_3 = *(int *)(*(int *)(param_1 + 0xc) + 0x14);
  }
  pvVar1 = _malloc(0x20);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005d7c6e(param_2,param_3,0,*(undefined4 *)(param_1 + 0xc));
  }
  if (iVar2 == 0) {
    FUN_005ba278(param_1,0,0,"internal error: out of memory");
    uVar3 = 0x8007000e;
  }
  else {
    *(int *)(param_1 + 0xc) = iVar2;
    uVar3 = 0;
  }
  return uVar3;
}

