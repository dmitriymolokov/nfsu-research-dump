/* Decompiled from Speed.exe @ 004e02d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e02d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 9) = 0;
  if (iVar1 != 0) {
    for (iVar3 = *(int *)(iVar1 + 0x4c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
      iVar2 = FUN_004fd230();
      if (*(int *)(iVar3 + 0x30) == iVar2) {
        if (iVar3 != 0) {
          if (iVar3 != *(int *)(iVar1 + 0x54)) {
            *(int *)(iVar1 + 0x54) = iVar3;
            FUN_004ff030(iVar1);
            *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar3 + 0x10) = 0;
        }
        break;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc + *(int *)(param_1 + 4) * 4);
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0x4c), iVar3 != 0)) {
    while (iVar2 = FUN_004fd230(), *(int *)(iVar3 + 0x30) != iVar2) {
      iVar3 = *(int *)(iVar3 + 4);
      if (iVar3 == 0) {
        return;
      }
    }
    if (iVar3 != 0) {
      if (iVar3 != *(int *)(iVar1 + 0x54)) {
        *(int *)(iVar1 + 0x54) = iVar3;
        FUN_004ff030(iVar1);
        *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  return;
}

