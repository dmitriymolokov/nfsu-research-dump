/* Decompiled from Speed.exe @ 00445180 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00445180(void)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int unaff_EDI;
  float10 fVar12;
  short local_4 [2];
  
  if ((*(int *)(unaff_EDI + 0x580) == 0) ||
     ((cVar5 = FUN_00444fb0(unaff_EDI,local_4), *(char *)(unaff_EDI + 0x15d) != '\0' &&
      (cVar5 == '\0')))) {
    return 1;
  }
  if (2 < *(int *)(unaff_EDI + 0x10)) {
    return 0;
  }
  if (cVar5 != '\0') {
    if (0 < *(int *)(unaff_EDI + 0x10)) {
      return 0;
    }
    *(undefined1 *)(unaff_EDI + 0x179) = 0;
    FUN_00444e90(unaff_EDI);
    FUN_004443e0();
    *(undefined1 *)(unaff_EDI + 0x15c) = 1;
    *(undefined1 *)(unaff_EDI + 0x160) = 0;
    _DAT_006f3dac = 0;
    fVar12 = (float10)FUN_00585fa0();
    *(float *)(unaff_EDI + 0x16c) = (float)fVar12;
    *(undefined4 *)(unaff_EDI + 0x174) = DAT_006f0888;
    iVar9 = 0;
    do {
      sVar2 = local_4[iVar9];
      puVar1 = (undefined4 *)(iVar9 * 0x44 + 0xd4 + unaff_EDI);
      if (*(short *)((int)puVar1 + 0x12) != sVar2) {
        *(short *)((int)puVar1 + 0x12) = sVar2;
        puVar1[8] = puVar1[1];
        puVar1[7] = *puVar1;
      }
      if (iVar9 == 0) {
        FUN_00445730();
      }
      else if (0 < sVar2) {
        uVar6 = FUN_00445770();
        FUN_00565da0("%s - %s",unaff_EDI + 0x161,uVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    FUN_00444b50(unaff_EDI);
  }
  if (*(char *)(unaff_EDI + 0x15e) == '\0') {
    cVar5 = FUN_00444ee0();
    if (cVar5 == '\0') {
      return 0;
    }
    *(undefined1 *)(unaff_EDI + 0x15e) = 1;
  }
  iVar9 = *(int *)(unaff_EDI + 0x10);
  bVar4 = true;
  do {
    if ((2 < iVar9) || (!bVar4)) {
      if (*(int *)(unaff_EDI + 0x10) < 1) {
        if (*(char *)(unaff_EDI + 0x15f) == '\0') {
          *(undefined1 *)(unaff_EDI + 0x15d) = 1;
          *(undefined1 *)(unaff_EDI + 0x15c) = 0;
          _DAT_006f3dac = 1;
          *(undefined1 *)(unaff_EDI + 0x178) = 1;
          return 1;
        }
        *(undefined1 *)(unaff_EDI + 0x15e) = 0;
      }
      return 0;
    }
    iVar9 = *(int *)(unaff_EDI + 0x17c);
    iVar8 = -1;
    iVar11 = 0;
    if (iVar9 < 1) {
LAB_004452ed:
      bVar4 = false;
    }
    else {
      piVar10 = (int *)(unaff_EDI + 0x180);
      do {
        iVar3 = *piVar10;
        if (*(int *)(iVar3 + 0xc) == 1) {
          iVar7 = (int)*(short *)(iVar3 + 8);
          if (1000000 < *(int *)(iVar3 + 0x18)) {
            iVar7 = 0x7fffffff;
          }
          if (iVar8 < iVar7) {
            iVar8 = iVar7;
            iVar11 = iVar3;
          }
        }
        piVar10 = piVar10 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (iVar11 == 0) goto LAB_004452ed;
      FUN_004446e0();
    }
    iVar9 = *(int *)(unaff_EDI + 0x10);
  } while( true );
}

