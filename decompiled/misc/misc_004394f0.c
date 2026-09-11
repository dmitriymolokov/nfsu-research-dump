/* Decompiled from Speed.exe @ 004394f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x004397e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004394f0(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1bc) = 0xbf800000;
  FUN_00424f10();
  if (DAT_0073619c == 0) {
    return;
  }
  iVar3 = FUN_00435b30(DAT_0073619c);
  if (iVar3 != 0) {
    return;
  }
  iVar3 = FUN_00421960();
  if (iVar3 != 4) {
    return;
  }
  FUN_00432c70();
  iVar3 = FUN_00421a30();
  if (iVar3 != 0) {
    fVar6 = (float10)FUN_00432c80();
    uVar4 = FUN_00432c70();
    FUN_0041f0b0(uVar4);
    fVar7 = (float10)FUN_0040ed00();
    *(float *)(param_1 + 0x1bc) = (float)((float10)(float)fVar6 - fVar7);
  }
  cVar2 = FUN_00432e40();
  if ((cVar2 != '\0') || (DAT_0077b259 == '\0')) goto LAB_004397af;
  cVar2 = FUN_0041f600();
  if (cVar2 == '\0') {
    cVar2 = FUN_00424f20();
    if (cVar2 == '\0') {
      FUN_00417490();
      fVar6 = (float10)FUN_00424e00();
      if ((float10)DAT_006cc7a4 <= fVar6) goto LAB_00439615;
    }
    iVar3 = FUN_00421a30();
    if (iVar3 == 0) {
      FUN_00405560();
    }
  }
  else {
LAB_00439615:
    FUN_00424cc0();
  }
  FUN_00417490();
  fVar6 = (float10)FUN_00424e10();
  if (fVar6 <= (float10)_DAT_006b7980) {
    iVar3 = FUN_00421a30();
    if (iVar3 == 0) {
      FUN_00405560();
    }
  }
  else {
    FUN_00424cc0();
  }
  iVar3 = FUN_00421a30();
  if (iVar3 != 0) {
    FUN_0041f0b0(param_1 + 0x1ac);
    fVar6 = (float10)FUN_0040ed00();
    fVar1 = (float)fVar6;
    if (fVar1 <= _DAT_0077c788) {
      if (_DAT_006b7988 < fVar1) {
        *(undefined4 *)(param_1 + 0x1b4) = 1;
        *(float *)(param_1 + 0x1b8) = _DAT_0077c788 - fVar1;
      }
    }
    else {
      FUN_004314a0();
    }
  }
  iVar3 = FUN_00421a30();
  if (iVar3 != 0) {
    FUN_0041f0b0(param_1 + 0x1b0);
    fVar6 = (float10)FUN_0040ed00();
    fVar1 = (float)fVar6;
    if (fVar1 <= _DAT_0077c788) {
      if (_DAT_006b7988 < fVar1) {
        *(undefined4 *)(param_1 + 0x1b4) = 2;
        *(float *)(param_1 + 0x1b8) = _DAT_0077c788 - fVar1;
      }
    }
    else {
      FUN_004399a0(4);
      uVar9 = 9;
      uVar8 = 0;
      uVar4 = FUN_00435c10(0,9);
      uVar5 = FUN_00417490(uVar4);
      FUN_00435c50(uVar5,uVar4,uVar8,uVar9);
    }
  }
LAB_004397af:
  FUN_004390f0();
  iVar3 = FUN_00432c60();
  if ((iVar3 != 0) && (iVar3 = FUN_005647d0(), iVar3 != 0x238562c5)) {
    FUN_004399a0(0x20);
    FUN_0043a830();
  }
  return;
}

