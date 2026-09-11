/* spd-match: far pct=5.49 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_p3/buckets/residual_m375_c2440_void_int/batches/20260724T143356Z_w0_tp1 */
#include "ghidra_compat.h"

#ifndef ZEXT24
#define ZEXT24(x) ((unsigned int)(unsigned short)(x))
#endif
void *__cdecl _memmove(void *, const void *, unsigned int);
int __cdecl FUN_005d65b0(unsigned int, void **);
HMODULE __stdcall GetModuleHandleA(const char *);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;

int __cdecl FUN_005d71f8(...);
extern int DAT_006db8f0;
extern unsigned char *DAT_006dc274;
extern void LAB_005c98c8(...);
extern void LAB_005c9944(...);
extern void LAB_005c9a12(...);
extern void LAB_005c9ab3(...);
extern void LAB_005c9ac9(...);
extern void LAB_005ca00c(...);
extern void LAB_005ca0df(...);
extern void LAB_005ca0e3(...);

struct ThisCallBox {
  int FUN_005c97cb(int *param_2, int param_3);
};
int ThisCallBox::FUN_005c97cb(int *param_2, int param_3) {
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined1 local_43c [4];
  undefined1 auStack_438 [516];
  undefined4 local_234;
  undefined4 local_230;
  undefined1 local_15c [61];
  byte local_11f;
  int local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_20 = (int *)0x0;
  local_10 = 0xff;
  local_c = 0x11;
  if (param_3 == -1) {
    param_3 = param_2[1];
  }
  piVar7 = param_2;
  if (*param_2 == -1) {
    piVar7 = (int *)param_2[0x19];
  }
  uVar2 = *(uint *)(&DAT_006dc274 + *piVar7 * 0x1c);
  local_8 = ((int)this);
  switch(uVar2 >> 0x18) {
  case 1:
    iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0xe4))
                       (*(int **)(((int)this) + 8),uVar2 & 0xffffff,piVar7[0x1a]);
    break;
  case 2:
    iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x10c))
                       (*(int **)(((int)this) + 8),param_3,uVar2 & 0xffffff,piVar7[0x1a]);
    break;
  case 3:
    if (uVar2 == 0x300000d) {
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0xd4))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x1a]);
      break;
    }
    piVar4 = (int *)(piVar7[0x2a] * 0x68 +
                    *(int *)(*(int *)(((int)this) + 0x34) * 0xac + 0x38 + *(int *)(((int)this) + 0x1c)));
    switch(uVar2) {
    case 0x3000000:
      *piVar4 = piVar7[0x1a];
      if (*(int *)(((int)this) + 0x84) == 1) {
        *piVar4 = 3;
      }
      break;
    case 0x3000001:
      piVar9 = piVar4 + 1;
      goto LAB_005c98c8;
    case 0x3000002:
      piVar9 = piVar4 + 5;
      goto LAB_005c98c8;
    case 0x3000003:
      piVar9 = piVar4 + 9;
LAB_005c98c8:
      local_18 = piVar7[0x1a];
      local_14 = piVar7[0x1b];
      local_10 = piVar7[0x1c];
      local_c = piVar7[0x1d];
      piVar10 = piVar9 + 1;
      *piVar9 = local_18;
LAB_005c9944:
      *piVar10 = local_14;
      piVar10[1] = local_10;
      piVar10[2] = local_c;
      break;
    case 0x3000004:
      local_14 = piVar7[0x1a];
      local_10 = piVar7[0x1b];
      local_c = piVar7[0x1c];
      piVar10 = piVar4 + 0xd;
      goto LAB_005c9944;
    case 0x3000005:
      local_14 = piVar7[0x1a];
      local_10 = piVar7[0x1b];
      local_c = piVar7[0x1c];
      piVar10 = piVar4 + 0x10;
      *piVar10 = local_14;
      piVar4[0x11] = local_10;
      piVar4[0x12] = local_c;
      if (*(int *)(((int)this) + 0x84) == 1) {
        local_14 = 0;
        local_10 = 0;
        local_c = 0x3f800000;
        goto LAB_005c9944;
      }
      break;
    case 0x3000006:
      piVar4[0x13] = piVar7[0x1a];
      break;
    case 0x3000007:
      piVar4[0x14] = piVar7[0x1a];
      break;
    case 0x3000008:
      piVar4[0x15] = piVar7[0x1a];
      break;
    case 0x3000009:
      piVar4[0x16] = piVar7[0x1a];
      break;
    case 0x300000a:
      piVar4[0x17] = piVar7[0x1a];
      break;
    case 0x300000b:
      piVar4[0x18] = piVar7[0x1a];
      break;
    case 0x300000c:
      piVar4[0x19] = piVar7[0x1a];
    }
    if ((((*(byte *)(piVar7 + 10) & 2) == 0) && (*(int *)(((int)this) + 0x84) != 3)) ||
       (iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0xcc))
                           (*(int **)(((int)this) + 8),param_3,piVar4), -1 < iVar11))
    goto switchD_005c982d_default;
    iVar6 = *(int *)(local_8 + 0x84);
    goto LAB_005ca0df;
  case 4:
    piVar4 = (int *)(*(int *)(((int)this) + 0x34) * 0xac + 0x3c + *(int *)(((int)this) + 0x1c));
    piVar10 = piVar4;
    if (uVar2 == 0x4000000) {
LAB_005c9a12:
      local_18 = piVar7[0x1a];
      local_14 = piVar7[0x1b];
      local_10 = piVar7[0x1c];
      local_c = piVar7[0x1d];
      *piVar10 = local_18;
      piVar10[1] = local_14;
      piVar10[2] = local_10;
      piVar10[3] = local_c;
    }
    else {
      if (uVar2 == 0x4000001) {
        piVar10 = piVar4 + 4;
        goto LAB_005c9a12;
      }
      if (uVar2 == 0x4000002) {
        piVar10 = piVar4 + 8;
        goto LAB_005c9a12;
      }
      if (uVar2 == 0x4000003) {
        piVar10 = piVar4 + 0xc;
        goto LAB_005c9a12;
      }
      if (uVar2 == 0x4000004) {
        piVar4[0x10] = piVar7[0x1a];
      }
    }
    if (((*(byte *)(piVar7 + 10) & 2) != 0) || (*(int *)(((int)this) + 0x84) == 3)) {
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0xc4))(*(int **)(((int)this) + 8),piVar4);
      break;
    }
    goto switchD_005c982d_default;
  case 5:
    if (*(int *)(((int)this) + 0x84) == 2) {
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1c))(*(int **)(((int)this) + 8),local_15c);
      if (iVar11 < 0) goto LAB_005ca0e3;
      iVar11 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
      if (*(int *)(iVar11 + 0x38) == 0) {
        iVar6 = *(int *)(((int)this) + 0x2c);
      }
      else {
        iVar6 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
      }
      iVar11 = *(int *)(*(int *)(iVar11 + 0x24) + piVar7[4] + iVar6);
      if (iVar11 == 8) {
        local_11f = local_11f & 0x20;
      }
      else {
        if (iVar11 != 9) goto LAB_005c9ac9;
        local_11f = local_11f & 8;
      }
      if (local_11f == 0) {
LAB_005c9ab3:
        iVar11 = -0x7fffbffb;
        goto LAB_005ca0e3;
      }
    }
LAB_005c9ac9:
    iVar11 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
    iVar6 = *(int *)(iVar11 + 0x38);
    iVar11 = *(int *)(iVar11 + 0x28) + piVar7[5];
    if (iVar6 == 0) {
      iVar11 = *(int *)(iVar11 + *(int *)(((int)this) + 0x2c));
    }
    else {
      iVar11 = *(int *)(*(int *)(iVar6 + 8) +
                       *(int *)(iVar11 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
    }
    iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x104))
                       (*(int **)(((int)this) + 8),param_3,
                        *(undefined4 *)(iVar11 * 0x1c + 4 + *(int *)(((int)this) + 0x24)));
    break;
  case 6:
    if (uVar2 == 0x6000008) {
      iVar11 = piVar7[0x1a];
      if (*(int *)(((int)this) + 0x84) == 1) {
        iVar11 = 2;
      }
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x164))(*(int **)(((int)this) + 8),iVar11);
      break;
    }
    if (*(int *)(((int)this) + 0x84) == 1) goto switchD_005c982d_default;
    if (0x6000102 < uVar2) {
      if (uVar2 != 0x6000105) {
        if (uVar2 == 0x6000202) goto switchD_005c9b6d_caseD_6000002;
        if (uVar2 != 0x6000205) {
          if (uVar2 == 0x6000302) goto switchD_005c9b6d_caseD_6000002;
          if (uVar2 != 0x6000305) {
            if (uVar2 == 0x6000402) goto switchD_005c9b6d_caseD_6000002;
            if (uVar2 != 0x6000405) goto switchD_005c982d_default;
          }
        }
      }
switchD_005c9b6d_caseD_6000005:
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1b4))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x13],piVar7[0x2a]);
      goto LAB_005ca00c;
    }
    if (uVar2 == 0x6000102) {
switchD_005c9b6d_caseD_6000002:
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x178))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x13],piVar7[0x2a]);
      goto LAB_005ca00c;
    }
    switch(uVar2) {
    case 0x6000000:
      iVar11 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
      iVar6 = *(int *)(iVar11 + 0x38);
      iVar11 = *(int *)(iVar11 + 0x28) + piVar7[5];
      if (iVar6 == 0) {
        iVar11 = *(int *)(iVar11 + *(int *)(((int)this) + 0x2c));
      }
      else {
        iVar11 = *(int *)(*(int *)(iVar6 + 8) +
                         *(int *)(iVar11 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
      }
      iVar6 = iVar11 * 0x1c + *(int *)(((int)this) + 0x24);
      if (*(int *)(iVar6 + 0xc) == 0) {
        return -0x7fffbffb;
      }
      param_3 = iVar6;
      if (*(int *)(((int)this) + 0x84) == 2) {
        if (*(int *)(iVar6 + 4) == 0) {
          puVar12 = (undefined4 *)&DAT_006db8f0;
        }
        else {
          puVar12 = (undefined4 *)&param_2;
          puVar13 = local_43c;
          uVar5 = (**(code **)(**(int **)(iVar6 + 0x10) + 0xc))
                            (*(int **)(iVar6 + 0x10),puVar13,puVar12);
          iVar11 = FUN_005d71f8(uVar5,puVar13,puVar12);
          if (iVar11 < 0) goto LAB_005ca0e3;
          if ((int *)0x40 < param_2) goto LAB_005c9ab3;
          piVar7 = (int *)0x0;
          if (param_2 != (int *)0x0) {
            do {
              iVar11 = (int)piVar7 * 8;
              *(undefined2 *)(&local_234 + (int)piVar7 * 2) = 0;
              *(undefined1 *)((int)&local_230 + iVar11 + 1) = 0;
              *(short *)((int)&local_234 + iVar11 + 2) = (short)piVar7 * 0xc;
              *(undefined1 *)(&local_230 + (int)piVar7 * 2) = 2;
              *(undefined1 *)((int)&local_230 + iVar11 + 2) = local_43c[iVar11];
              piVar7 = (int *)((int)piVar7 + 1);
              *(undefined1 *)((int)&local_230 + iVar11 + 3) = auStack_438[iVar11];
            } while (piVar7 < param_2);
          }
          (&local_234)[(int)piVar7 * 2] = local_10;
          puVar12 = (undefined4 *)&local_234;
          (&local_230)[(int)piVar7 * 2] = local_c;
        }
        iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x158))
                           (*(int **)(((int)this) + 8),puVar12,&local_20);
        if ((iVar11 < 0) ||
           (iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x15c))(*(int **)(((int)this) + 8),local_20)
           , iVar11 < 0)) goto LAB_005ca0e3;
        if (local_20 != (int *)0x0) {
          (**(code **)(*local_20 + 8))(local_20);
          local_20 = (int *)0x0;
        }
      }
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x170))
                         (*(int **)(((int)this) + 8),*(undefined4 *)(iVar6 + 4));
      if (iVar11 < 0) goto LAB_005ca0e3;
      iVar3 = *(int *)(iVar6 + 0x14);
      if (iVar3 != 0) {
        piVar7 = *(int **)(*(int *)(iVar6 + 0x18) + 0x44);
        param_2 = (int *)0x0;
        local_24 = piVar7 + 2;
        local_1c = *piVar7 + (int)piVar7;
        local_8 = piVar7[1] + (int)piVar7;
        if (*(int *)(iVar3 + 0xc) != 0) {
          puVar8 = (ushort *)(*(int *)(iVar3 + 0x10) + iVar3 + 6);
          do {
            uVar1 = puVar8[-1];
            if (uVar1 == 0) {
              iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x188))
                                 (*(int **)(((int)this) + 8),(uint)*puVar8,local_8 + (uint)*puVar8 * 4,
                                  puVar8[1]);
            }
            else if (uVar1 == 1) {
              iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x180))
                                 (*(int **)(((int)this) + 8),(uint)*puVar8,
                                  (uint)*puVar8 * 0x10 + local_1c,puVar8[1]);
            }
            else if (uVar1 == 2) {
              iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x178))
                                 (*(int **)(((int)this) + 8),(uint)*puVar8,local_24 + (uint)*puVar8 * 4,
                                  puVar8[1]);
            }
            if (iVar11 < 0) goto LAB_005ca0e3;
            param_2 = (int *)((int)param_2 + 1);
            puVar8 = puVar8 + 10;
          } while (param_2 < *(int **)(*(int *)(param_3 + 0x14) + 0xc));
        }
      }
      goto switchD_005c982d_default;
    case 0x6000001:
      iVar11 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
      iVar6 = *(int *)(iVar11 + 0x38);
      iVar11 = *(int *)(iVar11 + 0x28) + piVar7[5];
      if (iVar6 == 0) {
        iVar11 = *(int *)(iVar11 + *(int *)(((int)this) + 0x2c));
      }
      else {
        iVar11 = *(int *)(*(int *)(iVar6 + 8) +
                         *(int *)(iVar11 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
      }
      iVar6 = iVar11 * 0x1c + *(int *)(((int)this) + 0x24);
      if (*(int *)(iVar6 + 0xc) == 0) {
        return -0x7fffbffb;
      }
      param_3 = iVar6;
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1ac))
                         (*(int **)(((int)this) + 8),*(undefined4 *)(iVar6 + 4));
      if (iVar11 < 0) goto LAB_005ca0e3;
      iVar3 = *(int *)(iVar6 + 0x14);
      if (iVar3 != 0) {
        piVar7 = *(int **)(*(int *)(iVar6 + 0x18) + 0x44);
        param_2 = (int *)0x0;
        local_28 = piVar7 + 2;
        local_2c = *piVar7 + (int)piVar7;
        local_c = piVar7[1] + (int)piVar7;
        if (*(int *)(iVar3 + 0xc) != 0) {
          puVar8 = (ushort *)(*(int *)(iVar3 + 0x10) + iVar3 + 6);
          do {
            uVar1 = puVar8[-1];
            if (uVar1 == 0) {
              iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1c4))
                                 (*(int **)(((int)this) + 8),(uint)*puVar8,local_c + (uint)*puVar8 * 4,
                                  puVar8[1]);
            }
            else if (uVar1 == 1) {
              iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1bc))
                                 (*(int **)(((int)this) + 8),(uint)*puVar8,
                                  (uint)*puVar8 * 0x10 + local_2c,puVar8[1]);
            }
            else if (uVar1 == 2) {
              iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1b4))
                                 (*(int **)(((int)this) + 8),(uint)*puVar8,local_28 + (uint)*puVar8 * 4,
                                  puVar8[1]);
            }
            else {
              if (uVar1 != 3) goto LAB_005c9ab3;
              iVar6 = *(int *)(*(int *)(*(int *)(param_3 + 0x18) + 0x30) + (int)param_2 * 4);
              if (iVar6 != 0) {
                local_24 = *(int **)(*(int *)(((int)this) + 0x8c) +
                                    *(int *)(*(int *)(iVar6 + 4) + 4) * 4);
                local_1c = 0;
                if (local_24[0xf] != 0) {
                  local_8 = 0;
                  do {
                    iVar11 = FUN_005c97cb((int *)(local_24[0x10] + local_8),*puVar8);
                    if (iVar11 < 0) goto LAB_005ca0e3;
                    local_1c = local_1c + 1;
                    local_8 = local_8 + 0xac;
                  } while (local_1c < (uint)local_24[0xf]);
                }
              }
            }
            if (iVar11 < 0) goto LAB_005ca0e3;
            param_2 = (int *)((int)param_2 + 1);
            puVar8 = puVar8 + 10;
          } while (param_2 < *(int **)(*(int *)(param_3 + 0x14) + 0xc));
        }
      }
      goto switchD_005c982d_default;
    case 0x6000002:
      goto switchD_005c9b6d_caseD_6000002;
    case 0x6000003:
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x180))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x13],piVar7[0x2a]);
      break;
    case 0x6000004:
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x188))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x13],piVar7[0x2a]);
      break;
    case 0x6000005:
      goto switchD_005c9b6d_caseD_6000005;
    case 0x6000006:
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1bc))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x13],piVar7[0x2a]);
      break;
    case 0x6000007:
      iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x1c4))
                         (*(int **)(((int)this) + 8),param_3,piVar7[0x13],piVar7[0x2a]);
      break;
    default:
      goto switchD_005c982d_default;
    }
LAB_005ca00c:
    if (iVar11 < 0) goto LAB_005ca0e3;
    goto switchD_005c982d_default;
  case 7:
    if (uVar2 == 0x7000000) {
      iVar11 = 3;
    }
    else if (uVar2 == 0x7000001) {
      iVar11 = 2;
    }
    else if (uVar2 == 0x7000002) {
      iVar11 = param_3 + 0x100;
    }
    else {
      if (uVar2 != 0x7000003) goto switchD_005c982d_default;
      iVar11 = param_3 + 0x10;
    }
    iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0xb0))
                       (*(int **)(((int)this) + 8),iVar11,piVar7 + 0x1a);
    break;
  case 8:
    iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x114))
                       (*(int **)(((int)this) + 8),param_3,uVar2 & 0xffffff,piVar7[0x1a]);
    break;
  case 9:
    iVar6 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar7[3] * 4);
    local_1c = 0;
    if (*(int *)(iVar6 + 0x3c) != 0) {
      param_2 = (int *)0x0;
      do {
        iVar11 = FUN_005c97cb((int *)(*(int *)(iVar6 + 0x40) + (int)param_2),param_3);
        if (iVar11 < 0) goto LAB_005ca0e3;
        local_1c = local_1c + 1;
        param_2 = param_2 + 0x2b;
      } while (local_1c < *(uint *)(iVar6 + 0x3c));
    }
    goto switchD_005c982d_default;
  case 10:
    iVar11 = (**(code **)(**(int **)(((int)this) + 8) + 0x13c))(*(int **)(((int)this) + 8),piVar7[0x1a]);
    break;
  default:
    goto switchD_005c982d_default;
  }
  if (iVar11 < 0) {
    iVar6 = *(int *)(((int)this) + 0x84);
LAB_005ca0df:
    if (iVar6 != 1) goto LAB_005ca0e3;
  }
switchD_005c982d_default:
  iVar11 = 0;
LAB_005ca0e3:
  if (local_20 != (int *)0x0) {
    (**(code **)(*local_20 + 8))(local_20);
  }
  return iVar11;
}
