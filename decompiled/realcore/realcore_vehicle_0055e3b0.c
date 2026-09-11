/* Decompiled from Speed.exe @ 0055e3b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055e3b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_004ab510();
  iVar2 = FUN_0055e350(*(undefined4 *)(iVar1 + 8));
  if ((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x70))) {
    *(int *)(param_1 + 0x70) = iVar2;
  }
  uVar3 = FUN_004ad6d0(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x18));
  FUN_00495f00(uVar3);
  FUN_004f68c0(0x20,"LapsData");
  if ((DAT_00777cb4 == 1) || (DAT_00777cb4 == 3)) {
    FUN_004f67f0(&DAT_006ca778,0);
  }
  else {
    FUN_004f67f0(&DAT_006ca778,*(undefined4 *)(iVar1 + 0x10));
  }
  if ((((DAT_00777cb4 != 1) && (DAT_00777cb4 != 3)) && (DAT_00777b58 != 1)) &&
     ((DAT_00777b58 != 4 && (DAT_0073dafc == -1)))) goto LAB_0055e594;
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = FUN_004fd230();
  if ((iVar1 == 0) || ((iVar1 = FUN_004f65d0(), iVar1 == 0 || (iVar1 = FUN_004ffb70(), iVar1 == 0)))
     ) {
    if (DAT_0073578c != 0) {
      iVar1 = FUN_004ef050(uVar3);
      goto LAB_0055e4d5;
    }
  }
  else {
LAB_0055e4d5:
    if (iVar1 != 0) {
      for (iVar2 = *(int *)(iVar1 + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
        iVar4 = FUN_004fd230();
        if (*(int *)(iVar2 + 0x30) == iVar4) {
          if (iVar2 != 0) {
            if (iVar2 != *(int *)(iVar1 + 0x54)) {
              *(int *)(iVar1 + 0x54) = iVar2;
              FUN_004ff030(iVar1);
              *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = FUN_004fd230();
  if (((iVar1 == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) || (iVar1 = FUN_004ffb70(), iVar1 == 0)
     ) {
    if (DAT_0073578c == 0) goto LAB_0055e594;
    iVar1 = FUN_004ef050(uVar3);
  }
  if (iVar1 != 0) {
    for (iVar2 = *(int *)(iVar1 + 0x4c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      iVar4 = FUN_004fd230();
      if (*(int *)(iVar2 + 0x30) == iVar4) {
        if (iVar2 != 0) {
          if (iVar2 != *(int *)(iVar1 + 0x54)) {
            *(int *)(iVar1 + 0x54) = iVar2;
            FUN_004ff030(iVar1);
            *(undefined4 *)(*(int *)(iVar1 + 0x54) + 0x10) = 0;
          }
          *(undefined4 *)(iVar2 + 0x10) = 0;
        }
        break;
      }
    }
  }
LAB_0055e594:
  if (((DAT_00777b58 == 1) || (DAT_00777b58 == 4)) || (DAT_0073dafc != -1)) {
    FUN_004f6bd0("GreyOut",1);
    FUN_004f6bd0("GreyOut",1);
  }
  return;
}

