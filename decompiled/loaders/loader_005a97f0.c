/* Decompiled from Speed.exe @ 005a97f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005a97f0(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  char *pcVar8;
  int *unaff_ESI;
  int local_4c [3];
  byte local_40 [64];
  
  iVar4 = *unaff_ESI * 0xc90 + DAT_00734588;
  local_40[0] = *(byte *)(iVar4 + 0x20);
  iVar4 = iVar4 + 0x20;
  bVar6 = local_40[0];
  if (local_40[0] != 0) {
    pbVar7 = local_40;
    do {
      bVar2 = *(byte *)(iVar4 + 1);
      iVar4 = iVar4 + 1;
      pbVar7 = pbVar7 + 1;
      *pbVar7 = bVar2;
      bVar6 = local_40[0];
    } while (bVar2 != 0);
  }
  if (unaff_ESI[0x119] == 0) {
    local_4c[0] = 1;
    local_4c[1] = 2;
    local_4c[2] = 5;
    iVar4 = 0;
    do {
      if ((unaff_ESI[local_4c[iVar4] + 0x113] != 0) &&
         (*(char *)(unaff_ESI[local_4c[iVar4] + 0x113] + 0x11) != '\0')) {
        iVar4 = 0;
        if (bVar6 != 0) {
          pbVar7 = local_40;
          iVar5 = iVar4;
          do {
            local_40[iVar5] = *pbVar7;
            iVar4 = iVar5 + 1;
            iVar3 = iVar5 + 1;
            pbVar7 = local_40 + iVar5 + 1;
            iVar5 = iVar4;
          } while (local_40[iVar3] != 0);
        }
        bVar6 = 0x5f;
        pcVar8 = "_DOORLINE_KIT_MASK";
        do {
          local_40[iVar4] = bVar6;
          bVar6 = pcVar8[1];
          iVar4 = iVar4 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar6 != 0);
        goto LAB_005a98cd;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
    iVar4 = 0;
    if (bVar6 != 0) {
      pbVar7 = local_40;
      iVar5 = iVar4;
      do {
        local_40[iVar5] = *pbVar7;
        iVar4 = iVar5 + 1;
        iVar3 = iVar5 + 1;
        pbVar7 = local_40 + iVar5 + 1;
        iVar5 = iVar4;
      } while (local_40[iVar3] != 0);
    }
    bVar6 = 0x5f;
    pcVar8 = "_DOORLINE_MASK";
    do {
      local_40[iVar4] = bVar6;
      bVar6 = pcVar8[1];
      iVar4 = iVar4 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar6 != 0);
  }
  else {
    iVar4 = 0;
    if (bVar6 != 0) {
      pbVar7 = local_40;
      iVar5 = iVar4;
      do {
        local_40[iVar5] = *pbVar7;
        iVar4 = iVar5 + 1;
        iVar3 = iVar5 + 1;
        pbVar7 = local_40 + iVar5 + 1;
        iVar5 = iVar4;
      } while (local_40[iVar3] != 0);
    }
    bVar6 = 0x5f;
    pcVar8 = "_DOORLINE_WIDEBODY_MASK";
    do {
      local_40[iVar4] = bVar6;
      bVar6 = pcVar8[1];
      iVar4 = iVar4 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar6 != 0);
  }
LAB_005a98cd:
  local_40[iVar4] = 0;
  iVar4 = -1;
  pbVar7 = local_40;
  while (local_40[0] != 0) {
    iVar4 = iVar4 * 0x21 + (uint)local_40[0];
    pbVar1 = pbVar7 + 1;
    pbVar7 = pbVar7 + 1;
    local_40[0] = *pbVar1;
  }
  return iVar4;
}

