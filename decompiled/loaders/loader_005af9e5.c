/* Decompiled from Speed.exe @ 005af9e5 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005af9e5(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0x8876086c;
  }
  else {
    pvVar1 = _malloc(0x14);
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005b171f();
    }
    if (iVar2 == 0) {
      uVar3 = 0x8007000e;
    }
    else {
      *param_1 = iVar2;
    }
  }
  return uVar3;
}

