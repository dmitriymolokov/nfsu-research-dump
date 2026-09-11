/* spd-match: far pct=2.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_no_code */
#include "ghidra_compat.h"

int __cdecl FUN_004bbd70();
int __cdecl FUN_00565da0();
int __cdecl FUN_005aa2d0();
extern int DAT_006ba0d8;
extern int DAT_006ba0dc;
extern int DAT_006ba120;
extern int DAT_006ba148;
extern int DAT_006bbc1c;
extern int DAT_006bbc34;
extern int DAT_006bbc3c;
extern int DAT_006bbc4c;
extern int DAT_006bbc54;
extern int DAT_006bbc5c;
extern int DAT_006bd3bc;
extern int DAT_006bdcf8;
extern int DAT_006bdcfc;
extern int DAT_00734588;
extern void LAB_00580c01(void);
extern void LAB_00580cc6(void);
extern void LAB_00580ce2(void);
extern void LAB_00580ceb(void);
extern void LAB_00580d14(void);
extern void LAB_00580d16(void);
extern void LAB_00581143(void);
extern void LAB_00581174(void);
extern void LAB_005811a5(void);
extern void LAB_005811d6(void);
extern void LAB_00581207(void);
extern void LAB_0058123f(void);
extern void LAB_00581270(void);
extern void LAB_005812a1(void);
extern void LAB_005812d2(void);
extern void LAB_00581303(void);
extern void LAB_00581334(void);
extern void LAB_00581365(void);
extern void LAB_0058147f(void);
extern void LAB_005814af(void);
extern void LAB_005814df(void);
extern void LAB_0058152a(void);
extern void LAB_00581553(void);
extern void LAB_0058158a(void);
extern void LAB_0058158e(void);
extern void LAB_005815e6(void);
extern void LAB_005815ea(void);
extern void LAB_0058165f(void);
extern void LAB_005816c4(void);
extern void LAB_005816ed(void);
extern void LAB_005817a5(void);
extern void LAB_005817d6(void);
extern void LAB_0058181f(void);
extern void LAB_005819e4(void);
extern void LAB_00581a39(void);
extern void LAB_00581aaa(void);
extern void LAB_00581ae7(void);

void FUN_00580b00(int *param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  char *pcVar17;
  undefined *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  bool bVar23;
  int local_58;
  int local_54;
  int local_50;
  byte local_40;
  byte local_3f [63];
  
  iVar12 = *param_2 * 0xc90 + 0x20 + DAT_00734588;
  piVar22 = param_1;
  for (iVar14 = 0x11d; iVar14 != 0; iVar14 = iVar14 + -1) {
    *piVar22 = 0;
    piVar22 = piVar22 + 1;
  }
  FUN_00565da0("%s_SKIN1",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar14 = iVar14 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  param_1[0xf2] = iVar14;
  FUN_00565da0("%s_SKIN1B",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar14 = iVar14 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  param_1[0xf3] = iVar14;
  pcVar17 = "GLOBAL_SKIN1";
  iVar14 = -1;
  uVar20 = 0x47;
  do {
    iVar14 = iVar14 * 0x21 + uVar20;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar20 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xf4] = iVar14;
  iVar14 = param_2[0x124];
  if (iVar14 == 0) {
    param_1[0xf5] = 0;
  }
  else {
    piVar5 = *(int **)(iVar14 + 0x14);
    piVar22 = piVar5 + *(short *)(iVar14 + 0x1c) * 2;
    if (piVar5 != (int *)0x0) {
      for (; piVar5 < piVar22; piVar5 = piVar5 + 2) {
        if (*piVar5 == 0x10c98090) {
          if (piVar5 != (int *)0x0) {
            iVar14 = piVar5[1];
            goto LAB_00580c01;
          }
          break;
        }
      }
    }
    iVar14 = 0;
LAB_00580c01:
    puVar18 = &DAT_006ba148;
    uVar20 = 0x5f;
    do {
      iVar14 = iVar14 * 0x21 + uVar20;
      pbVar15 = puVar18 + 1;
      uVar20 = (uint)*pbVar15;
      puVar18 = puVar18 + 1;
    } while (*pbVar15 != 0);
    param_1[0xf5] = iVar14;
  }
  if (param_2[0x111] == 0) {
    param_1[0x106] = param_1[0xf2];
    param_1[0x109] = 0;
  }
  else {
    param_1[0x106] = param_2[0x111];
    param_1[0x109] = param_2[0x112];
  }
  iVar14 = param_1[0x106];
  param_1[0x107] = 0;
  param_1[0x108] = iVar14;
  if (param_2[0x111] == 0) {
    bVar23 = iVar14 != 0;
    if (bVar23) {
      *param_1 = iVar14;
    }
    uVar20 = (uint)bVar23;
    iVar14 = param_1[0x107];
    if (iVar14 != 0) {
      iVar6 = 0;
      if (uVar20 != 0) {
        do {
          if (param_1[iVar6] == iVar14) {
            uVar9 = 0;
            goto LAB_00580cc6;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)uVar20);
      }
      uVar9 = uVar20;
      if (bVar23 < 0x78) {
        param_1[uVar20] = iVar14;
        uVar9 = 1;
      }
LAB_00580cc6:
      uVar20 = uVar20 + uVar9;
    }
  }
  else {
    *param_1 = param_2[0x111];
    uVar20 = 1;
  }
  iVar14 = param_2[0x112];
  if (iVar14 != 0) {
    iVar6 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar6] == iVar14) goto LAB_00580ceb;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar20);
    }
LAB_00580ce2:
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
    goto LAB_00580d14;
  }
  iVar14 = param_1[0x109];
  if (iVar14 != 0) {
    iVar6 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar6] == iVar14) goto LAB_00580ceb;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar20);
    }
    goto LAB_00580ce2;
  }
LAB_00580d16:
  iVar7 = FUN_005aa2d0(param_1 + 0x78,0x78,param_2);
  iVar14 = param_2[0x121];
  iVar6 = param_2[0x120];
  FUN_00565da0("%s_HEADLIGHT",iVar12);
  iVar8 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar8 = iVar8 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  FUN_00565da0("%s_BRAKELIGHT",iVar12);
  local_58 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    local_58 = local_58 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  if (iVar6 != 0) {
    piVar5 = *(int **)(iVar6 + 0x14);
    piVar22 = piVar5 + *(short *)(iVar6 + 0x1c) * 2;
    if (piVar5 != (int *)0x0) {
      for (; piVar5 < piVar22; piVar5 = piVar5 + 2) {
        if (*piVar5 == 0x10c98090) {
          if ((piVar5 != (int *)0x0) && (piVar5[1] != 0)) {
            iVar8 = FUN_004bbd70();
          }
          break;
        }
      }
    }
  }
  if (iVar14 != 0) {
    piVar5 = *(int **)(iVar14 + 0x14);
    piVar22 = piVar5 + *(short *)(iVar14 + 0x1c) * 2;
    if (piVar5 != (int *)0x0) {
      for (; piVar5 < piVar22; piVar5 = piVar5 + 2) {
        if (*piVar5 == 0x10c98090) {
          if ((piVar5 != (int *)0x0) && (piVar5[1] != 0)) {
            local_58 = FUN_004bbd70();
          }
          break;
        }
      }
    }
  }
  puVar18 = &DAT_006ba120;
  uVar9 = 0x5f;
  iVar14 = iVar8;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  param_1[0xf8] = iVar14;
  pcVar17 = "_RIGHT";
  uVar9 = 0x5f;
  iVar14 = iVar8;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xf9] = iVar14;
  pcVar17 = "_GLASS_LEFT";
  uVar9 = 0x5f;
  iVar14 = iVar8;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xfd] = iVar14;
  pcVar17 = "_GLASS_RIGHT";
  uVar9 = 0x5f;
  iVar14 = iVar8;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xfe] = iVar14;
  puVar18 = &DAT_006ba120;
  uVar9 = 0x5f;
  iVar14 = local_58;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  param_1[0xfa] = iVar14;
  pcVar17 = "_RIGHT";
  uVar9 = 0x5f;
  iVar14 = local_58;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xfb] = iVar14;
  pcVar17 = "_CENTRE";
  uVar9 = 0x5f;
  iVar14 = local_58;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xfc] = iVar14;
  pcVar17 = "_GLASS_LEFT";
  uVar9 = 0x5f;
  iVar14 = local_58;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0xff] = iVar14;
  pcVar17 = "_GLASS_RIGHT";
  uVar9 = 0x5f;
  iVar14 = local_58;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x100] = iVar14;
  pcVar17 = "_GLASS_CENTRE";
  uVar9 = 0x5f;
  iVar14 = local_58;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x101] = iVar14;
  param_1[0x102] = 0;
  puVar18 = &DAT_006ba0dc;
  uVar9 = 0x5f;
  iVar14 = iVar8;
  do {
    pbVar15 = puVar18 + 1;
    iVar14 = iVar14 * 0x21 + uVar9;
    puVar18 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
  } while (*pbVar15 != 0);
  param_1[0x10b] = iVar14;
  puVar18 = &DAT_006ba0d8;
  uVar9 = 0x5f;
  iVar6 = iVar8;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  param_1[0x10c] = iVar6;
  pcVar17 = "_DAMAGE0";
  uVar9 = 0x5f;
  iVar6 = iVar8;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x10d] = iVar6;
  pcVar17 = "_GLASS_OFF";
  uVar9 = 0x5f;
  iVar6 = iVar8;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x10e] = iVar6;
  pcVar17 = "_GLASS_ON";
  uVar9 = 0x5f;
  iVar6 = iVar8;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x10f] = iVar6;
  pcVar17 = "_GLASS_DAMAGE0";
  uVar9 = 0x5f;
  do {
    iVar8 = iVar8 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x110] = iVar8;
  puVar18 = &DAT_006ba0dc;
  uVar9 = 0x5f;
  iVar6 = local_58;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  param_1[0x111] = iVar6;
  puVar18 = &DAT_006ba0d8;
  uVar9 = 0x5f;
  iVar6 = local_58;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  param_1[0x112] = iVar6;
  pcVar17 = "_DAMAGE0";
  uVar9 = 0x5f;
  iVar6 = local_58;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x113] = iVar6;
  pcVar17 = "_GLASS_OFF";
  uVar9 = 0x5f;
  iVar6 = local_58;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x114] = iVar6;
  pcVar17 = "_GLASS_ON";
  uVar9 = 0x5f;
  iVar6 = local_58;
  do {
    iVar6 = iVar6 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  param_1[0x115] = iVar6;
  pcVar17 = "_GLASS_DAMAGE0";
  uVar9 = 0x5f;
  do {
    local_58 = local_58 * 0x21 + uVar9;
    pbVar15 = (byte *)(pcVar17 + 1);
    uVar9 = (uint)*pbVar15;
    pcVar17 = pcVar17 + 1;
  } while (*pbVar15 != 0);
  uVar9 = 0;
  param_1[0x116] = local_58;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581143;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581143:
  iVar14 = param_1[0x10c];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581174;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581174:
  iVar14 = param_1[0x10d];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_005811a5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_005811a5:
  iVar14 = param_1[0x10e];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_005811d6;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_005811d6:
  iVar14 = param_1[0x10f];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581207;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581207:
  iVar14 = param_1[0x110];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_0058123f;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_0058123f:
  iVar14 = param_1[0x111];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581270;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581270:
  iVar14 = param_1[0x112];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_005812a1;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_005812a1:
  iVar14 = param_1[0x113];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_005812d2;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_005812d2:
  iVar14 = param_1[0x114];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581303;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581303:
  iVar14 = param_1[0x115];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581334;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581334:
  iVar14 = param_1[0x116];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_00581365;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_00581365:
  uVar20 = uVar20 + uVar9;
  FUN_00565da0("%s_INTERIOR",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    pbVar1 = pbVar15 + 1;
    iVar14 = iVar14 * 0x21 + (uint)bVar3;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  FUN_00565da0("%s_BADGING",iVar12);
  iVar6 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  FUN_00565da0("%s_BADGING_EU",iVar12);
  iVar8 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    pbVar1 = pbVar15 + 1;
    iVar8 = iVar8 * 0x21 + (uint)bVar3;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  FUN_00565da0("%s_LICENSE_PLATE",iVar12);
  iVar10 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar10 = iVar10 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  param_1[0x105] = iVar10;
  uVar9 = 0;
  param_1[0xf6] = iVar6;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_0058147f;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_0058147f:
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar6 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar6) {
          uVar9 = 0;
          goto LAB_005814af;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar6;
      uVar9 = 1;
    }
  }
LAB_005814af:
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar8 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar8) {
          uVar9 = 0;
          goto LAB_005814df;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar8;
      uVar9 = 1;
    }
  }
LAB_005814df:
  uVar20 = uVar20 + uVar9;
  FUN_00565da0("%s_SIDELIGHT",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  if (local_40 == 0) {
LAB_0058152a:
    iVar6 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar6] == iVar14) {
          uVar9 = 0;
          goto LAB_00581553;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
  else {
    do {
      iVar14 = iVar14 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar15 + 1;
      pbVar15 = pbVar15 + 1;
      bVar3 = *pbVar1;
    } while (*pbVar1 != 0);
    if (iVar14 != 0) goto LAB_0058152a;
    uVar9 = 0;
  }
LAB_00581553:
  uVar20 = uVar20 + uVar9;
  FUN_00565da0("%s_DOOR_HANDLE",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  if (local_40 == 0) {
LAB_0058158e:
    iVar6 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar6] == iVar14) goto LAB_0058158a;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
  else {
    do {
      iVar14 = iVar14 * 0x21 + (uint)bVar3;
      bVar3 = pbVar15[1];
      pbVar15 = pbVar15 + 1;
    } while (bVar3 != 0);
    if (iVar14 != 0) goto LAB_0058158e;
LAB_0058158a:
    uVar9 = 0;
  }
  uVar20 = uVar20 + uVar9;
  FUN_00565da0("%s_LOGO",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  if (local_40 == 0) {
LAB_005815ea:
    iVar6 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar6] == iVar14) goto LAB_005815e6;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
  else {
    do {
      iVar14 = iVar14 * 0x21 + (uint)bVar3;
      bVar3 = pbVar15[1];
      pbVar15 = pbVar15 + 1;
    } while (bVar3 != 0);
    if (iVar14 != 0) goto LAB_005815ea;
LAB_005815e6:
    uVar9 = 0;
  }
  uVar20 = uVar20 + uVar9;
  puVar11 = &DAT_006bdcf8;
  if (param_3 == (int *)0x0) {
    puVar11 = &DAT_006bdcfc;
  }
  FUN_00565da0("%s_SHADOW%s",iVar12,puVar11);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar14 = iVar14 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  param_1[0x11c] = iVar14;
  if (iVar14 == 0) {
LAB_0058165f:
    uVar9 = 0;
  }
  else {
    iVar6 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar6] == iVar14) goto LAB_0058165f;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
  uVar20 = uVar20 + uVar9;
  FUN_00565da0("%s_NEON",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  if (local_40 != 0) {
    do {
      iVar14 = iVar14 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar15 + 1;
      pbVar15 = pbVar15 + 1;
      bVar3 = *pbVar1;
    } while (*pbVar1 != 0);
    if (iVar14 == 0) {
LAB_005816c4:
      uVar9 = 0;
      goto LAB_005816ed;
    }
  }
  iVar6 = 0;
  if (uVar20 != 0) {
    do {
      if (param_1[iVar6] == iVar14) goto LAB_005816c4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar20);
  }
  uVar9 = uVar20;
  if (uVar20 < 0x78) {
    param_1[uVar20] = iVar14;
    uVar9 = 1;
  }
LAB_005816ed:
  uVar20 = uVar20 + uVar9;
  FUN_00565da0("%s_TIRE",iVar12);
  iVar14 = -1;
  pbVar15 = &local_40;
  bVar3 = local_40;
  while (bVar3 != 0) {
    iVar14 = iVar14 * 0x21 + (uint)bVar3;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    bVar3 = *pbVar1;
  }
  param_1[0x103] = iVar14;
  FUN_00565da0("%s_WHEEL_BLUR",iVar12);
  iVar12 = -1;
  pbVar15 = &local_40;
  while (local_40 != 0) {
    iVar12 = iVar12 * 0x21 + (uint)local_40;
    pbVar1 = pbVar15 + 1;
    pbVar15 = pbVar15 + 1;
    local_40 = *pbVar1;
  }
  iVar14 = param_1[0x103];
  param_1[0x104] = iVar12;
  param_1[0x11b] = iVar12;
  uVar9 = 0;
  param_1[0x11a] = iVar14;
  if (iVar14 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar14) {
          uVar9 = 0;
          goto LAB_005817a5;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar14;
      uVar9 = 1;
    }
  }
LAB_005817a5:
  iVar12 = param_1[0x11b];
  uVar20 = uVar20 + uVar9;
  uVar9 = 0;
  if (iVar12 != 0) {
    if (uVar20 != 0) {
      do {
        if (param_1[uVar9] == iVar12) {
          uVar9 = 0;
          goto LAB_005817d6;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar12;
      uVar9 = 1;
    }
  }
LAB_005817d6:
  uVar20 = uVar20 + uVar9;
  if (((param_3 != (int *)0x0) && (param_2[0x11f] != 0)) && (iVar12 = FUN_004bbd70(), iVar12 != 0))
  {
    iVar14 = 0;
    if (uVar20 != 0) {
      do {
        if (param_1[iVar14] == iVar12) {
          uVar9 = 0;
          goto LAB_0058181f;
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar20);
    }
    uVar9 = uVar20;
    if (uVar20 < 0x78) {
      param_1[uVar20] = iVar12;
      uVar9 = 1;
    }
LAB_0058181f:
    uVar20 = uVar20 + uVar9;
  }
  puVar18 = &DAT_006bbc5c;
  iVar12 = -1;
  uVar9 = 0x53;
  do {
    iVar12 = iVar12 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  puVar18 = &DAT_006bbc54;
  iVar14 = -1;
  uVar9 = 0x53;
  do {
    iVar14 = iVar14 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  puVar18 = &DAT_006bbc4c;
  do {
    pcVar17 = puVar18 + 1;
    puVar18 = puVar18 + 1;
  } while (*pcVar17 != '\0');
  pcVar17 = "MEDIUM";
  cVar4 = ((char *)0x006bc44c)[0];
  while (cVar4 != '\0') {
    pcVar2 = pcVar17 + 1;
    pcVar17 = pcVar17 + 1;
    cVar4 = *pcVar2;
  }
  pcVar17 = "LARGE";
  do {
    pcVar2 = pcVar17 + 1;
    pcVar17 = pcVar17 + 1;
  } while (*pcVar2 != '\0');
  iVar6 = -1;
  pcVar17 = "SQUARE";
  bVar3 = ((char *)0x006cc124)[0];
  while (bVar3 != 0) {
    iVar6 = iVar6 * 0x21 + (uint)bVar3;
    pbVar15 = (byte *)(pcVar17 + 1);
    pcVar17 = pcVar17 + 1;
    bVar3 = *pbVar15;
  }
  puVar18 = &DAT_006bbc3c;
  iVar8 = -1;
  uVar9 = 0x52;
  do {
    iVar8 = iVar8 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  puVar18 = &DAT_006bbc34;
  iVar10 = -1;
  uVar9 = 0x57;
  do {
    iVar10 = iVar10 * 0x21 + uVar9;
    pbVar15 = puVar18 + 1;
    uVar9 = (uint)*pbVar15;
    puVar18 = puVar18 + 1;
  } while (*pbVar15 != 0);
  param_3 = param_2 + 0x14e;
  local_50 = 7;
  param_2 = param_2 + 0x126;
  do {
    iVar19 = *param_2;
    if (iVar19 != 0) {
      iVar21 = (int)*(short *)(iVar19 + 0x1c);
      piVar22 = *(int **)(iVar19 + 0x14);
      piVar5 = piVar22;
      if (piVar22 != (int *)0x0) {
        for (; piVar5 < piVar22 + iVar21 * 2; piVar5 = piVar5 + 2) {
          if ((iVar12 == 0) || (*piVar5 == iVar12)) {
            if ((piVar5 != (int *)0x0) && (piVar5 = piVar22, piVar22 != (int *)0x0))
            goto joined_r0x0058197c;
            break;
          }
        }
      }
    }
LAB_00581ae7:
    param_2 = param_2 + 1;
    param_3 = param_3 + 8;
    local_50 = local_50 + -1;
    if (local_50 == 0) {
      param_1[0xf0] = uVar20;
      param_1[0xf1] = iVar7;
      return;
    }
  } while( true );
LAB_00580ceb:
  uVar9 = 0;
LAB_00580d14:
  uVar20 = uVar20 + uVar9;
  goto LAB_00580d16;
joined_r0x0058197c:
  if (piVar5 < piVar22 + iVar21 * 2) {
    if ((iVar14 != 0) && (*piVar5 != iVar14)) goto code_r0x0058198e;
    if (piVar5 != (int *)0x0) {
      piVar5 = piVar22;
      if (piVar22 != (int *)0x0) {
        for (; ((piVar5 < piVar22 + iVar21 * 2 && (iVar12 != 0)) && (*piVar5 != iVar12));
            piVar5 = piVar5 + 2) {
        }
      }
      piVar5 = piVar22 + iVar21 * 2;
      if (piVar22 == (int *)0x0) {
LAB_005819e4:
        iVar19 = 0;
      }
      else {
        while( true ) {
          if (piVar5 <= piVar22) goto LAB_005819e4;
          if ((iVar14 == 0) || (*piVar22 == iVar14)) break;
          piVar22 = piVar22 + 2;
        }
        if (piVar22 == (int *)0x0) goto LAB_005819e4;
        iVar19 = piVar22[1];
      }
      local_54 = 8;
      piVar22 = param_3;
      do {
        iVar21 = *piVar22;
        if (iVar21 != 0) {
          puVar18 = &DAT_006bd3bc;
          iVar16 = -1;
          uVar9 = 0x4e;
          do {
            iVar16 = iVar16 * 0x21 + uVar9;
            pbVar15 = puVar18 + 1;
            uVar9 = (uint)*pbVar15;
            puVar18 = puVar18 + 1;
          } while (*pbVar15 != 0);
          piVar13 = *(int **)(iVar21 + 0x14);
          piVar5 = piVar13 + *(short *)(iVar21 + 0x1c) * 2;
          if (piVar13 != (int *)0x0) {
            for (; piVar13 < piVar5; piVar13 = piVar13 + 2) {
              if ((iVar16 == 0) || (*piVar13 == iVar16)) {
                if (piVar13 != (int *)0x0) {
                  iVar21 = piVar13[1];
                  goto LAB_00581a39;
                }
                break;
              }
            }
          }
          iVar21 = 0;
LAB_00581a39:
          if (iVar19 == iVar6) {
            pcVar17 = "_SQUARE";
            uVar9 = 0x5f;
            do {
              iVar21 = iVar21 * 0x21 + uVar9;
              pbVar15 = (byte *)(pcVar17 + 1);
              uVar9 = (uint)*pbVar15;
              pcVar17 = pcVar17 + 1;
            } while (*pbVar15 != 0);
          }
          else if (iVar19 == iVar8) {
            pcVar17 = "_RECT";
            uVar9 = 0x5f;
            do {
              iVar21 = iVar21 * 0x21 + uVar9;
              pbVar15 = (byte *)(pcVar17 + 1);
              uVar9 = (uint)*pbVar15;
              pcVar17 = pcVar17 + 1;
            } while (*pbVar15 != 0);
          }
          else if (iVar19 == iVar10) {
            puVar18 = &DAT_006bbc1c;
            uVar9 = 0x5f;
            do {
              iVar21 = iVar21 * 0x21 + uVar9;
              pbVar15 = puVar18 + 1;
              uVar9 = (uint)*pbVar15;
              puVar18 = puVar18 + 1;
            } while (*pbVar15 != 0);
          }
          if (iVar21 == 0) {
LAB_00581aaa:
            uVar9 = 0;
          }
          else {
            iVar16 = 0;
            if (0 < (int)uVar20) {
              do {
                if (param_1[iVar16] == iVar21) goto LAB_00581aaa;
                iVar16 = iVar16 + 1;
              } while (iVar16 < (int)uVar20);
            }
            uVar9 = uVar20;
            if ((int)uVar20 < 0x78) {
              param_1[uVar20] = iVar21;
              uVar9 = 1;
            }
          }
          uVar20 = uVar20 + uVar9;
        }
        piVar22 = piVar22 + 1;
        local_54 = local_54 + -1;
      } while (local_54 != 0);
    }
  }
  goto LAB_00581ae7;
code_r0x0058198e:
  piVar5 = piVar5 + 2;
  goto joined_r0x0058197c;
}
