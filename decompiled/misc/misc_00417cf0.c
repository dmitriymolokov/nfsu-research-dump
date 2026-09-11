/* Decompiled from Speed.exe @ 00417cf0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_00417cf0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte local_20;
  byte local_1f [31];
  
  iVar8 = 0;
  if (*(int *)(param_1 + 0x260) != 0) {
    iVar8 = *(int *)(*(int *)(param_1 + 0x260) + 8);
    if (5 < iVar8) {
      iVar8 = 5;
    }
    iVar3 = 0;
    if (0 < iVar8) {
      do {
        iVar3 = iVar3 + 1;
        FUN_004f68c0(0x20,"menubar%d",iVar3);
        iVar9 = -1;
        pbVar5 = &local_20;
        bVar2 = local_20;
        while (bVar2 != 0) {
          if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
            bVar2 = bVar2 - 0x20;
          }
          pbVar1 = pbVar5 + 1;
          iVar9 = iVar9 * 0x21 + (uint)bVar2;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if (((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
           (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
          iVar7 = *(int *)(iVar4 + 0x88);
          iVar10 = 0;
          if (iVar7 != 0) {
            piVar6 = *(int **)(iVar4 + 0x84);
            do {
              if (*(int *)(*piVar6 + 0x10) == iVar9) {
                iVar10 = *piVar6;
              }
              piVar6 = piVar6 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            if (iVar10 != 0) {
              *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfbffffff;
            }
          }
        }
      } while (iVar3 < iVar8);
      if (4 < iVar3) {
        return iVar3;
      }
    }
    iVar3 = iVar3 + 1;
    do {
      FUN_004f68c0(0x20,"menubar%d",iVar3);
      iVar9 = -1;
      pbVar5 = &local_20;
      bVar2 = local_20;
      while (bVar2 != 0) {
        if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
          bVar2 = bVar2 - 0x20;
        }
        pbVar1 = pbVar5 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar2;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar1;
      }
      iVar8 = *(int *)(param_1 + 0xc);
      if (DAT_0073578c != 0) {
        iVar4 = FUN_004f3f90(&DAT_00746104);
        iVar8 = 0;
        if ((iVar4 != 0) && (iVar8 = *(int *)(iVar4 + 0x18), iVar8 != 0)) {
          iVar4 = *(int *)(iVar8 + 0x88);
          iVar7 = 0;
          if (iVar4 != 0) {
            piVar6 = *(int **)(iVar8 + 0x84);
            do {
              iVar8 = *piVar6;
              if (*(int *)(iVar8 + 0x10) == iVar9) {
                iVar7 = iVar8;
              }
              piVar6 = piVar6 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (iVar7 != 0) {
              *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x4000000;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  return iVar8;
}

