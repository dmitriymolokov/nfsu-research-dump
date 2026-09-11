/* Decompiled from Speed.exe @ 00499aa0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00499aa0(int param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int *piVar8;
  int extraout_EDX_02;
  int iVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  int local_50;
  byte local_40;
  byte local_3f [31];
  undefined1 local_20 [32];
  
  iVar3 = DAT_00777cdc;
  local_50 = 0;
  if (0 < param_3) {
    do {
      iVar5 = local_50 + 1;
      FUN_004f68c0(0x20,"PointEarned_%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499b7a:
        if (iVar10 == 0) {
LAB_00499b8b:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004ef050(iVar9);
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
                (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00499b7a;
            goto LAB_00499b63;
          }
          goto LAB_00499b8b;
        }
LAB_00499b63:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
        goto LAB_00499b7a;
      }
      FUN_004f6910(iVar6);
      FUN_004f68c0(0x20,"TotalPoints_%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499c44:
        if (iVar10 == 0) {
LAB_00499c55:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004ef050(iVar9);
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
                (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00499c44;
            goto LAB_00499c2d;
          }
          goto LAB_00499c55;
        }
LAB_00499c2d:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
        goto LAB_00499c44;
      }
      FUN_004f6910(iVar6);
      FUN_004f68c0(0x20,"PointEarned_%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499d13:
        if (iVar10 == 0) {
LAB_00499d24:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004ef050(iVar9);
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
                (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00499d13;
            goto LAB_00499cfc;
          }
          goto LAB_00499d24;
        }
LAB_00499cfc:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
        goto LAB_00499d13;
      }
      FUN_004f6910(iVar6);
      FUN_004f68c0(0x20,"TotalPoints_%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499de3:
        if (iVar10 == 0) {
LAB_00499df4:
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_004ef050(iVar9);
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 == 0) || (iVar6 = *(int *)(iVar6 + 0x18), iVar6 == 0)) {
          if (DAT_0073578c != 0) {
            iVar2 = *(int *)(DAT_0073578c + 8);
            if ((iVar2 == 0) ||
               ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
                (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00499de3;
            goto LAB_00499dcc;
          }
          goto LAB_00499df4;
        }
LAB_00499dcc:
        if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
        goto LAB_00499de3;
      }
      FUN_004f6910(iVar6);
      FUN_004f68c0(0x20,"Lead%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499eb7:
        if ((iVar10 != 0) && (iVar6 = FUN_004ef050(iVar9), iVar6 != 0)) {
LAB_00499eca:
          *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar6 + 0x18) == 5) {
            uVar12 = *(undefined4 *)(iVar6 + 0x60);
            iVar9 = *(int *)(iVar6 + 0x5c);
            if (0 < iVar9) {
              do {
                FUN_004f6970(uVar12);
                uVar12 = *(undefined4 *)(extraout_EDX + 4);
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_00499ea0:
          if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
          goto LAB_00499eb7;
          goto LAB_00499eca;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00499eb7;
          goto LAB_00499ea0;
        }
      }
      FUN_004f68c0(0x20,"Time%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_00499fb7:
        if ((iVar10 != 0) && (iVar6 = FUN_004ef050(iVar9), iVar6 != 0)) {
LAB_00499fca:
          *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar6 + 0x18) == 5) {
            uVar12 = *(undefined4 *)(iVar6 + 0x60);
            iVar9 = *(int *)(iVar6 + 0x5c);
            if (0 < iVar9) {
              do {
                FUN_004f6970(uVar12);
                uVar12 = *(undefined4 *)(extraout_EDX_00 + 4);
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_00499fa0:
          if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
          goto LAB_00499fb7;
          goto LAB_00499fca;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_00499fb7;
          goto LAB_00499fa0;
        }
      }
      FUN_004f68c0(0x20,"BestLap_%d",iVar5);
      iVar9 = -1;
      pbVar7 = &local_40;
      bVar4 = local_40;
      while (bVar4 != 0) {
        if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
          bVar4 = bVar4 - 0x20;
        }
        pbVar1 = pbVar7 + 1;
        iVar9 = iVar9 * 0x21 + (uint)bVar4;
        pbVar7 = pbVar7 + 1;
        bVar4 = *pbVar1;
      }
      iVar10 = DAT_0073578c;
      if (*(int *)(param_1 + 0xc) == 0) {
LAB_0049a0ba:
        if ((iVar10 != 0) && (iVar6 = FUN_004ef050(iVar9), iVar6 != 0)) {
LAB_0049a0cd:
          *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000;
          if (*(int *)(iVar6 + 0x18) == 5) {
            uVar12 = *(undefined4 *)(iVar6 + 0x60);
            iVar9 = *(int *)(iVar6 + 0x5c);
            if (0 < iVar9) {
              do {
                FUN_004f6970(uVar12);
                uVar12 = *(undefined4 *)(extraout_EDX_01 + 4);
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
          }
        }
      }
      else {
        iVar6 = FUN_004f3f90(&DAT_00746104);
        iVar10 = DAT_0073578c;
        if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 0x18), iVar6 != 0)) {
LAB_0049a0a3:
          if ((iVar6 == 0) || (iVar6 = FUN_004ffb70(), iVar10 = DAT_0073578c, iVar6 == 0))
          goto LAB_0049a0ba;
          goto LAB_0049a0cd;
        }
        if (DAT_0073578c != 0) {
          iVar2 = *(int *)(DAT_0073578c + 8);
          if ((iVar2 == 0) ||
             ((iVar6 = FUN_004fd1e0(iVar2 + 0xdc), iVar6 == 0 &&
              (iVar6 = FUN_004fd1e0(iVar2 + 0xec), iVar6 == 0)))) goto LAB_0049a0ba;
          goto LAB_0049a0a3;
        }
      }
      iVar9 = 0;
      if (0 < *(int *)(DAT_007361f8 + 0x18)) {
        piVar8 = (int *)(DAT_007361f8 + 0x28);
        do {
          if ((int)*(short *)(*piVar8 + 10) == (&DAT_00777cd4)[local_50 * 0x57]) break;
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar9 < *(int *)(DAT_007361f8 + 0x18));
      }
      iVar9 = (&DAT_00777cdc)[local_50 * 0x57];
      FUN_004f68c0(0x20,"BestLap_%d",iVar5);
      if (DAT_00777b4c == 1) {
        iVar10 = -1;
        pbVar7 = &local_40;
        bVar4 = local_40;
        while (bVar4 != 0) {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          iVar10 = iVar10 * 0x21 + (uint)bVar4;
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          bVar4 = *pbVar1;
        }
        if (((*(int *)(param_1 + 0xc) == 0) || (iVar6 = FUN_004f65d0(), iVar6 == 0)) ||
           (iVar6 = FUN_004ffb70(), iVar6 == 0)) {
          if (DAT_0073578c == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = FUN_004ef050(iVar10);
          }
        }
        FUN_004f6910(iVar6);
      }
      else {
        FUN_00586580(local_20);
        iVar10 = -1;
        pbVar7 = &local_40;
        bVar4 = local_40;
        while (bVar4 != 0) {
          if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
            bVar4 = bVar4 - 0x20;
          }
          pbVar1 = pbVar7 + 1;
          iVar10 = iVar10 * 0x21 + (uint)bVar4;
          pbVar7 = pbVar7 + 1;
          bVar4 = *pbVar1;
        }
        if (((((*(int *)(param_1 + 0xc) != 0) && (iVar6 = FUN_004f65d0(), iVar6 != 0)) &&
             (iVar6 = FUN_004ffb70(), iVar6 != 0)) ||
            ((DAT_0073578c != 0 && (iVar6 = FUN_004ef050(iVar10), iVar6 != 0)))) &&
           (*(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000,
           *(int *)(iVar6 + 0x18) == 5)) {
          uVar12 = *(undefined4 *)(iVar6 + 0x60);
          iVar10 = *(int *)(iVar6 + 0x5c);
          if (0 < iVar10) {
            do {
              FUN_004f6970(uVar12);
              uVar12 = *(undefined4 *)(extraout_EDX_02 + 4);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        FUN_004f67f0(local_20);
      }
      if (local_50 == 0) {
        pcVar11 = "Time%d";
        iVar10 = 1;
      }
      else {
        pcVar11 = "Lead%d";
        iVar10 = iVar5;
      }
      FUN_004f68c0(0x20,pcVar11,iVar10);
      if ((&DAT_00777cd8)[local_50 * 0x57] == 1) {
        if (local_50 == 0) {
          FUN_00586580(local_20);
          FUN_004f67f0(&DAT_006cc568,local_20);
        }
        else {
          if ((float)(iVar9 - iVar3) * _DAT_006cca38 < DAT_006cc7a4) {
            uVar12 = 0x61c9b7a2;
            goto LAB_0049a386;
          }
          FUN_00586580(local_20);
          FUN_004f67f0(&DAT_006cc568,local_20);
        }
      }
      else {
        switch((&DAT_00777cd8)[local_50 * 0x57]) {
        case 3:
          uVar12 = 0x5d82dba2;
          break;
        default:
          uVar12 = 0xd4293449;
          break;
        case 6:
          uVar12 = 0x1e66364;
          break;
        case 7:
          uVar12 = 0xb7b75185;
          break;
        case 9:
          uVar12 = 0x1ce129e0;
          break;
        case 10:
          uVar12 = 0xa7db717f;
        }
LAB_0049a386:
        FUN_00416bb0(uVar12);
      }
      local_50 = iVar5;
    } while (iVar5 < param_3);
  }
  return;
}

