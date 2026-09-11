/* Decompiled from Speed.exe @ 005c10a3 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005c10a3(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    iVar2 = FUN_005c0e2d(param_3,&param_2);
    if (iVar2 < 0) {
      FUN_005ba1d9(param_1,param_1 + 0x20,0xbf4,
                   "vector dimension must be a literal scalar expression");
    }
    else if ((param_2 == 0) || (4 < param_2)) {
      FUN_005ba1d9(param_1,param_1 + 0x20,0xbec,"vector dimension must be between 1 and %u",4);
    }
    else {
      pvVar3 = _malloc(0x24);
      if (pvVar3 != (void *)0x0) {
        uVar4 = FUN_005d814c(1,*(undefined4 *)(uVar1 + 0x14),1,param_2,0);
        return uVar4;
      }
    }
  }
  return 0;
}

