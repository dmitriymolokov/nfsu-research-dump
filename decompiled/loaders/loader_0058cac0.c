/* Decompiled from Speed.exe @ 0058cac0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058cac0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 == 0) {
    param_3 = param_2;
  }
  if (DAT_007301e4 == 0) {
    iVar4 = 0;
    iVar5 = 0;
  }
  else {
    iVar4 = FUN_005657d0();
    iVar5 = 0;
    if (DAT_007301e4 != 0) {
      iVar5 = FUN_00565810();
      iVar5 = iVar5 + -0x58;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
  }
  if ((iVar4 < param_3) || (iVar5 < param_2)) {
    iVar3 = FUN_0058ca20(param_1);
    iVar2 = DAT_007301e4;
    while (DAT_007301e4 = iVar2, iVar3 != 0) {
      if (iVar2 == 0) {
        iVar4 = 0;
        iVar5 = 0;
      }
      else {
        FUN_0063f190(iVar2 + 0x3c);
        iVar4 = 0;
        for (puVar1 = *(undefined4 **)(iVar2 + 4); puVar1 != (undefined4 *)(iVar2 + 4);
            puVar1 = (undefined4 *)*puVar1) {
          iVar4 = iVar4 + puVar1[2];
        }
        FUN_0063f1a0(iVar2 + 0x3c);
        iVar5 = 0;
        if (DAT_007301e4 != 0) {
          iVar5 = FUN_00565810();
          iVar5 = iVar5 + -0x58;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
        }
      }
      if ((param_3 <= iVar4) && (param_2 <= iVar5)) break;
      iVar3 = FUN_0058ca20(param_1);
      iVar2 = DAT_007301e4;
    }
  }
  if ((param_3 <= iVar4) && (param_2 <= iVar5)) {
    return 1;
  }
  return 0;
}

