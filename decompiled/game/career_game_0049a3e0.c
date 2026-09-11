/* Decompiled from Speed.exe @ 0049a3e0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_0049a3e0(int param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int local_2c;
  byte local_20;
  byte local_1f [31];
  
  local_2c = 0;
  if (0 < param_3) {
    do {
      iVar7 = local_2c + 1;
      FUN_004f68c0(0x20,"PointEarned_%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a4c3:
        if (iVar9 == 0) {
LAB_0049a4d4:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar10);
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a4c3;
            goto LAB_0049a4ac;
          }
          goto LAB_0049a4d4;
        }
LAB_0049a4ac:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
        goto LAB_0049a4c3;
      }
      FUN_004f6910(iVar5);
      FUN_004f68c0(0x20,"TotalPoints_%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a593:
        if (iVar9 == 0) {
LAB_0049a5a4:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar10);
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a593;
            goto LAB_0049a57c;
          }
          goto LAB_0049a5a4;
        }
LAB_0049a57c:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
        goto LAB_0049a593;
      }
      FUN_004f6910(iVar5);
      FUN_004f68c0(0x20,"BestLap_%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a663:
        if (iVar9 == 0) {
LAB_0049a674:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar10);
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a663;
            goto LAB_0049a64c;
          }
          goto LAB_0049a674;
        }
LAB_0049a64c:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
        goto LAB_0049a663;
      }
      FUN_004f6910(iVar5);
      FUN_004f68c0(0x20,"PointEarned_%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a733:
        if (iVar9 == 0) {
LAB_0049a744:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar10);
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a733;
            goto LAB_0049a71c;
          }
          goto LAB_0049a744;
        }
LAB_0049a71c:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
        goto LAB_0049a733;
      }
      FUN_004f6910(iVar5);
      FUN_004f68c0(0x20,"TotalPoints_%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a803:
        if (iVar9 == 0) {
LAB_0049a814:
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_004ef050(iVar10);
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 == 0) || (iVar5 = *(int *)(iVar5 + 0x18), iVar5 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
                (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a803;
            goto LAB_0049a7ec;
          }
          goto LAB_0049a814;
        }
LAB_0049a7ec:
        if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
        goto LAB_0049a803;
      }
      FUN_004f6910(iVar5);
      FUN_004f68c0(0x20,"Lead%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a8d7:
        if ((iVar9 != 0) && (iVar5 = FUN_004ef050(iVar10), iVar5 != 0)) {
LAB_0049a8ea:
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar5 + 0x18) == 5) {
            uVar11 = *(undefined4 *)(iVar5 + 0x60);
            iVar10 = *(int *)(iVar5 + 0x5c);
            if (0 < iVar10) {
              do {
                FUN_004f6970(uVar11);
                uVar11 = *(undefined4 *)(extraout_EDX + 4);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_0049a8c0:
          if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
          goto LAB_0049a8d7;
          goto LAB_0049a8ea;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a8d7;
          goto LAB_0049a8c0;
        }
      }
      FUN_004f68c0(0x20,"Time%d",iVar7);
      iVar10 = -1;
      pbVar8 = &local_20;
      bVar3 = local_20;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        pbVar1 = pbVar8 + 1;
        iVar10 = iVar10 * 0x21 + (uint)bVar3;
        pbVar8 = pbVar8 + 1;
        bVar3 = *pbVar1;
      }
      iVar9 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a9da:
        if ((iVar9 != 0) && (iVar5 = FUN_004ef050(iVar10), iVar5 != 0)) {
LAB_0049a9ed:
          *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar5 + 0x18) == 5) {
            uVar11 = *(undefined4 *)(iVar5 + 0x60);
            iVar10 = *(int *)(iVar5 + 0x5c);
            if (0 < iVar10) {
              do {
                FUN_004f6970(uVar11);
                uVar11 = *(undefined4 *)(extraout_EDX_00 + 4);
                iVar10 = iVar10 + -1;
              } while (iVar10 != 0);
            }
          }
        }
      }
      else {
        iVar5 = FUN_004f3f90(&DAT_00746104);
        iVar9 = DAT_0073578c;
        if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_0049a9c3:
          if ((iVar5 == 0) || (iVar5 = FUN_004ffb70(), iVar9 = DAT_0073578c, iVar5 == 0))
          goto LAB_0049a9da;
          goto LAB_0049a9ed;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 == 0 &&
              (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 == 0)))) goto LAB_0049a9da;
          goto LAB_0049a9c3;
        }
      }
      cVar4 = FUN_0043a2e0();
      if ((cVar4 == '\0') &&
         (iVar10 = 0, puVar6 = DAT_0077b198, (undefined4 **)DAT_0077b198 != &DAT_0077b198)) {
        do {
          if (iVar10 == local_2c) break;
          puVar6 = (undefined4 *)*puVar6;
          iVar10 = iVar10 + 1;
        } while ((undefined4 **)puVar6 != &DAT_0077b198);
      }
      cVar4 = FUN_0043a2e0();
      if (cVar4 == '\0') {
LAB_0049aadd:
        FUN_004f68c0(0x20,"Time%d",iVar7);
        uVar11 = FUN_00674898();
        FUN_004f67f0(&DAT_006ca778,uVar11);
        FUN_004f68c0(0x20,"Lead%d",iVar7);
        FUN_004f67f0(&DAT_006ca778,uVar11);
      }
      else {
        if ((&DAT_00777cd8)[local_2c * 0x57] == 9) {
          uVar11 = 0x1ce129e0;
        }
        else {
          if ((&DAT_00777cd8)[local_2c * 0x57] != 10) goto LAB_0049aadd;
          uVar11 = 0xa7db717f;
        }
        FUN_004f68c0(0x20,"Time%d",iVar7);
        FUN_00416bb0(uVar11);
        FUN_004f68c0(0x20,"Lead%d",iVar7);
        FUN_00416bb0(uVar11);
      }
      local_2c = iVar7;
    } while (iVar7 < param_3);
  }
  return;
}

