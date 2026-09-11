/* Decompiled from Speed.exe @ 005f74cf */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005f74cf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = _malloc(0x60);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0061c398();
  }
  if (iVar2 != 0) {
    iVar2 = FUN_005f7c08(param_1,param_2,param_3,param_4);
    if (-1 < iVar2) {
      uVar3 = FUN_005f725a();
      return uVar3;
    }
    FUN_005f716a();
  }
  return 0xffffffff;
}

