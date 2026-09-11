/* Decompiled from Speed.exe @ 005f75cb */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005f75cb(undefined4 param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pvVar1 = _malloc(0x38);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005f7709();
  }
  if (iVar2 != 0) {
    iVar3 = FUN_005f799b(param_1);
    if (-1 < iVar3) {
      uVar4 = FUN_005f73c0(iVar2);
      return uVar4;
    }
    FUN_005f7186(1);
  }
  return 0xffffffff;
}

