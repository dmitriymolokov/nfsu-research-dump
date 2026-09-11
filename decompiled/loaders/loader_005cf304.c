/* spd-match: far pct=9.41 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_7/buckets/loaders_p4/batches/20260724T153655Z_w0_tp1 */
#include "ghidra_compat.h"

int __cdecl __controlfp(...);
int __cdecl __ftol(...);

int __cdecl FUN_005c80ae(...);
int __cdecl FUN_005c97cb(...);
int __cdecl FUN_005caf72(...);
int __cdecl FUN_005cafde(...);
int __cdecl FUN_005cce58(...);
int __cdecl FUN_005cdca7(...);
int __cdecl FUN_005e8fb1(...);
extern unsigned char *DAT_006dc274;
extern void LAB_005cf5d7(...);
extern void LAB_005cf7fe(...);
extern void LAB_005cfa9b(...);
extern void LAB_005cfbc0(...);
extern void LAB_005d0130(...);

struct ThisCallBox {
  int FUN_005cf304(undefined4 *param_2);
};
int ThisCallBox::FUN_005cf304(undefined4 *param_2) {
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  iVar2 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)((int)param_2 + 4) * 4);
  param_2 = *(undefined4 **)(iVar2 + 0x2c);
  local_8 = 0;
  if (param_2 != (undefined4 *)0x0) {
    do {
      param_2 = (undefined4 *)param_2[4];
      piVar11 = (int *)param_2[2];
      piVar11[10] = piVar11[10] | 1;
      *param_2 = 1;
      iVar4 = piVar11[0x17];
      local_c = piVar11;
      if (iVar4 == 0) {
        if ((*(int *)(((int)this) + 0x84) == 3) &&
           ((*(int *)(((int)this) + 0x30) == piVar11[0x16] &&
            (*(int *)(((int)this) + 0x34) == piVar11[0x15])))) {
          iVar4 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar11[3] * 4);
          iVar9 = *(int *)(iVar4 + 0x38);
          iVar4 = *(int *)(iVar4 + 0x28) + piVar11[5];
          if (iVar9 == 0) {
            iVar4 = *(int *)(iVar4 + *(int *)(((int)this) + 0x2c));
          }
          else {
            iVar4 = *(int *)(*(int *)(iVar9 + 8) +
                            *(int *)(iVar4 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
          }
          local_1c = (int *)(iVar4 * 0x1c + *(int *)(((int)this) + 0x24));
          if (((local_1c[3] != 0) && (iVar4 = local_1c[5], iVar4 != 0)) &&
             (iVar9 = local_1c[6], (*(byte *)(iVar9 + 0x28) & 1) != 0)) {
            iVar4 = *(int *)(iVar4 + 0x10) + iVar4;
            iVar10 = iVar4 + param_2[5] * 0x14;
            sVar1 = *(short *)(iVar10 + 4);
            if (sVar1 == 2) {
              iVar9 = *(int *)(iVar9 + 0x44) + 8;
              local_8 = FUN_005cafde(param_2[1],(uint)*(ushort *)(iVar10 + 6) * 0x10 + iVar9,
                                     *(undefined2 *)(iVar10 + 8));
              if ((int)local_8 < 0) break;
              if (*local_1c == 0x10) {
                iVar4 = iVar4 + param_2[5] * 0x14;
                uVar5 = (uint)*(ushort *)(iVar4 + 6);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x178))
                                    (*(int **)(((int)this) + 8),uVar5,uVar5 * 0x10 + iVar9,
                                     *(undefined2 *)(iVar4 + 8));
              }
              else if (*local_1c == 0xf) {
                iVar4 = iVar4 + param_2[5] * 0x14;
                uVar5 = (uint)*(ushort *)(iVar4 + 6);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x1b4))
                                    (*(int **)(((int)this) + 8),uVar5,uVar5 * 0x10 + iVar9,
                                     *(undefined2 *)(iVar4 + 8));
              }
              else {
LAB_005cf5d7:
                local_8 = -0x7fffbffb;
              }
            }
            else if (sVar1 == 1) {
              piVar11 = *(int **)(iVar9 + 0x44);
              iVar9 = *piVar11;
              local_8 = FUN_005caf72(param_2[1],
                                     (int)piVar11 + (uint)*(ushort *)(iVar10 + 6) * 0x10 + iVar9,
                                     *(undefined2 *)(iVar10 + 8));
              if ((int)local_8 < 0) break;
              if (*local_1c == 0x10) {
                iVar4 = iVar4 + param_2[5] * 0x14;
                uVar5 = (uint)*(ushort *)(iVar4 + 6);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x180))
                                    (*(int **)(((int)this) + 8),uVar5,
                                     (int)piVar11 + uVar5 * 0x10 + iVar9,*(undefined2 *)(iVar4 + 8))
                ;
              }
              else {
                if (*local_1c != 0xf) goto LAB_005cf5d7;
                iVar4 = iVar4 + param_2[5] * 0x14;
                uVar5 = (uint)*(ushort *)(iVar4 + 6);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x1bc))
                                    (*(int **)(((int)this) + 8),uVar5,
                                     (int)piVar11 + uVar5 * 0x10 + iVar9,*(undefined2 *)(iVar4 + 8))
                ;
              }
            }
            else if (sVar1 == 0) {
              iVar9 = *(int *)(*(int *)(iVar9 + 0x44) + 4) + *(int *)(iVar9 + 0x44);
              local_8 = FUN_005cce58(param_2[1],iVar9 + (uint)*(ushort *)(iVar10 + 6) * 4,
                                     *(undefined2 *)(iVar10 + 8));
              if ((int)local_8 < 0) break;
              if (*local_1c == 0x10) {
                iVar4 = iVar4 + param_2[5] * 0x14;
                uVar5 = (uint)*(ushort *)(iVar4 + 6);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x188))
                                    (*(int **)(((int)this) + 8),uVar5,iVar9 + uVar5 * 4,
                                     *(undefined2 *)(iVar4 + 8));
              }
              else {
                if (*local_1c != 0xf) goto LAB_005cf5d7;
                iVar4 = iVar4 + param_2[5] * 0x14;
                uVar5 = (uint)*(ushort *)(iVar4 + 6);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x1c4))
                                    (*(int **)(((int)this) + 8),uVar5,iVar9 + uVar5 * 4,
                                     *(undefined2 *)(iVar4 + 8));
              }
            }
            if ((int)local_8 < 0) break;
            *param_2 = 0;
            *(uint *)(local_1c[6] + 0x28) = *(uint *)(local_1c[6] + 0x28) & 0xfffffffe;
          }
        }
      }
      else if (iVar4 == -1) {
        local_1c = (int *)0x0;
        iVar4 = piVar11[0x15] * 0xac + *(int *)(((int)this) + 0x1c);
        if (*piVar11 == -1) {
          local_8 = FUN_005cdca7(piVar11);
          if ((int)local_8 < 0) break;
          piVar11 = (int *)piVar11[0x19];
        }
        local_c = piVar11;
        if (*(int *)(&DAT_006dc274 + *piVar11 * 0x1c) == 0x6000000) {
          iVar9 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar11[3] * 4);
          iVar10 = *(int *)(iVar9 + 0x38);
          iVar9 = *(int *)(iVar9 + 0x28) + piVar11[5];
          if (iVar10 == 0) {
            iVar9 = *(int *)(iVar9 + *(int *)(((int)this) + 0x2c));
          }
          else {
            iVar9 = *(int *)(*(int *)(iVar10 + 8) +
                            *(int *)(iVar9 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
          }
          iVar10 = iVar4 + 0x98;
          iVar12 = iVar4 + 0x94;
          iVar8 = iVar4 + 0x90;
LAB_005cfbc0:
          local_8 = FUN_005c80ae(*(undefined4 *)(iVar9 * 0x1c + 0x14 + *(int *)(((int)this) + 0x24)),
                                 iVar8,iVar12,iVar10,iVar4 + 0xa8,&local_1c);
          if ((int)local_8 < 0) break;
        }
        else if (*(int *)(&DAT_006dc274 + *piVar11 * 0x1c) == 0x6000001) {
          iVar9 = *(int *)(*(int *)(((int)this) + 0x8c) + piVar11[3] * 4);
          iVar10 = *(int *)(iVar9 + 0x38);
          iVar9 = *(int *)(iVar9 + 0x28) + piVar11[5];
          if (iVar10 == 0) {
            iVar9 = *(int *)(iVar9 + *(int *)(((int)this) + 0x2c));
          }
          else {
            iVar9 = *(int *)(*(int *)(iVar10 + 8) +
                            *(int *)(iVar9 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
          }
          iVar10 = iVar4 + 0xa4;
          iVar12 = iVar4 + 0xa0;
          iVar8 = iVar4 + 0x9c;
          goto LAB_005cfbc0;
        }
        if ((*(int *)(((int)this) + 0x84) == 3) && (*(int *)(((int)this) + 0x34) == piVar11[0x15])) {
          if (local_1c != (int *)0x0) {
            piVar11 = *(int **)(iVar4 + 0x88);
            if (piVar11 != (int *)0x0) {
              if ((*(byte *)(((int)this) + 0x3c) & 2) == 0) {
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf0))(*(int **)(((int)this) + 8));
                if ((int)local_8 < 0) break;
                FUN_005e8fb1(1);
                if (*(int *)(iVar4 + 0x90) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x178))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xa8),
                             *(int *)(iVar4 + 0x90));
                }
                if (*(int *)(iVar4 + 0x94) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x188))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xac),
                             *(int *)(iVar4 + 0x94));
                }
                if (*(int *)(iVar4 + 0x98) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x180))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xb0),
                             *(int *)(iVar4 + 0x98));
                }
                if (*(int *)(iVar4 + 0x9c) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x1b4))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xa8),
                             *(int *)(iVar4 + 0x9c));
                }
                if (*(int *)(iVar4 + 0xa0) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x1c4))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xac),
                             *(int *)(iVar4 + 0xa0));
                }
                if (*(int *)(iVar4 + 0xa4) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x1bc))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xb0),
                             *(int *)(iVar4 + 0xa4));
                }
                FUN_005e8fb1(0);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf4))
                                    (*(int **)(((int)this) + 8),&local_14);
                if (((int)local_8 < 0) ||
                   (local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf0))(*(int **)(((int)this) + 8)),
                   (int)local_8 < 0)) break;
                FUN_005e8fb1(1);
                if (*(int *)(iVar4 + 0x90) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x178))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xa8),
                             *(int *)(iVar4 + 0x90));
                }
                if (*(int *)(iVar4 + 0x94) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x188))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xac),
                             *(int *)(iVar4 + 0x94));
                }
                if (*(int *)(iVar4 + 0x98) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x180))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xb0),
                             *(int *)(iVar4 + 0x98));
                }
                if (*(int *)(iVar4 + 0x9c) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x1b4))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xa8),
                             *(int *)(iVar4 + 0x9c));
                }
                if (*(int *)(iVar4 + 0xa0) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x1c4))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xac),
                             *(int *)(iVar4 + 0xa0));
                }
                if (*(int *)(iVar4 + 0xa4) != 0) {
                  (**(code **)(**(int **)(((int)this) + 8) + 0x1bc))
                            (*(int **)(((int)this) + 8),0,*(undefined4 *)(((int)this) + 0xb0),
                             *(int *)(iVar4 + 0xa4));
                }
                FUN_005e8fb1(0);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf4))
                                    (*(int **)(((int)this) + 8),&local_10);
                if (((((int)local_8 < 0) ||
                     (local_8 = (**(code **)(*local_10 + 0x10))(local_10), (int)local_8 < 0)) ||
                    (local_8 = (**(code **)(**(int **)(iVar4 + 0x88) + 0x14))
                                         (*(int **)(iVar4 + 0x88)), (int)local_8 < 0)) ||
                   ((local_8 = (**(code **)(*local_14 + 0x10))(local_14), (int)local_8 < 0 ||
                    (local_8 = (**(code **)(*local_10 + 0x14))(local_10), (int)local_8 < 0))))
                break;
                piVar11 = *(int **)(iVar4 + 0x88);
                if (piVar11 != (int *)0x0) {
                  (**(code **)(*piVar11 + 8))(piVar11);
                  *(undefined4 *)(iVar4 + 0x88) = 0;
                }
                *(int **)(iVar4 + 0x88) = local_14;
                local_14 = (int *)0x0;
                if (local_10 != (int *)0x0) {
                  (**(code **)(*local_10 + 8))(local_10);
                  local_10 = (int *)0x0;
                }
              }
              else {
                (**(code **)(*piVar11 + 8))(piVar11);
                *(undefined4 *)(iVar4 + 0x88) = 0;
              }
            }
            piVar11 = *(int **)(iVar4 + 0x8c);
            if (piVar11 != (int *)0x0) {
              if ((*(byte *)(((int)this) + 0x3c) & 1) == 0) {
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf0))(*(int **)(((int)this) + 8));
                if ((int)local_8 < 0) break;
                FUN_005e8fb1(1);
                local_8 = 0;
                if (*(int *)(iVar4 + 0xa8) != 0) {
                  do {
                    (**(code **)(**(int **)(((int)this) + 8) + 0x104))(*(int **)(((int)this) + 8),local_8,0)
                    ;
                    uVar5 = 0x1c;
                    do {
                      piVar11 = *(int **)(((int)this) + 8);
                      if (*(int *)(uVar5 + 0x6db9c0) == 0) {
                        (**(code **)(*piVar11 + 0x114))
                                  (piVar11,local_8,*(uint *)(uVar5 + 0x6db9bc) & 0xffffff,0);
                      }
                      else {
                        (**(code **)(*piVar11 + 0x114))
                                  (piVar11,local_8,*(uint *)(uVar5 + 0x6db9bc) & 0xffffff,
                                   *(undefined4 *)(*(int *)(uVar5 + 0x6db9c0) + 4));
                      }
                      uVar5 = uVar5 + 0x1c;
                    } while (uVar5 < 0x16c);
                    local_8 = local_8 + 1;
                  } while (local_8 < *(uint *)(iVar4 + 0xa8));
                }
                FUN_005e8fb1(0);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf4))
                                    (*(int **)(((int)this) + 8),&local_14);
                if (((int)local_8 < 0) ||
                   (local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf0))(*(int **)(((int)this) + 8)),
                   (int)local_8 < 0)) break;
                FUN_005e8fb1(1);
                local_8 = 0;
                if (*(int *)(iVar4 + 0xa8) != 0) {
                  do {
                    (**(code **)(**(int **)(((int)this) + 8) + 0x104))(*(int **)(((int)this) + 8),local_8,0)
                    ;
                    uVar5 = 0x1c;
                    do {
                      piVar11 = *(int **)(((int)this) + 8);
                      if (*(int *)(uVar5 + 0x6db9c0) == 0) {
                        (**(code **)(*piVar11 + 0x114))
                                  (piVar11,local_8,*(uint *)(uVar5 + 0x6db9bc) & 0xffffff,0);
                      }
                      else {
                        (**(code **)(*piVar11 + 0x114))
                                  (piVar11,local_8,*(uint *)(uVar5 + 0x6db9bc) & 0xffffff,
                                   *(undefined4 *)(*(int *)(uVar5 + 0x6db9c0) + 4));
                      }
                      uVar5 = uVar5 + 0x1c;
                    } while (uVar5 < 0x16c);
                    local_8 = local_8 + 1;
                  } while (local_8 < *(uint *)(iVar4 + 0xa8));
                }
                FUN_005e8fb1(0);
                local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0xf4))
                                    (*(int **)(((int)this) + 8),&local_10);
                if (((((int)local_8 < 0) ||
                     (local_8 = (**(code **)(*local_10 + 0x10))(local_10), (int)local_8 < 0)) ||
                    (local_8 = (**(code **)(**(int **)(iVar4 + 0x88) + 0x14))
                                         (*(int **)(iVar4 + 0x88)), (int)local_8 < 0)) ||
                   ((local_8 = (**(code **)(*local_14 + 0x10))(local_14), (int)local_8 < 0 ||
                    (local_8 = (**(code **)(*local_10 + 0x14))(local_10), (int)local_8 < 0))))
                break;
                piVar11 = *(int **)(iVar4 + 0x8c);
                if (piVar11 != (int *)0x0) {
                  (**(code **)(*piVar11 + 8))(piVar11);
                  *(undefined4 *)(iVar4 + 0x8c) = 0;
                }
                *(int **)(iVar4 + 0x8c) = local_14;
                local_14 = (int *)0x0;
                if (local_10 != (int *)0x0) {
                  (**(code **)(*local_10 + 8))(local_10);
                  local_10 = (int *)0x0;
                }
              }
              else {
                (**(code **)(*piVar11 + 8))(piVar11);
                *(undefined4 *)(iVar4 + 0x8c) = 0;
              }
            }
          }
          piVar11 = local_c;
          if ((*(int *)(((int)this) + 0x30) == local_c[0x16]) &&
             ((local_8 = FUN_005cdca7(local_c), (int)local_8 < 0 ||
              (local_8 = FUN_005c97cb(piVar11,0xffffffff), (int)local_8 < 0)))) break;
        }
        else if (local_1c != (int *)0x0) {
          piVar11 = *(int **)(iVar4 + 0x88);
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 8))(piVar11);
            *(int *)(iVar4 + 0x88) = 0;
          }
          piVar11 = *(int **)(iVar4 + 0x8c);
          if (piVar11 != (int *)0x0) {
            (**(code **)(*piVar11 + 8))(piVar11);
            *(int *)(iVar4 + 0x8c) = 0;
          }
        }
      }
      else if (*(int *)(((int)this) + 0x84) == 3) {
        iVar9 = *(int *)(((int)this) + 0x8c);
        piVar6 = *(int **)(*(int *)(iVar9 + iVar4 * 4) + 0x2c);
        if (piVar6 != (int *)0x0) {
          do {
            local_1c = (int *)piVar6[4];
            piVar6 = (int *)local_1c[2];
            iVar4 = piVar6[0x17];
            if (iVar4 == 0) {
              if ((*(int *)(((int)this) + 0x30) == piVar6[0x16]) &&
                 (*(int *)(((int)this) + 0x34) == piVar6[0x15])) {
                iVar4 = *(int *)(iVar9 + piVar6[3] * 4);
                iVar9 = *(int *)(iVar4 + 0x38);
                iVar4 = *(int *)(iVar4 + 0x28) + piVar6[5];
                if (iVar9 == 0) {
                  iVar4 = *(int *)(iVar4 + *(int *)(((int)this) + 0x2c));
                }
                else {
                  iVar4 = *(int *)(*(int *)(iVar9 + 8) +
                                  *(int *)(iVar4 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
                }
                piVar6 = (int *)(iVar4 * 0x1c + *(int *)(((int)this) + 0x24));
                if (((*piVar6 == 0xf) && (piVar6[3] != 0)) && (iVar4 = piVar6[5], iVar4 != 0)) {
                  iVar9 = *(int *)(iVar4 + 0x10);
                  local_8 = FUN_005cdca7(piVar11);
                  if ((int)local_8 < 0) goto LAB_005d0130;
                  uVar5 = (uint)*(ushort *)(iVar9 + iVar4 + 6 + local_1c[5] * 0x14);
LAB_005cf7fe:
                  local_8 = FUN_005c97cb(piVar11,uVar5);
                  if ((int)local_8 < 0) goto LAB_005d0130;
                }
              }
            }
            else if (iVar4 == -1) {
              if ((*(int *)(((int)this) + 0x30) == piVar6[0x16]) &&
                 (*(int *)(((int)this) + 0x34) == piVar6[0x15])) {
                iVar4 = *(int *)(&DAT_006dc274 + *piVar6 * 0x1c);
                if (iVar4 == 0x9000000) {
                  local_8 = FUN_005cdca7(piVar11);
                  if (-1 < (int)local_8) {
                    uVar5 = piVar6[1];
                    goto LAB_005cf7fe;
                  }
                  goto LAB_005d0130;
                }
                if ((iVar4 == 0x6000000) || (iVar4 == 0x6000001)) {
                  iVar4 = *(int *)(iVar9 + piVar6[3] * 4);
                  iVar9 = *(int *)(iVar4 + 0x38);
                  iVar4 = *(int *)(iVar4 + 0x28) + piVar6[5];
                  if (iVar9 == 0) {
                    iVar4 = *(int *)(iVar4 + *(int *)(((int)this) + 0x2c));
                  }
                  else {
                    iVar4 = *(int *)(*(int *)(iVar9 + 8) +
                                    *(int *)(iVar4 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
                  }
                  local_18 = (int *)(iVar4 * 0x1c + *(int *)(((int)this) + 0x24));
                  if (((local_18[3] != 0) && (local_18[5] != 0)) &&
                     ((*(byte *)(local_18[6] + 0x28) & 1) != 0)) {
                    iVar9 = *(int *)(local_18[5] + 0x10) + local_18[5];
                    iVar4 = iVar9 + param_2[5] * 0x14;
                    sVar1 = *(short *)(iVar4 + 4);
                    if (sVar1 == 2) {
                      iVar10 = *(int *)(local_18[6] + 0x44) + 8;
                      local_8 = FUN_005cafde(param_2[1],(uint)*(ushort *)(iVar4 + 6) * 0x10 + iVar10
                                             ,*(undefined2 *)(iVar4 + 8));
                      if ((int)local_8 < 0) goto LAB_005d0130;
                      if (*local_18 == 0x10) {
                        iVar9 = iVar9 + param_2[5] * 0x14;
                        uVar5 = (uint)*(ushort *)(iVar9 + 6);
                        local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x178))
                                            (*(int **)(((int)this) + 8),uVar5,uVar5 * 0x10 + iVar10,
                                             *(undefined2 *)(iVar9 + 8));
                        piVar11 = local_c;
                      }
                      else if (*local_18 == 0xf) {
                        iVar9 = iVar9 + param_2[5] * 0x14;
                        uVar5 = (uint)*(ushort *)(iVar9 + 6);
                        local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x1b4))
                                            (*(int **)(((int)this) + 8),uVar5,uVar5 * 0x10 + iVar10,
                                             *(undefined2 *)(iVar9 + 8));
                        piVar11 = local_c;
                      }
                      else {
LAB_005cfa9b:
                        local_8 = -0x7fffbffb;
                        piVar11 = local_c;
                      }
                    }
                    else if (sVar1 == 1) {
                      piVar11 = *(int **)(local_18[6] + 0x44);
                      iVar10 = *piVar11;
                      local_8 = FUN_005caf72(param_2[1],
                                             (int)piVar11 +
                                             (uint)*(ushort *)(iVar4 + 6) * 0x10 + iVar10,
                                             *(undefined2 *)(iVar4 + 8));
                      if ((int)local_8 < 0) goto LAB_005d0130;
                      if (*local_18 == 0x10) {
                        iVar9 = iVar9 + param_2[5] * 0x14;
                        uVar5 = (uint)*(ushort *)(iVar9 + 6);
                        local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x180))
                                            (*(int **)(((int)this) + 8),uVar5,
                                             (int)piVar11 + uVar5 * 0x10 + iVar10,
                                             *(undefined2 *)(iVar9 + 8));
                        piVar11 = local_c;
                      }
                      else {
                        if (*local_18 != 0xf) goto LAB_005cfa9b;
                        iVar9 = iVar9 + param_2[5] * 0x14;
                        uVar5 = (uint)*(ushort *)(iVar9 + 6);
                        local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x1bc))
                                            (*(int **)(((int)this) + 8),uVar5,
                                             (int)piVar11 + uVar5 * 0x10 + iVar10,
                                             *(undefined2 *)(iVar9 + 8));
                        piVar11 = local_c;
                      }
                    }
                    else if (sVar1 == 0) {
                      iVar10 = *(int *)(*(int *)(local_18[6] + 0x44) + 4) +
                               *(int *)(local_18[6] + 0x44);
                      local_8 = FUN_005cce58(param_2[1],iVar10 + (uint)*(ushort *)(iVar4 + 6) * 4,
                                             *(undefined2 *)(iVar4 + 8));
                      if ((int)local_8 < 0) goto LAB_005d0130;
                      if (*local_18 == 0x10) {
                        iVar9 = iVar9 + param_2[5] * 0x14;
                        uVar5 = (uint)*(ushort *)(iVar9 + 6);
                        local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x188))
                                            (*(int **)(((int)this) + 8),uVar5,iVar10 + uVar5 * 4,
                                             *(undefined2 *)(iVar9 + 8));
                        piVar11 = local_c;
                      }
                      else {
                        if (*local_18 != 0xf) goto LAB_005cfa9b;
                        iVar9 = iVar9 + param_2[5] * 0x14;
                        uVar5 = (uint)*(ushort *)(iVar9 + 6);
                        local_8 = (**(code **)(**(int **)(((int)this) + 8) + 0x1c4))
                                            (*(int **)(((int)this) + 8),uVar5,iVar10 + uVar5 * 4,
                                             *(undefined2 *)(iVar9 + 8));
                        piVar11 = local_c;
                      }
                    }
                    if ((int)local_8 < 0) goto LAB_005d0130;
                    *param_2 = 0;
                    *(uint *)(local_18[6] + 0x28) = *(uint *)(local_18[6] + 0x28) & 0xfffffffe;
                    break;
                  }
                }
              }
            }
            else {
              piVar3 = *(int **)(*(int *)(iVar9 + iVar4 * 4) + 0x2c);
              piVar7 = piVar3;
              if (piVar3 != (int *)0x0) {
                do {
                  piVar7 = (int *)piVar7[4];
                  piVar11 = (int *)piVar7[2];
                  local_18 = piVar7;
                  if (((*(int *)(((int)this) + 0x30) == piVar11[0x16]) &&
                      (*(int *)(((int)this) + 0x34) == piVar11[0x15])) &&
                     (*(int *)(&DAT_006dc274 + *piVar11 * 0x1c) == 0x6000001)) {
                    iVar4 = *(int *)(iVar9 + piVar11[3] * 4);
                    iVar10 = *(int *)(iVar4 + 0x38);
                    iVar4 = *(int *)(iVar4 + 0x28) + piVar11[5];
                    if (iVar10 == 0) {
                      iVar4 = *(int *)(iVar4 + *(int *)(((int)this) + 0x2c));
                    }
                    else {
                      iVar4 = *(int *)(*(int *)(iVar10 + 8) +
                                      *(int *)(iVar4 + *(int *)(*(int *)(((int)this) + 0xc) + 8)) * 4);
                    }
                    iVar4 = iVar4 * 0x1c + *(int *)(((int)this) + 0x24);
                    if ((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(iVar4 + 0x14) != 0)) {
                      iVar4 = *(int *)(iVar4 + 0x14);
                      iVar9 = *(int *)(iVar4 + 0x10);
                      local_8 = FUN_005cdca7(local_c);
                      if (((int)local_8 < 0) ||
                         (local_8 = FUN_005c97cb(local_c,*(undefined2 *)
                                                          (iVar9 + iVar4 + 6 + local_1c[5] * 0x14)),
                         (int)local_8 < 0)) goto LAB_005d0130;
                      break;
                    }
                  }
                } while (piVar7 != piVar3);
                *(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + piVar6[0x17] * 4) + 0x2c) = local_18[3]
                ;
                piVar11 = local_c;
              }
            }
            iVar9 = *(int *)(((int)this) + 0x8c);
            piVar6 = local_1c;
          } while (local_1c != *(int **)(*(int *)(iVar9 + piVar11[0x17] * 4) + 0x2c));
          *(int *)(*(int *)(*(int *)(((int)this) + 0x8c) + piVar11[0x17] * 4) + 0x2c) = local_1c[3];
        }
      }
    } while (param_2 != *(undefined4 **)(iVar2 + 0x2c));
  }
LAB_005d0130:
  if (*(int *)(((int)this) + 0xb4) != 0) {
    __controlfp(*(uint *)(((int)this) + 0xb8),0x30000);
    *(int *)(((int)this) + 0xb4) = 0;
  }
  if (local_14 != (int *)0x0) {
    (**(code **)(*local_14 + 8))(local_14);
    local_14 = (int *)0x0;
  }
  if (local_10 != (int *)0x0) {
    (**(code **)(*local_10 + 8))(local_10);
  }
  return local_8;
}
