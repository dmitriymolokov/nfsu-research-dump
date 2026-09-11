/* Decompiled from Speed.exe @ 004b9750 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b9750(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  iVar7 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 4);
      (puVar2 != puVar1 && (iVar7 = iVar7 + 1, puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
  }
  FUN_004f68c0(0x20,"MultiTrack_%d",iVar7 + 1);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar5 = FUN_004fd230();
  if (((iVar7 == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) || (iVar7 = FUN_004ffb70(), iVar7 == 0)
     ) {
    if (DAT_0073578c != 0) {
      iVar7 = FUN_004ef050(uVar5);
      goto LAB_004b97c5;
    }
  }
  else {
LAB_004b97c5:
    if (iVar7 != 0) {
      for (iVar8 = *(int *)(iVar7 + 0x4c); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
        iVar6 = FUN_004fd230();
        if (*(int *)(iVar8 + 0x30) == iVar6) {
          if (iVar8 != 0) {
            if (iVar8 != *(int *)(iVar7 + 0x54)) {
              *(int *)(iVar7 + 0x54) = iVar8;
              FUN_004ff030(iVar7);
              *(undefined4 *)(*(int *)(iVar7 + 0x54) + 0x10) = 0;
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          break;
        }
      }
    }
  }
  piVar3 = *(int **)(param_1 + 8);
  iVar7 = *piVar3;
  piVar4 = (int *)piVar3[1];
  *piVar4 = iVar7;
  *(int **)(iVar7 + 4) = piVar4;
  if (piVar3 + -1 != (int *)0x0) {
    (**(code **)piVar3[-1])(1);
  }
  iVar7 = 0;
  for (puVar2 = (undefined4 *)*puVar1;
      (puVar2 != puVar1 && (iVar7 = iVar7 + 1, puVar2 != (undefined4 *)0x0));
      puVar2 = (undefined4 *)*puVar2) {
  }
  FUN_004f68c0(0x20,"MultiTrack_%d",iVar7 + 1);
  iVar7 = *(int *)(param_1 + 0xc);
  uVar5 = FUN_004fd230();
  if (((iVar7 == 0) || (iVar7 = FUN_004f65d0(), iVar7 == 0)) || (iVar7 = FUN_004ffb70(), iVar7 == 0)
     ) {
    if (DAT_0073578c == 0) goto LAB_004b98e6;
    iVar7 = FUN_004ef050(uVar5);
  }
  if ((iVar7 != 0) && (iVar8 = *(int *)(iVar7 + 0x4c), iVar8 != 0)) {
    while (iVar6 = FUN_004fd230(), *(int *)(iVar8 + 0x30) != iVar6) {
      iVar8 = *(int *)(iVar8 + 4);
      if (iVar8 == 0) {
        FUN_004b99c0(param_1);
        return;
      }
    }
    if (iVar8 != 0) {
      if (iVar8 != *(int *)(iVar7 + 0x54)) {
        *(int *)(iVar7 + 0x54) = iVar8;
        FUN_004ff030(iVar7);
        *(undefined4 *)(*(int *)(iVar7 + 0x54) + 0x10) = 0;
      }
      *(undefined4 *)(iVar8 + 0x10) = 0;
    }
  }
LAB_004b98e6:
  FUN_004b99c0(param_1);
  return;
}

