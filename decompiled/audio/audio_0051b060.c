/* Decompiled from Speed.exe @ 0051b060 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0051b060(void)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  float10 fVar9;
  byte local_73e;
  byte local_73d;
  byte local_73c;
  byte local_73b;
  byte local_73a;
  byte local_739;
  byte local_738;
  byte local_737;
  byte local_736;
  byte local_735;
  byte local_734;
  byte local_733;
  byte local_732;
  byte local_731;
  undefined1 local_730 [1104];
  int local_2e0;
  int local_2dc;
  int local_2cc;
  int local_2c8;
  int local_2c4;
  int local_2bc;
  int local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a0;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8 [16];
  int local_198 [32];
  int local_118;
  int local_114;
  
  FUN_00417600();
  FUN_004ac5a0(&DAT_0075eef8,0,local_730);
  if (local_2e0 == 0) {
    local_73d = 0;
  }
  else {
    local_73d = *(byte *)(local_2e0 + 0x11);
  }
  if (local_2dc == 0) {
    local_73c = 0;
  }
  else {
    local_73c = *(byte *)(local_2dc + 0x11);
  }
  if (local_2bc == 0) {
    local_73b = 0;
  }
  else {
    local_73b = *(byte *)(local_2bc + 0x11);
  }
  if (local_2b8 == 0) {
    local_739 = 0;
  }
  else {
    local_739 = *(byte *)(local_2b8 + 0x11);
  }
  if (local_2c4 == 0) {
    local_738 = 0;
  }
  else {
    local_738 = *(byte *)(local_2c4 + 0x11);
  }
  if (local_2b0 == 0) {
    local_732 = 0;
  }
  else {
    local_732 = *(byte *)(local_2b0 + 0x11);
  }
  if (local_2ac == 0) {
    local_731 = 0;
  }
  else {
    local_731 = *(byte *)(local_2ac + 0x11);
  }
  if (local_2a0 == 0) {
    local_737 = 0;
  }
  else {
    local_737 = *(byte *)(local_2a0 + 0x11);
  }
  bVar8 = 0;
  if (local_1f8 != 0) {
    bVar8 = 3;
  }
  if (local_1f4 != 0) {
    bVar8 = 3;
  }
  if (local_1f0 != 0) {
    bVar8 = 3;
  }
  if (local_1ec != 0) {
    bVar8 = 3;
  }
  if (local_1e8 != 0) {
    bVar8 = 3;
  }
  if (local_1e4 != 0) {
    bVar8 = 3;
  }
  if (local_1e0 != 0) {
    bVar8 = 3;
  }
  if (local_1dc == 0) {
    if (bVar8 == 0) {
      piVar2 = local_198 + 1;
      iVar6 = 4;
      do {
        if (piVar2[-1] != 0) {
          bVar8 = 2;
        }
        if (*piVar2 != 0) {
          bVar8 = 2;
        }
        if (piVar2[1] != 0) {
          bVar8 = 2;
        }
        if (piVar2[2] != 0) {
          bVar8 = 2;
        }
        if (piVar2[3] != 0) {
          bVar8 = 2;
        }
        if (piVar2[4] != 0) {
          bVar8 = 2;
        }
        if (piVar2[5] != 0) {
          bVar8 = 2;
        }
        if (piVar2[6] != 0) {
          bVar8 = 2;
        }
        piVar2 = piVar2 + 8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (bVar8 == 0) {
        piVar2 = local_1d8 + 1;
        iVar6 = 2;
        do {
          if (piVar2[-1] != 0) {
            bVar8 = 1;
          }
          if (*piVar2 != 0) {
            bVar8 = 1;
          }
          if (piVar2[1] != 0) {
            bVar8 = 1;
          }
          if (piVar2[2] != 0) {
            bVar8 = 1;
          }
          if (piVar2[3] != 0) {
            bVar8 = 1;
          }
          if (piVar2[4] != 0) {
            bVar8 = 1;
          }
          if (piVar2[5] != 0) {
            bVar8 = 1;
          }
          if (piVar2[6] != 0) {
            bVar8 = 1;
          }
          piVar2 = piVar2 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  else {
    bVar8 = 3;
  }
  local_73e = 0;
  if ((local_268 != 0) && (*(byte *)(local_268 + 0x11) != 0)) {
    local_73e = *(byte *)(local_268 + 0x11);
  }
  if ((local_264 != 0) && (local_73e < *(byte *)(local_264 + 0x11))) {
    local_73e = *(byte *)(local_264 + 0x11);
  }
  if ((local_260 != 0) && (local_73e < *(byte *)(local_260 + 0x11))) {
    local_73e = *(byte *)(local_260 + 0x11);
  }
  if ((local_25c != 0) && (local_73e < *(byte *)(local_25c + 0x11))) {
    local_73e = *(byte *)(local_25c + 0x11);
  }
  if (local_2c8 == 0) {
    local_735 = 0;
  }
  else {
    local_735 = *(byte *)(local_2c8 + 0x11);
  }
  if (local_118 == 0) {
    local_73a = 0;
  }
  else {
    local_73a = *(byte *)(local_118 + 0x11);
  }
  if (local_114 == 0) {
    local_736 = 0;
  }
  else {
    local_736 = *(byte *)(local_114 + 0x11);
  }
  if (local_2a8 == 0) {
    local_734 = 0;
  }
  else {
    local_734 = *(byte *)(local_2a8 + 0x11);
  }
  if (local_2cc == 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = *(char *)(local_2cc + 0x11);
  }
  if (local_26c == 0) {
    local_733 = 0;
  }
  else {
    local_733 = *(byte *)(local_26c + 0x11);
  }
  if (cVar5 == '\x04') {
    local_73d = 4;
    local_73c = 4;
    local_73b = 4;
  }
  if ((DAT_0076779b == '\0') && (fVar9 = (float10)FUN_005a05b0(), (float10)_DAT_006cc7bc <= fVar9))
  {
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar3 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar3;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar3 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar4 = 0;
    do {
      if ((&DAT_00744ab0)[iVar4 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar4 * 8);
        goto LAB_0051b3d7;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    iVar6 = 0;
LAB_0051b3d7:
    (&DAT_00760f9d)[iVar6 * 0x454] = 1;
  }
  if ((((((DAT_0076779c == '\0') && (local_73d != 0)) && (local_73c != 0)) &&
       ((local_73b != 0 && (local_739 != 0)))) && (local_738 != 0)) &&
     (((local_737 != 0 && (bVar8 != 0)) &&
      ((local_73e != 0 && ((local_73a != 0 && (local_736 != 0)))))))) {
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar3 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar3;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar3 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar4 = 0;
    do {
      if ((&DAT_00744ab0)[iVar4 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar4 * 8);
        goto LAB_0051b477;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    iVar6 = 0;
LAB_0051b477:
    (&DAT_007613f1)[iVar6 * 0x454] = 1;
  }
  if (((((((DAT_0076779d == '\0') && (1 < local_73d)) && (1 < local_73c)) &&
        ((1 < local_73b && (1 < local_739)))) &&
       ((1 < local_738 && ((1 < local_737 && (1 < bVar8)))))) && (1 < local_73e)) &&
     ((((1 < local_735 && (1 < local_73a)) && (1 < local_736)) &&
      ((1 < local_734 && (1 < local_733)))))) {
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar3 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar3;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar3 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar4 = 0;
    do {
      if ((&DAT_00744ab0)[iVar4 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar4 * 8);
        goto LAB_0051b535;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    iVar6 = 0;
LAB_0051b535:
    (&DAT_00761845)[iVar6 * 0x454] = 1;
  }
  if (((((DAT_0076779e == '\0') && (2 < local_73d)) &&
       ((2 < local_73c &&
        ((((2 < local_73b && (2 < local_739)) && (2 < local_732)) &&
         ((2 < local_731 && (2 < local_737)))))))) && ((2 < bVar8 || (2 < local_738)))) &&
     (((2 < local_73e && (2 < local_735)) &&
      ((2 < local_73a && (((2 < local_736 && (2 < local_734)) && (2 < local_733)))))))) {
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar3 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar3;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar3 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar4 = 0;
    do {
      if ((&DAT_00744ab0)[iVar4 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar4 * 8);
        goto LAB_0051b607;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    iVar6 = 0;
LAB_0051b607:
    (&DAT_00761c99)[iVar6 * 0x454] = 1;
  }
  if ((((DAT_0076779f == '\0') && (3 < local_738)) &&
      ((3 < local_737 && ((3 < local_739 && (3 < local_73e)))))) &&
     ((((2 < local_73d && (((2 < local_73c && (2 < local_73b)) && (local_732 == 3)))) &&
       ((local_731 == 3 && (local_735 == 3)))) &&
      (((local_73a == 3 && ((local_736 == 3 && (local_734 == 3)))) && (local_733 == 3)))))) {
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar3 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar3;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar3 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar4 = 0;
    do {
      if ((&DAT_00744ab0)[iVar4 * 2] == iVar6) {
        (&DAT_007620ed)[*(int *)(&DAT_00744ab4 + iVar4 * 8) * 0x454] = 1;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x1b);
    DAT_007620ed = 1;
  }
  return;
}

