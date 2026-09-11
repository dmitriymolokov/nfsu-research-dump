/* Decompiled from Speed.exe @ 0049f7a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049f7a0(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  int iVar3;
  
  *(undefined4 *)(unaff_EBX + 8) = 3;
  if (((*(int *)(unaff_EBX + 0x10) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) goto LAB_0049f826;
    iVar1 = FUN_004ef050(0x11bbe03f);
  }
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
LAB_0049f826:
  if (((*(int *)(unaff_EBX + 0x10) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar1 = FUN_004ef050(0x618eb2d7);
  }
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

