/* Decompiled from Speed.exe @ 005a05b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005a05b0(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int unaff_EDI;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  int local_8;
  float local_4;
  
  fVar10 = (float10)DAT_006cc7a4;
  fVar11 = (float10)DAT_006cc7a4;
  fVar12 = (float10)DAT_006cc7a4;
  local_4 = 0.0;
  fVar13 = (float10)0.0;
  if (DAT_006ee3d8 != 0xffffffff) {
    puVar8 = &DAT_006ee3e0;
    uVar2 = DAT_006ee3d8;
    do {
      if (uVar2 < 0x20) {
        iVar9 = (&DAT_00733f78)[uVar2];
      }
      else {
        iVar9 = 0;
      }
      uVar2 = *puVar8;
      if ((uVar2 & 1) != 0) {
        fVar13 = fVar13 + (float10)*(int *)(iVar9 + 0x10);
      }
      if ((uVar2 & 2) != 0) {
        fVar11 = (float10)*(int *)(iVar9 + 0x14) + fVar11;
      }
      if ((uVar2 & 4) != 0) {
        fVar12 = (float10)*(int *)(iVar9 + 0x18) + fVar12;
      }
      uVar2 = puVar8[1];
      puVar8 = puVar8 + 3;
    } while (uVar2 != 0xffffffff);
    local_4 = (float)fVar13;
    if (DAT_006ee3d8 != 0xffffffff) {
      puVar7 = &DAT_006ee3d8;
      uVar2 = DAT_006ee3d8;
LAB_005a0652:
      if (uVar2 == 7) {
        bVar5 = 0;
        piVar6 = (int *)(unaff_EDI + 0x4c8);
        iVar9 = 4;
        do {
          if ((*piVar6 != 0) && (bVar1 = *(byte *)(*piVar6 + 0x11), bVar5 < bVar1)) {
            bVar5 = bVar1;
          }
          piVar6 = piVar6 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        if (bVar5 == 0) goto LAB_005a07eb;
        switch(bVar5) {
        case 1:
          local_8 = *(int *)(DAT_00733f94 + 0x10);
          break;
        case 2:
          local_8 = *(int *)(DAT_00733f94 + 0x14);
          break;
        case 3:
          iVar4 = DAT_00733f94;
switchD_005a07bf_caseD_3:
          local_8 = *(int *)(iVar4 + 0x18);
          break;
        case 4:
          local_8 = *(int *)(DAT_00733f94 + 0x1c);
          break;
        default:
          goto switchD_005a068f_default;
        }
        goto LAB_005a07e5;
      }
      if (uVar2 == 1) {
        iVar9 = 0x3b;
        piVar6 = (int *)(unaff_EDI + 0x538);
        do {
          if (*piVar6 != 0) {
            uVar3 = 3;
            goto LAB_005a074d;
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < 0x41);
        iVar9 = 0x53;
        piVar6 = (int *)(unaff_EDI + 0x598);
        do {
          if (*piVar6 != 0) {
            uVar3 = 2;
            goto LAB_005a074d;
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < 0x71);
        iVar9 = 0x43;
        piVar6 = (int *)(unaff_EDI + 0x558);
        do {
          if (*piVar6 != 0) {
            uVar3 = 1;
            goto LAB_005a074d;
          }
          iVar9 = iVar9 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar9 < 0x51);
      }
      else {
        iVar9 = *(int *)(unaff_EDI + 0x44c + puVar7[1] * 4);
        if (iVar9 != 0) {
          if (uVar2 < 0x20) {
            iVar4 = (&DAT_00733f78)[uVar2];
          }
          else {
            iVar4 = 0;
          }
          switch(*(undefined1 *)(iVar9 + 0x11)) {
          default:
            goto switchD_005a068f_default;
          case 1:
            local_8 = *(int *)(iVar4 + 0x10);
            break;
          case 2:
            local_8 = *(int *)(iVar4 + 0x14);
            break;
          case 3:
            goto switchD_005a07bf_caseD_3;
          case 4:
            local_8 = *(int *)(iVar4 + 0x1c);
          }
          goto LAB_005a07e5;
        }
      }
      goto LAB_005a07eb;
    }
  }
LAB_005a07fa:
  if (fVar13 <= fVar10) {
    if (fVar11 <= fVar10) {
      fVar10 = (fVar10 - fVar11) / (fVar12 - fVar11) + (float10)_DAT_006cc908;
    }
    else {
      fVar10 = (fVar10 - (float10)local_4) / (fVar11 - (float10)local_4) + (float10)_DAT_006cc7bc;
      fVar10 = fVar10 + fVar10;
    }
  }
  else {
    fVar10 = fVar10 / (float10)local_4 + fVar10 / (float10)local_4;
  }
  if ((float10)_DAT_006cc954 < fVar10) {
    fVar10 = (float10)_DAT_006cc954;
  }
  return fVar10;
LAB_005a074d:
  switch(uVar3) {
  default:
switchD_005a068f_default:
    local_8 = 0;
    break;
  case 1:
    local_8 = *(int *)(DAT_00733f7c + 0x10);
    break;
  case 2:
    local_8 = *(int *)(DAT_00733f7c + 0x14);
    break;
  case 3:
    local_8 = *(int *)(DAT_00733f7c + 0x18);
  }
LAB_005a07e5:
  fVar10 = (float10)local_8 + fVar10;
LAB_005a07eb:
  uVar2 = puVar7[3];
  puVar7 = puVar7 + 3;
  if (uVar2 == 0xffffffff) goto LAB_005a07fa;
  goto LAB_005a0652;
}

