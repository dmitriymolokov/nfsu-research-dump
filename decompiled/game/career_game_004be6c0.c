/* Decompiled from Speed.exe @ 004be6c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004be6c0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if ((param_1 == -0x6edfbf62) || (param_1 == -0x4a68e40f)) {
    iVar2 = FUN_004cd610();
    cVar1 = DAT_0078a344;
    iVar3 = DAT_007361a8;
    iVar2 = (&DAT_007361b4)[iVar2];
    if (((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) || (DAT_00700b5c != 0)) {
      iVar5 = FUN_004cd610();
      iVar5 = (&DAT_00758948)[iVar5];
    }
    else {
      iVar5 = -1;
    }
    if (param_1 == -0x6edfbf62) {
      iVar5 = iVar5 + -1;
      if ((cVar1 == '\0') && (iVar3 == 0)) {
        if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
          if (iVar5 < 0) {
            iVar5 = 2;
          }
        }
        else if (iVar5 < 0) {
          iVar5 = 3;
        }
      }
      else if (iVar5 < -1) {
        iVar5 = 2;
      }
    }
    else if (param_1 == -0x4a68e40f) {
      iVar5 = iVar5 + 1;
      if ((cVar1 == '\0') && (iVar3 == 0)) {
        if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
          bVar8 = SBORROW4(iVar5,2);
          iVar3 = -2;
          bVar7 = iVar5 == 2;
        }
        else {
          bVar8 = SBORROW4(iVar5,3);
          iVar3 = -3;
          bVar7 = iVar5 == 3;
        }
        if (!bVar7 && bVar8 == iVar5 + iVar3 < 0) {
          iVar5 = 0;
        }
      }
      else if (2 < iVar5) {
        iVar5 = -1;
      }
    }
    iVar3 = FUN_004cd610();
    (&DAT_0078a388)[iVar3 * 0x38] = *(undefined1 *)(iVar5 + 0x2c + iVar2);
    *(undefined1 *)(iVar2 + 0x24) = *(undefined1 *)(iVar5 + 0x2c + iVar2);
    if (iVar5 != -1) {
      iVar2 = FUN_004cd610();
      (&DAT_00758948)[iVar2] = iVar5;
      DAT_00700b5c = 1;
      iVar2 = FUN_0047d680();
      if (iVar2 != 0) {
        FUN_0042e150();
      }
    }
    DAT_00758950 = DAT_00700b5c == 0;
    FUN_004be510();
    if (param_1 == -0x6edfbf62) {
      uVar6 = 10;
    }
    else {
      uVar6 = (param_1 != -0x4a68e40f) - 1 & 0xb;
    }
    if ((&DAT_006f8a48)[uVar6 * 2] != uVar6) {
      uVar4 = 0;
      do {
        if (*(uint *)((int)&DAT_006f8a48 + uVar4) == uVar6) break;
        uVar4 = uVar4 + 8;
      } while (uVar4 < 0x70);
    }
    FUN_004cd180(0);
  }
  return;
}

