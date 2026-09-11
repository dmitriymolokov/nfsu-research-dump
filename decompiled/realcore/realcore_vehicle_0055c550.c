/* Decompiled from Speed.exe @ 0055c550 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055c550(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  char *local_2c;
  int *local_28;
  byte local_20;
  byte local_1f [31];
  
  iVar8 = 0;
  local_28 = (int *)(param_1 + 0x40);
  local_2c = &DAT_00734f90;
  do {
    local_20 = 0;
    pbVar7 = local_1f;
    for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    iVar8 = iVar8 + 1;
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    FUN_004f68c0(0x20,"PLAYER_DATA_%.2d",iVar8);
    iVar6 = -1;
    pbVar7 = &local_20;
    bVar3 = local_20;
    while (bVar3 != 0) {
      if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
        bVar3 = bVar3 - 0x20;
      }
      pbVar1 = pbVar7 + 1;
      iVar6 = iVar6 * 0x21 + (uint)bVar3;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    iVar9 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_0055c645:
      if (iVar9 == 0) {
LAB_0055c658:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(iVar6);
      }
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar9 = DAT_0073578c;
      if ((iVar4 == 0) || (iVar4 = *(int *)(iVar4 + 0x18), iVar4 == 0)) {
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar4 = FUN_004fd1e0(iVar2 + 0xdc), iVar4 == 0 &&
              (iVar4 = FUN_004fd1e0(iVar2 + 0xec), iVar4 == 0)))) goto LAB_0055c645;
          goto LAB_0055c624;
        }
        goto LAB_0055c658;
      }
LAB_0055c624:
      if ((iVar4 == 0) || (iVar4 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar4 == 0))
      goto LAB_0055c645;
    }
    *local_28 = iVar4;
    iVar6 = 0;
    if ((local_2c == (char *)0x0) || (*local_2c == '\0')) {
LAB_0055c67d:
      pcVar5 = (char *)FUN_0059fb80();
      if (pcVar5 == (char *)0x0) {
        pcVar5 = (char *)FUN_0059fb80();
      }
    }
    else {
      do {
        iVar9 = iVar6 + 1;
        iVar6 = iVar6 + 1;
      } while (local_2c[iVar9] != '\0');
      pcVar5 = local_2c;
      if (iVar6 == 0) goto LAB_0055c67d;
    }
    FUN_004f6850(pcVar5);
    local_2c = local_2c + 0xd;
    local_28 = local_28 + 1;
    if (0x734fc3 < (int)local_2c) {
      return;
    }
  } while( true );
}

