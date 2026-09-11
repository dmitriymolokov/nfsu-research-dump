/* Decompiled from Speed.exe @ 0051aed0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051aed0(void)

{
  byte *pbVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  if (DAT_00767798 == '\0') {
    bVar2 = true;
    piVar3 = &DAT_0075f1d8;
LAB_0051aee0:
    if ((int)piVar3 < 0x75f204) goto code_r0x0051aee7;
    if (!bVar2) goto LAB_0051af43;
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar4 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar5 = 0;
    do {
      if ((&DAT_00744ab0)[iVar5 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar5 * 8);
        goto LAB_0051af36;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1b);
    iVar6 = 0;
LAB_0051af36:
    (&DAT_007602a1)[iVar6 * 0x454] = 1;
  }
LAB_0051af43:
  if (DAT_00767799 != '\0') {
LAB_0051afc0:
    if (DAT_0076779a == '\0') {
      bVar2 = true;
      piVar3 = &DAT_0075f1d8;
      while ((int)piVar3 < 0x75f204) {
        if (((piVar3 != (int *)&DAT_0075f200) && (piVar3 != (int *)&DAT_0075f1fc)) && (*piVar3 < 3))
        {
          bVar2 = false;
        }
        piVar3 = piVar3 + 1;
        if (!bVar2) {
          return;
        }
      }
      if (bVar2) {
        pcVar7 = "MAGAZINE_TASK_1";
        iVar6 = -1;
        uVar4 = 0x4d;
        do {
          iVar6 = iVar6 * 0x21 + uVar4;
          pbVar1 = (byte *)(pcVar7 + 1);
          uVar4 = (uint)*pbVar1;
          pcVar7 = pcVar7 + 1;
        } while (*pbVar1 != 0);
        iVar5 = 0;
        do {
          if ((&DAT_00744ab0)[iVar5 * 2] == iVar6) {
            (&DAT_00760b49)[*(int *)(&DAT_00744ab4 + iVar5 * 8) * 0x454] = 1;
            return;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x1b);
        DAT_00760b49 = 1;
      }
    }
    return;
  }
  bVar2 = true;
  piVar3 = &DAT_0075f1d8;
  while ((int)piVar3 < 0x75f204) {
    if (((piVar3 != (int *)&DAT_0075f200) && (piVar3 != (int *)&DAT_0075f1fc)) && (*piVar3 < 2)) {
      bVar2 = false;
    }
    piVar3 = piVar3 + 1;
    if (!bVar2) goto LAB_0051afc0;
  }
  if (!bVar2) goto LAB_0051afc0;
  pcVar7 = "MAGAZINE_TASK_1";
  iVar6 = -1;
  uVar4 = 0x4d;
  do {
    iVar6 = iVar6 * 0x21 + uVar4;
    pbVar1 = (byte *)(pcVar7 + 1);
    uVar4 = (uint)*pbVar1;
    pcVar7 = pcVar7 + 1;
  } while (*pbVar1 != 0);
  iVar5 = 0;
  do {
    if ((&DAT_00744ab0)[iVar5 * 2] == iVar6) {
      iVar6 = *(int *)(&DAT_00744ab4 + iVar5 * 8);
      goto LAB_0051afb3;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x1b);
  iVar6 = 0;
LAB_0051afb3:
  (&DAT_007606f5)[iVar6 * 0x454] = 1;
  goto LAB_0051afc0;
code_r0x0051aee7:
  if (((piVar3 != (int *)&DAT_0075f200) && (piVar3 != (int *)&DAT_0075f1fc)) && (*piVar3 < 1)) {
    bVar2 = false;
  }
  piVar3 = piVar3 + 1;
  if (!bVar2) goto LAB_0051af43;
  goto LAB_0051aee0;
}

