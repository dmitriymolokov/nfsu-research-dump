/* Decompiled from Speed.exe @ 005f7478 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005f7478(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  pvVar1 = _malloc(0x34);
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0061c398();
  }
  if (iVar2 != 0) {
    iVar3 = FUN_0061c39b(param_1,param_2,param_3,param_4);
    if (-1 < iVar3) {
      uVar4 = FUN_005f71a2(iVar2);
      return uVar4;
    }
    FUN_005f716a(1);
  }
  return 0xffffffff;
}

