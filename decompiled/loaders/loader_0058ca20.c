/* Decompiled from Speed.exe @ 0058ca20 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058ca20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((DAT_007301e4 != 0) && (FUN_005657d0(), DAT_007301e4 != 0)) {
    FUN_00565810();
  }
  puVar2 = *(undefined4 **)(param_1 + 0x4c);
  while( true ) {
    if (puVar2 == (undefined4 *)(param_1 + 0x4c)) {
      return 0;
    }
    iVar3 = FUN_0058c5a0(param_1,puVar2,0);
    if (iVar3 != 0) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  FUN_0058c760();
  iVar3 = DAT_007301e4;
  if (DAT_007301e4 != 0) {
    iVar1 = DAT_007301e4 + 0x3c;
    FUN_0063f190(iVar1);
    for (puVar2 = *(undefined4 **)(iVar3 + 4); puVar2 != (undefined4 *)(iVar3 + 4);
        puVar2 = (undefined4 *)*puVar2) {
    }
    FUN_0063f1a0(iVar1);
    if (DAT_007301e4 != 0) {
      FUN_00565810();
    }
  }
  return 1;
}

