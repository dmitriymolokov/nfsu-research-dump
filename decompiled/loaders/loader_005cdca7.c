/* spd-match: far pct=5.30 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/batches/p1_09/h4_loader_cdca7 */
#include "ghidra_compat.h"

unsigned int __cdecl __controlfp(unsigned int, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_005caf72(...);
int __cdecl FUN_005cafde(...);
int __cdecl FUN_005cb04a(...);
int __cdecl FUN_005cb0b6(...);
int __cdecl FUN_005cce58(...);
int __cdecl FUN_005e98b0(...);
extern int DAT_006cc7a4;
extern unsigned char *DAT_006dc264;
extern unsigned char *DAT_006dc268;
extern unsigned char *DAT_006dc26c;
extern unsigned char *DAT_006dc274;
extern int _DAT_006cc7bc;
extern int _DAT_006cc970;
extern char stack0xffffffc0;
extern void LAB_005cdf7a(...);
extern void LAB_005ce0e5(...);
extern void LAB_005ce119(...);
extern void LAB_005ce153(...);
extern void LAB_005ce167(...);
extern void LAB_005ce16e(...);
extern void LAB_005ce2f2(...);
extern void LAB_005ce37b(...);
extern void LAB_005ce3d0(...);
extern void LAB_005ce501(...);

struct ThisCallBox {
  int FUN_005cdca7(int *param_2);
};
int ThisCallBox::FUN_005cdca7(int *param_2) {
  uint *puVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  int *piVar14;
  float *pfVar15;
  int iVar16;
  float *pfVar17;
  undefined2 *puVar18;
  float *pfVar19;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar20;
  float10 fVar21;
  float10 extraout_ST0_01;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined2 uVar26;
  float local_3c [4];
  int *local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  float *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  piVar7 = param_2;
  local_8 = 0;
  local_10 = ((int)this);
  if ((*param_2 != -1) &&
     ((*(int *)(&DAT_006dc274 + *param_2 * 0x1c) == 0x6000000 ||
      (*(int *)(&DAT_006dc274 + *param_2 * 0x1c) == 0x6000001)))) {
    iVar8 = *(int *)(*(int *)(((int)this) + 0x8c) + param_2[3] * 4);
    iVar3 = *(int *)(iVar8 + 0x38);
    iVar8 = *(int *)(iVar8 + 0x28) + param_2[5];
    if (iVar3 == 0) {
      iVar8 = *(int *)(iVar8 + *(int *)(((int)this) + 0x2c));
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar3 + 8) +
                      *(int *)(iVar8 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
    }
    local_1c = (float *)(iVar8 * 0x1c + *(int *)(((int)this) + 0x24));
    if ((*(int *)((int)local_1c + 0xc) != 0) && (*(int *)((int)local_1c + 0x14) != 0)) {
      uVar10 = *(uint *)(*(int *)((int)local_1c + 0x18) + 0x28);
      if ((uVar10 & 1) != 0) {
        local_c = 0;
        *(uint *)(*(int *)((int)local_1c + 0x18) + 0x28) = uVar10 & 0xfffffffe;
        iVar8 = *(int *)((int)local_1c + 0x14);
        local_2c = *(int **)(*(int *)((int)local_1c + 0x18) + 0x44);
        local_24 = local_2c + 2;
        local_28 = *local_2c + (int)local_2c;
        local_2c = (int *)(local_2c[1] + (int)local_2c);
        if (*(int *)(iVar8 + 0xc) != 0) {
          param_2 = (int *)(*(int *)(iVar8 + 0x10) + iVar8 + 8);
          do {
            piVar14 = *(int **)(*(int *)(*(int *)((int)local_1c + 0x18) + 0x30) + local_c * 4);
            sVar2 = *(short *)((int)param_2 + -4);
            if (sVar2 == 0) {
              if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
                local_8 = FUN_005cce58(piVar14[1],local_2c + *(ushort *)((int)param_2 + -2),
                                       *(undefined2 *)param_2);
              }
            }
            else if (sVar2 == 1) {
              if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
                local_8 = FUN_005caf72(piVar14[1],
                                       (uint)*(ushort *)((int)param_2 + -2) * 0x10 + local_28,
                                       *(undefined2 *)param_2);
              }
            }
            else if (sVar2 == 2) {
              if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
                local_8 = FUN_005cafde(piVar14[1],
                                       local_24 + (uint)*(ushort *)((int)param_2 + -2) * 4,
                                       *(undefined2 *)param_2);
              }
            }
            else {
              if (sVar2 != 3) {
                return -0x7fffbffb;
              }
              if (piVar14 != (int *)0x0) {
                local_20 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(piVar14[1] + 4) * 4);
                local_18 = 0;
                if (*(int *)(local_20 + 0x3c) != 0) {
                  local_14 = 0;
                  do {
                    local_8 = FUN_005cdca7((int *)(*(int *)(local_20 + 0x40) + local_14));
                    if ((unsigned int)(local_8) < 0) {
                      return local_8;
                    }
                    local_18 = local_18 + 1;
                    local_14 = local_14 + 0xac;
                  } while ((unsigned int)(local_18) < *(uint *)(local_20 + 0x3c));
                }
              }
            }
            if ((unsigned int)(local_8) < 0) {
              return local_8;
            }
            if (piVar14 != (int *)0x0) {
              *piVar14 = 0;
            }
            local_c = local_c + 1;
            param_2 = (int *)((int)param_2 + 0x14);
          } while ((unsigned int)(local_c) < *(uint *)(*(int *)((int)local_1c + 0x14) + 0xc));
        }
        puVar1 = (uint *)(*(int *)((int)local_1c + 0x18) + 0x28);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
    }
  }
  if ((*(byte *)(piVar7 + 10) & 1) == 0) {
    return local_8;
  }
  if (piVar7[0x14] != 0) {
    iVar8 = piVar7[0xd];
    local_20 = 0;
    local_1c = (float *)piVar7[0x12];
    param_2 = (int *)0x0;
    local_18 = piVar7[0x10];
    if (iVar8 != 0) {
      local_24 = (int *)piVar7[0x11];
      param_2 = (int *)0x0;
      local_2c = local_24 + 2;
      local_28 = *local_24 + (int)local_24;
      local_24 = (int *)(local_24[1] + (int)local_24);
      if (*(int *)(iVar8 + 0xc) != 0) {
        puVar18 = (undefined2 *)(*(int *)(iVar8 + 0x10) + iVar8 + 8);
        do {
          piVar14 = *(int **)(piVar7[0xc] + (int)param_2 * 4);
          sVar2 = puVar18[-2];
          if (sVar2 == 0) {
            if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
              uVar26 = *puVar18;
              piVar9 = local_24 + (uint)(ushort)puVar18[-1] * 2;
              goto LAB_005cdf7a;
            }
          }
          else if (sVar2 == 1) {
            if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
              uVar26 = *puVar18;
              piVar9 = (int *)((uint)(ushort)puVar18[-1] * 0x20 + local_28);
              goto LAB_005cdf7a;
            }
          }
          else if (((sVar2 == 2) && (piVar14 != (int *)0x0)) && (*piVar14 != 0)) {
            uVar26 = *puVar18;
            piVar9 = local_2c + (uint)(ushort)puVar18[-1] * 8;
LAB_005cdf7a:
            local_8 = FUN_005cb04a(piVar14[1],piVar9,uVar26);
          }
          if ((unsigned int)(local_8) < 0) {
            return local_8;
          }
          if (piVar14 != (int *)0x0) {
            *piVar14 = 0;
          }
          param_2 = (int *)((int)param_2 + 1);
          puVar18 = puVar18 + 10;
        } while ((unsigned int)(param_2) < *(uint *)(piVar7[0xd] + 0xc));
      }
      local_20 = piVar7[0x11] + 8;
      param_2 = (int *)piVar7[0xf];
      local_10 = local_10;
    }
    pfVar17 = local_1c;
    if (*(int *)(((int)this) + 0xb4) == 0) {
      uVar10 = __controlfp(0,0);
      *(uint *)(((int)this) + 0xb8) = uVar10;
      __controlfp(0x10000,0x30000);
      *(undefined4 *)(((int)this) + 0xb4) = 1;
    }
    uVar25 = 0;
    uVar24 = 0;
    uVar23 = 0;
    uVar22 = 0;
    uVar10 = local_20;
    pfVar15 = pfVar17;
    uVar13 = local_18;
    uVar11 = (**(code **)(*(int *)piVar7[0x14] + 0xc))
                       ((int *)piVar7[0x14],0,local_20,0,pfVar17,0,param_2,0,local_18);
    local_8 = FUN_005e98b0(uVar11,uVar22,uVar10,uVar23,pfVar15,uVar24,param_2,uVar25,uVar13);
    if ((unsigned int)(local_8) < 0) {
      return local_8;
    }
    if (*piVar7 == -1) {
      piVar7[10] = piVar7[10] & 0xfffffffe;
      iVar8 = piVar7[0x19];
      uVar10 = __ftol();
      iVar3 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(iVar8 + 0xc) * 4);
      if (*(int *)(iVar3 + 0x38) == 0) {
        iVar16 = *(int *)(((int)this) + 0x2c);
      }
      else {
        iVar16 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
      }
      if (*(uint *)(*(int *)(iVar3 + 0x24) + *(int *)(iVar8 + 0x10) + 0x10 + iVar16) <= uVar10) {
        return -0x7fffbffb;
      }
      *(uint *)(iVar8 + 0x14) = uVar10 << 2;
      return local_8;
    }
    local_8 = FUN_005cb0b6(piVar7 + 2,pfVar17,piVar7[0xe]);
    if ((unsigned int)(local_8) < 0) {
      return local_8;
    }
  }
  iVar8 = *piVar7 * 0x1c;
  uVar10 = *(uint *)(&DAT_006dc274 + iVar8);
  if (uVar10 < 0x6000103) {
    if (uVar10 == 0x6000102) goto LAB_005ce153;
    if (uVar10 < 0x6000005) {
      if (uVar10 == 0x6000004) {
LAB_005ce119:
        local_8 = FUN_005cce58(piVar7 + 2,piVar7[0x13],piVar7[0x2a]);
        goto LAB_005ce167;
      }
      if (uVar10 == 0x5000000) goto LAB_005ce16e;
      if (0x5ffffff < uVar10) {
        if (uVar10 < 0x6000002) {
          if (piVar7[0x18] == 0) goto LAB_005ce16e;
          local_8 = FUN_005cdca7((int *)(piVar7[0x18]));
          goto LAB_005ce167;
        }
        if (uVar10 == 0x6000002) goto LAB_005ce153;
        if (uVar10 == 0x6000003) goto LAB_005ce0e5;
      }
    }
    else {
      if (uVar10 == 0x6000005) goto LAB_005ce153;
      if (uVar10 == 0x6000006) {
LAB_005ce0e5:
        local_8 = FUN_005caf72(piVar7 + 2,piVar7[0x13],piVar7[0x2a]);
        goto LAB_005ce167;
      }
      if (uVar10 == 0x6000007) goto LAB_005ce119;
    }
  }
  else if (uVar10 < 0x6000306) {
    if (((uVar10 == 0x6000305) || (uVar10 == 0x6000105)) ||
       ((uVar10 == 0x6000202 || ((uVar10 == 0x6000205 || (uVar10 == 0x6000302)))))) {
LAB_005ce153:
      local_8 = FUN_005cafde(piVar7 + 2,piVar7[0x13],piVar7[0x2a]);
LAB_005ce167:
      if ((unsigned int)(local_8) < 0) {
        return local_8;
      }
      goto LAB_005ce16e;
    }
  }
  else {
    if ((uVar10 == 0x6000402) || (uVar10 == 0x6000405)) goto LAB_005ce153;
    if (uVar10 == 0x9000000) {
      iVar8 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
      local_1c = (float *)0x0;
      if (*(int *)(iVar8 + 0x3c) != 0) {
        param_2 = (int *)0x0;
        do {
          local_8 = FUN_005cdca7((int *)(*(int *)(iVar8 + 0x40) + (int)param_2));
          if ((unsigned int)(local_8) < 0) {
            return local_8;
          }
          local_1c = (float *)((int)local_1c + 1);
          param_2 = (int *)((int)param_2 + 0xac);
        } while ((unsigned int)(local_1c) < *(uint *)(iVar8 + 0x3c));
      }
      goto LAB_005ce16e;
    }
  }
  iVar3 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
  if (*(int *)(iVar3 + 0x38) == 0) {
    iVar16 = *(int *)(((int)this) + 0x2c);
  }
  else {
    iVar16 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
  }
  piVar14 = (int *)(*(int *)(iVar3 + 0x24) + piVar7[4] + iVar16);
  if (*(int *)(iVar3 + 0x38) == 0) {
    iVar16 = *(int *)(((int)this) + 0x2c);
  }
  else {
    iVar16 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
  }
  pfVar17 = (float *)(*(int *)(iVar3 + 0x28) + piVar7[5] + iVar16);
  iVar3 = *piVar14;
  if (*(int *)(&DAT_006dc264 + iVar8) == 3) {
    local_1c = pfVar17;
    if (iVar3 == 1) {
      uVar10 = piVar14[5];
      uVar13 = piVar14[6];
      if (uVar13 == 1) {
        uVar13 = 0x10;
        if (uVar10 < 0x11) {
          uVar13 = uVar10;
        }
        uVar10 = 0;
        if (uVar13 != 0) {
          pfVar15 = (float *)(piVar7 + 0x1a);
          do {
            pfVar19 = pfVar17 + uVar10;
            uVar10 = uVar10 + 1;
            *pfVar15 = (float)(int)*pfVar19;
            pfVar15 = pfVar15 + 1;
          } while (uVar10 < uVar13);
        }
      }
      else {
        local_20 = 4;
        if (uVar10 < 5) {
          local_20 = uVar10;
        }
        param_2 = (int *)0x4;
        if (uVar13 < 5) {
          param_2 = (int *)uVar13;
        }
        if (local_20 != 0) {
          pfVar15 = (float *)(piVar7 + 0x1a);
          uVar10 = (uint)param_2;
          pfVar19 = pfVar15;
          do {
            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
              fVar12 = *pfVar17;
              pfVar17 = pfVar17 + 1;
              *pfVar15 = (float)(int)fVar12;
              pfVar15 = pfVar15 + 1;
            }
            pfVar17 = local_1c + uVar13;
            pfVar15 = pfVar19 + 4;
            local_20 = local_20 - 1;
            uVar10 = (uint)param_2;
            local_1c = pfVar17;
            pfVar19 = pfVar15;
          } while (local_20 != 0);
        }
      }
      goto LAB_005ce16e;
    }
    if (iVar3 != 2) {
      if (iVar3 != 3) {
        return -0x7fffbffb;
      }
      uVar10 = piVar14[5];
      uVar13 = piVar14[6];
      if (uVar13 == 1) {
        uVar13 = 0x10;
        if (uVar10 < 0x11) {
          uVar13 = uVar10;
        }
        uVar10 = 0;
        if (uVar13 != 0) {
          pfVar15 = (float *)(piVar7 + 0x1a);
          do {
            pfVar19 = pfVar17 + uVar10;
            uVar10 = uVar10 + 1;
            *pfVar15 = *pfVar19;
            pfVar15 = pfVar15 + 1;
          } while (uVar10 < uVar13);
        }
      }
      else {
        local_18 = 4;
        if (uVar10 < 5) {
          local_18 = uVar10;
        }
        param_2 = (int *)0x4;
        if (uVar13 < 5) {
          param_2 = (int *)uVar13;
        }
        if (local_18 != 0) {
          pfVar17 = (float *)(piVar7 + 0x1a);
          do {
            if (param_2 != (int *)0x0) {
              local_20 = (uint)param_2;
              pfVar15 = local_1c;
              pfVar19 = pfVar17;
              do {
                *pfVar19 = *pfVar15;
                pfVar15 = pfVar15 + 1;
                pfVar19 = pfVar19 + 1;
                local_20 = local_20 - 1;
              } while (local_20 != 0);
            }
            local_1c = local_1c + uVar13;
            pfVar17 = pfVar17 + 4;
            local_18 = local_18 - 1;
          } while (local_18 != 0);
        }
      }
      goto LAB_005ce16e;
    }
    uVar10 = piVar14[5];
    uVar13 = piVar14[6];
    if (uVar13 != 1) {
      local_20 = 4;
      if (uVar10 < 5) {
        local_20 = uVar10;
      }
      param_2 = (int *)0x4;
      if (uVar13 < 5) {
        param_2 = (int *)uVar13;
      }
      if (local_20 != 0) {
        pfVar15 = (float *)(piVar7 + 0x1a);
        uVar10 = (uint)param_2;
        pfVar19 = pfVar15;
        do {
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            fVar12 = *pfVar17;
            pfVar17 = pfVar17 + 1;
            *pfVar15 = (float)(int)fVar12;
            pfVar15 = pfVar15 + 1;
          }
          pfVar17 = local_1c + uVar13;
          pfVar15 = pfVar19 + 4;
          local_20 = local_20 - 1;
          uVar10 = (uint)param_2;
          local_1c = pfVar17;
          pfVar19 = pfVar15;
        } while (local_20 != 0);
      }
      goto LAB_005ce16e;
    }
    if (uVar10 == 1) {
      if ((*(int *)(&DAT_006dc268 + iVar8) == 1) && (*(int *)(&DAT_006dc26c + iVar8) == 4)) {
        fVar12 = *pfVar17;
        fVar4 = (float)((uint)fVar12 >> 8 & 0xff) * _DAT_006cc970;
        fVar5 = (float)((uint)fVar12 & 0xff) * _DAT_006cc970;
        fVar6 = (float)((uint)fVar12 >> 0x18) * _DAT_006cc970;
        piVar7[0x1a] = (int)((float)((uint)fVar12 >> 0x10 & 0xff) * _DAT_006cc970);
        piVar7[0x1b] = (int)fVar4;
        piVar7[0x1c] = (int)fVar5;
        piVar7[0x1d] = (int)fVar6;
        goto LAB_005ce16e;
      }
LAB_005ce501:
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0x10;
      if (uVar10 < 0x11) goto LAB_005ce501;
    }
    uVar10 = 0;
    if (uVar13 != 0) {
      pfVar15 = (float *)(piVar7 + 0x1a);
      do {
        pfVar19 = pfVar17 + uVar10;
        uVar10 = uVar10 + 1;
        *pfVar15 = (float)(int)*pfVar19;
        pfVar15 = pfVar15 + 1;
      } while (uVar10 < uVar13);
    }
    goto LAB_005ce16e;
  }
  if (*(int *)(&DAT_006dc264 + iVar8) != 0xf20000) {
    return -0x7fffbffb;
  }
  local_3c[0] = 0.0;
  local_3c[1] = 0.0;
  local_3c[2] = 0.0;
  local_3c[3] = 0.0;
  if (iVar3 == 1) {
    uVar10 = piVar14[5];
    if (uVar10 != 1) {
      if (4 < uVar10) {
        uVar10 = 4;
      }
      uVar13 = 0;
      if (uVar10 != 0) {
        do {
          pfVar15 = pfVar17 + uVar13;
          uVar13 = uVar13 + 1;
          *(float *)(&stack0xffffffc0 + uVar13 * 4) = (float)(int)*pfVar15;
        } while (uVar13 < uVar10);
      }
      goto LAB_005ce2f2;
    }
LAB_005ce37b:
    fVar12 = *pfVar17;
  }
  else {
    if (iVar3 == 2) {
      uVar10 = piVar14[5];
      if (uVar10 == 1) goto LAB_005ce37b;
      if (4 < uVar10) {
        uVar10 = 4;
      }
      uVar13 = 0;
      if (uVar10 != 0) {
        do {
          pfVar15 = pfVar17 + uVar13;
          uVar13 = uVar13 + 1;
          *(float *)(&stack0xffffffc0 + uVar13 * 4) = (float)(int)*pfVar15;
        } while (uVar13 < uVar10);
      }
    }
    else {
      if (iVar3 != 3) {
        return -0x7fffbffb;
      }
      uVar10 = piVar14[5];
      if (uVar10 == 1) {
        fVar12 = (float)__ftol();
        goto LAB_005ce3d0;
      }
      if (4 < uVar10) {
        uVar10 = 4;
      }
      if (uVar10 != 0) {
        pfVar15 = local_3c;
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pfVar15 = *pfVar17;
          pfVar17 = pfVar17 + 1;
          pfVar15 = pfVar15 + 1;
        }
      }
    }
LAB_005ce2f2:
    fVar20 = (float10)((int)_DAT_006cc7bc);
    uVar10 = 0xff;
    fVar21 = (float10)((int)DAT_006cc7a4);
    if ((float10)local_3c[0] < fVar20) {
      if ((float10)local_3c[0] < fVar21 == ((float10)local_3c[0] == fVar21)) {
        param_2 = (int *)__ftol();
        fVar21 = extraout_ST0;
        fVar20 = extraout_ST1;
      }
      else {
        param_2 = (int *)0x0;
      }
    }
    else {
      param_2 = (int *)0xff;
    }
    if ((float10)local_3c[1] < fVar20) {
      if ((float10)local_3c[1] < fVar21 == ((float10)local_3c[1] == fVar21)) {
        local_1c = (float *)__ftol();
        fVar21 = extraout_ST0_01;
        fVar20 = extraout_ST1_00;
      }
      else {
        local_1c = (float *)0x0;
      }
    }
    else {
      local_1c = (float *)0xff;
    }
    if ((float10)local_3c[2] < fVar20) {
      if ((float10)local_3c[2] < fVar21 == ((float10)local_3c[2] == fVar21)) {
        uVar10 = __ftol();
        fVar20 = extraout_ST0_00;
      }
      else {
        uVar10 = 0;
      }
    }
    if ((float10)local_3c[3] < fVar20) {
      if (local_3c[3] < DAT_006cc7a4 == (local_3c[3] == DAT_006cc7a4)) {
        iVar8 = __ftol();
      }
      else {
        iVar8 = 0;
      }
    }
    else {
      iVar8 = 0xff;
    }
    fVar12 = (float)(((iVar8 << 8 | (uint)param_2) << 8 | (uint)local_1c) << 8 | uVar10);
  }
LAB_005ce3d0:
  piVar7[0x1a] = (int)fVar12;
LAB_005ce16e:
  piVar7[10] = piVar7[10] & 0xfffffffe;
  return local_8;
}
