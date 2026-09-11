/* Decompiled from Speed.exe @ 0053c3a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_0053c3a0(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int *local_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00684d8b;
  pvStack_c = ExceptionList;
  iVar6 = param_1[8];
  iVar3 = param_1[iVar6 + 0xb];
  local_20 = *(int *)(param_1[1] + 0xf8);
  piVar4 = (int *)param_1[iVar6 * 0xb8 + 0x14];
  piVar2 = param_1 + iVar6 * 0xb8 + 0x14;
  ExceptionList = &pvStack_c;
  if (piVar4 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    if (*piVar4 != 0) {
      ExceptionList = &pvStack_c;
      FUN_0064bbd0();
    }
    FUN_0064b510(&local_18);
    FUN_0064b580();
    (**(code **)(*local_18 + 4))(piVar4);
    FUN_0064b5a0();
    *piVar2 = 0;
  }
  *(undefined4 *)(iVar3 + 0x50) = 0;
  (**(code **)(*param_1 + 0x8c))();
  if (*(int *)(iVar3 + 0x18) < 3) {
    if ((DAT_0077a920 == 3) || (piVar4 = (int *)param_1[1], *piVar4 == 8)) {
      iVar6 = 0;
      if (*(int *)(DAT_007356a8 + 0x90) != 0) {
        ExceptionList = pvStack_c;
        return;
      }
      iVar8 = param_1[1];
      if (*(int *)(iVar8 + 0xf0) == 99) {
        if (((DAT_00758930 | DAT_00758934) & 1 << ((char)*(undefined4 *)(iVar8 + 0xf8) + 1U & 0x1f))
            == 0) {
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
        else {
          *(undefined4 *)(iVar3 + 0xc) = 2;
        }
      }
      else {
        iVar9 = *(int *)(iVar8 + 0xf8);
        local_20 = (&DAT_00758b58)[iVar9 * 2];
        while( true ) {
          local_20 = local_20 + 1;
          if ((DAT_00758930 & 1 << ((byte)local_20 & 0x1f)) != 0) break;
          *(int *)(iVar8 + 0xf8) = iVar9 + 1;
          if (0x19 < *(int *)(param_1[1] + 0xf8)) {
            *(undefined4 *)(param_1[1] + 0xf8) = 0;
          }
          iVar8 = param_1[1];
          iVar9 = *(int *)(iVar8 + 0xf8);
          local_20 = (&DAT_00758b58)[iVar9 * 2];
          iVar6 = iVar6 + 1;
          if (0x19 < iVar6) {
            *(undefined4 *)(iVar3 + 8) = 0;
            *(undefined4 *)(iVar3 + 0xc) = 0;
            ExceptionList = pvStack_c;
            return;
          }
        }
      }
    }
    else {
      iVar6 = piVar4[0x3e];
      local_20 = (&DAT_00758b58)[iVar6 * 2];
      iVar8 = 0;
      while( true ) {
        local_20 = local_20 + 1;
        if ((DAT_00758934 & 1 << ((byte)local_20 & 0x1f)) != 0) break;
        piVar4[0x3e] = iVar6 + 1;
        if (0x19 < *(int *)(param_1[1] + 0xf8)) {
          *(undefined4 *)(param_1[1] + 0xf8) = 0;
        }
        piVar4 = (int *)param_1[1];
        iVar6 = piVar4[0x3e];
        local_20 = (&DAT_00758b58)[iVar6 * 2];
        iVar8 = iVar8 + 1;
        if (0x19 < iVar8) {
          *(undefined4 *)(iVar3 + 8) = 0;
          *(undefined4 *)(iVar3 + 0xc) = 0;
          ExceptionList = pvStack_c;
          return;
        }
      }
    }
    if (*(int *)(param_1[1] + 0xf0) == 99) {
      local_20 = local_20 + 1;
    }
    *(int *)(iVar3 + 0x54) = local_20;
    *(int *)(iVar3 + 0x4c) = local_20;
    *(int *)(iVar3 + 0x58) = local_20;
    *(int *)(param_1[1] + 0xfc) = local_20 + -1;
    (**(code **)(piVar2[4] + 0x28))(0,0);
    FUN_00539ac0();
    iVar6 = FUN_00539b70();
    if (iVar6 == -1) goto LAB_0053c689;
    iVar6 = param_1[1];
    if (*(int *)(iVar6 + 0xf0) == 99) {
      *(undefined4 *)(iVar6 + 0xf0) = *(undefined4 *)(iVar6 + 0xf4);
    }
    else {
      cVar5 = FUN_0053cbd0();
      if (cVar5 != '\0') {
        ExceptionList = pvStack_c;
        return;
      }
    }
    if (0 < piVar2[0x18]) {
      FUN_0051c7b0();
    }
    *(int *)(param_1[1] + 0xf8) = *(int *)(param_1[1] + 0xf8) + 1;
    if (0x19 < *(int *)(param_1[1] + 0xf8)) {
      *(undefined4 *)(param_1[1] + 0xf8) = 0;
    }
  }
  else {
    if (*(int *)(DAT_007356a8 + 0x90) != 0) {
      ExceptionList = pvStack_c;
      return;
    }
    (**(code **)(piVar2[4] + 0x28))(0,0);
    FUN_00539ac0();
    iVar6 = FUN_00539b70();
    if (iVar6 == -1) {
LAB_0053c689:
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      ExceptionList = pvStack_c;
      return;
    }
    cVar5 = FUN_0053cbd0();
    if (cVar5 != '\0') {
      ExceptionList = pvStack_c;
      return;
    }
    if ((*(int *)(iVar3 + 0x50) == 0) && (*(int *)(iVar3 + 0x54) == 0)) {
      *(undefined4 *)(iVar3 + 0x54) = 1;
      *(undefined4 *)(iVar3 + 0x4c) = 1;
      *(undefined4 *)(iVar3 + 0x58) = 1;
    }
    if (*(int *)(param_1[1] + 0xc) == 2) {
      *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(&DAT_006f6f20 + *(int *)(iVar3 + 0x58) * 4);
    }
    *(int *)(param_1[1] + 0xfc) = *(int *)(iVar3 + 0x4c) + -1;
    if (0 < piVar2[0x18]) {
      FUN_0051c7b0();
    }
  }
  if (piVar2[0x18] == 0) {
    param_1[0x184] = 1;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  if (*(int *)(iVar3 + 8) == 0) {
    *(undefined4 *)(iVar3 + 0x78) = 0;
    ExceptionList = pvStack_c;
    return;
  }
  iVar6 = FUN_005256f0(0x28);
  uStack_4 = 0;
  iStack_10 = iVar6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar8 = *(int *)(iVar3 + 0x30);
    iStack_14 = *(int *)(iVar3 + 0x58);
    iVar9 = *(int *)(iVar3 + 0x2c);
    iVar7 = *(int *)(iVar3 + 0x48);
    iVar10 = *(int *)(iVar3 + 0x34);
    puVar1 = (undefined4 *)(iVar6 + 4);
    *puVar1 = 0;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (3 < iVar7) {
      iVar7 = 3;
    }
    *(int *)(iVar6 + 8) = iVar7;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (0x7fff < iVar9) {
      iVar9 = 0x7fff;
    }
    *(int *)(iVar6 + 0xc) = iVar9;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    else if (0x2000 < iVar10) {
      iVar10 = 0x2000;
    }
    *(int *)(iVar6 + 0x10) = iVar10;
    if (iVar8 < 0) {
      iVar8 = 0;
    }
    else if (0xffff < iVar8) {
      iVar8 = 0xffff;
    }
    *(int *)(iVar6 + 0x14) = iVar8;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    if (iStack_14 < 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iStack_14;
      if (0x1a < iStack_14) {
        iVar8 = 0x1a;
      }
    }
    *(int *)(iVar6 + 0x24) = iVar8;
    iVar8 = FUN_0064c1a0(&DAT_0073d7cc,puVar1,iVar6);
    if (iVar8 < 0) {
      FUN_0064c000(&PTR_s_MUSIC_STREAM_006f2210);
      FUN_0064c1a0(&DAT_0073d7cc,puVar1,iVar6);
    }
  }
  *piVar2 = iVar6;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  uStack_4 = 0xffffffff;
  iVar6 = FUN_0053bca0();
  param_1[5] = iVar6;
  ExceptionList = pvStack_c;
  return;
}

