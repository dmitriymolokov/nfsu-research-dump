/* Decompiled from Speed.exe @ 004f44c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f44c0(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  int unaff_EDI;
  int local_8;
  
  *(undefined4 *)(unaff_EDI + 8) = 0;
  *(undefined4 *)(unaff_EDI + 0xc) = 0;
  *(undefined4 *)(unaff_EDI + 0x10) = 0;
  *(undefined4 *)(unaff_EDI + 0x14) = 0;
  *(undefined4 *)(unaff_EDI + 0x18) = 0;
  *(undefined4 *)(unaff_EDI + 0x24) = 0;
  *(int *)(unaff_EDI + 0x1c) = param_2 + 8;
  *(int *)(unaff_EDI + 0x20) = param_2 + 0x108;
  iVar3 = FUN_004fd230();
  local_8 = 0;
LAB_004f44f8:
  pcVar5 = *(char **)(unaff_EDI + 0x1c);
  iVar9 = 0;
  if (pcVar5 != (char *)0x0) {
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      iVar6 = iVar9 + 1;
      iVar9 = iVar9 + 1;
      cVar1 = pcVar5[iVar6];
    }
  }
  if (local_8 < iVar9) {
    iVar9 = 0;
    pbVar12 = (byte *)(pcVar5 + local_8);
    do {
      uVar4 = 0;
      piVar10 = &DAT_006ee650;
      do {
        pbVar11 = pbVar12;
        if (*piVar10 == iVar9) {
          if ((uVar4 & 0xfffffff) != 0xff9119b) {
            pcVar5 = (&PTR_s_ENGLISH_006ee654)[uVar4 * 4];
            goto LAB_004f4540;
          }
          break;
        }
        piVar10 = piVar10 + 4;
        uVar4 = uVar4 + 1;
      } while ((int)piVar10 < 0x6ee6f0);
      pcVar5 = "UNKNOWN";
LAB_004f4540:
      do {
        bVar8 = *pbVar11;
        if (('`' < (char)bVar8) && ((char)bVar8 < '{')) {
          bVar8 = bVar8 & 0x5f;
        }
        bVar2 = *pcVar5;
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 & 0x5f;
        }
        pcVar5 = pcVar5 + 1;
      } while (((bVar8 != 0) && (bVar2 != 0)) && (pbVar11 = pbVar11 + 1, bVar8 == bVar2));
      if (((bVar8 == bVar2) && (0 < local_8)) && (pbVar12[-1] == 0x5f)) {
        local_8 = local_8 + 1;
        pbVar12[-1] = 0;
        goto LAB_004f44f8;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0xc);
    local_8 = local_8 + 1;
    goto LAB_004f44f8;
  }
  iVar6 = FUN_006387c0(*(int *)(unaff_EDI + 0x20) + 0x100);
  pbVar12 = *(byte **)(unaff_EDI + 0x1c);
  iVar9 = -1;
  *(int *)(unaff_EDI + 0xc) = iVar6;
  if (pbVar12 != (byte *)0x0) {
    bVar8 = *pbVar12;
    while (bVar8 != 0) {
      if (('`' < (char)bVar8) && ((char)bVar8 < '{')) {
        bVar8 = bVar8 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar8;
      pbVar11 = pbVar12 + 1;
      pbVar12 = pbVar12 + 1;
      bVar8 = *pbVar11;
    }
  }
  pbVar12 = *(byte **)(unaff_EDI + 0x20);
  *(int *)(unaff_EDI + 0x14) = iVar9;
  iVar9 = -1;
  if (pbVar12 != (byte *)0x0) {
    bVar8 = *pbVar12;
    while (bVar8 != 0) {
      if (('`' < (char)bVar8) && ((char)bVar8 < '{')) {
        bVar8 = bVar8 - 0x20;
      }
      iVar9 = iVar9 * 0x21 + (uint)bVar8;
      pbVar11 = pbVar12 + 1;
      pbVar12 = pbVar12 + 1;
      bVar8 = *pbVar11;
    }
  }
  *(int *)(unaff_EDI + 0x18) = iVar9;
  *(float *)(unaff_EDI + 0x24) =
       (float)((uint)*(byte *)(iVar6 + 0x13) + (uint)*(byte *)(iVar6 + 0x12));
  uVar7 = FUN_005461c0(iVar9,0,0);
  *(undefined4 *)(unaff_EDI + 8) = uVar7;
  iVar9 = 0;
  piVar10 = &DAT_006f9498;
  do {
    if (iVar3 == *piVar10) {
      if (iVar9 * 0xc != -0x6f9498) {
        *(undefined4 *)(unaff_EDI + 0x28) = (&DAT_006f949c)[iVar9 * 3];
        *(undefined4 *)(unaff_EDI + 0x2c) = *(undefined4 *)(iVar9 * 0xc + 0x6f94a0);
        return;
      }
      break;
    }
    piVar10 = piVar10 + 3;
    iVar9 = iVar9 + 1;
  } while ((int)piVar10 < 0x6f94c8);
  *(undefined4 *)(unaff_EDI + 0x28) = 0;
  *(undefined4 *)(unaff_EDI + 0x2c) = 0x3f800000;
  return;
}

