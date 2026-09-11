/* spd-match: far pct=4.45 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_8r/buckets/r_04/baseline */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_005b14b6();
int __cdecl FUN_005c80ae();
int __cdecl FUN_005ca273();
int __cdecl FUN_005cd207();
int __cdecl FUN_005cd327();
int __cdecl FUN_005cd5bf();
int __cdecl FUN_005cd7bf();
int __cdecl FUN_005cd973();
int __cdecl FUN_005d0177();
int __cdecl FUN_005d04e2();
int __cdecl FUN_005d1593();
int __cdecl FUN_005d241e();
int __cdecl FUN_005d2609();
extern unsigned char *DAT_006dc264;
extern unsigned char *DAT_006dc274;
extern void LAB_005c8f5e(void);
extern void LAB_005cd2f5(void);
extern void LAB_005d5966(void);
extern void LAB_005d62ee(void);
extern void LAB_005d63aa(void);

int  FUN_005d5932(int param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar1 = param_5;
  piVar9 = param_4;
  if ((param_2 == (int *)0x0) || (param_4 == (int *)0x0)) {
    return -0x7789f794;
  }
  puVar2 = _malloc(0x1c);
  *(undefined4 **)(param_1 + 0x90) = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
LAB_005d5966:
    iVar3 = -0x7ff8fff2;
  }
  else {
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(int **)(param_1 + 0xc) = param_3;
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 4))(param_3);
    }
    *(int **)(param_1 + 8) = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    *(int **)(param_1 + 0x38) = param_4;
    (**(code **)(*param_4 + 4))(param_4);
    param_2 = (int *)*param_5;
    uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
    if ((int)param_2 + 1U <= uVar4) {
      param_2 = (int *)*param_5;
      iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
      param_3 = *(int **)(iVar3 + (int)param_2 * 4);
    }
    *param_5 = (int)param_2 + 1;
    uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
    if (*param_5 + 1 <= uVar4) {
      iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar3 + *param_5 * 4);
    }
    *param_5 = *param_5 + 1;
    if ((param_3 == (int *)0xffffffff) &&
       (uVar4 = (**(code **)(*param_4 + 0x10))(param_4), *param_5 <= uVar4)) {
      if (*(void **)(param_1 + 0x2c) != (void *)0x0) {
        _free(*(void **)(param_1 + 0x2c));
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      pvVar5 = _malloc(*(size_t *)(param_1 + 0x28));
      *(void **)(param_1 + 0x2c) = pvVar5;
      if (pvVar5 == (void *)0x0) goto LAB_005d5966;
      if (*(int *)(param_1 + 0x28) != 0) {
        uVar4 = *(uint *)(param_1 + 0x28);
        uVar6 = (**(code **)(*param_4 + 0x10))(param_4);
        if ((uint)((uVar4 & 3) != 0) + (uVar4 >> 2) + *param_5 <= uVar6) {
          iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
          puVar2 = (undefined4 *)(iVar3 + *param_5 * 4);
          puVar11 = *(undefined4 **)(param_1 + 0x2c);
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar11 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar2;
            puVar2 = (undefined4 *)((int)puVar2 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
        }
        *param_5 = *param_5 +
                   (uint)((*(uint *)(param_1 + 0x28) & 3) != 0) + (*(uint *)(param_1 + 0x28) >> 2);
      }
      uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
      if (*param_5 + 1 <= uVar4) {
        iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar3 + *param_5 * 4);
      }
      *param_5 = *param_5 + 1;
      uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
      if (*param_5 + 1 <= uVar4) {
        iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + *param_5 * 4);
      }
      *param_5 = *param_5 + 1;
      uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
      if (*param_5 + 1 <= uVar4) {
        iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar3 + *param_5 * 4);
      }
      *param_5 = *param_5 + 1;
      uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
      if (((*param_5 <= uVar4) && (3 < *(uint *)(param_1 + 0x28))) &&
         (**(int **)(param_1 + 0x2c) == 0)) {
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 != 0) {
          piVar7 = _malloc(iVar3 * 0x44 + 4);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = iVar3;
            piVar7 = piVar7 + 1;
            FUN_004010a0(piVar7,0x44,iVar3,FUN_005d0177);
          }
          *(int **)(param_1 + 0x14) = piVar7;
          if (piVar7 == (int *)0x0) goto LAB_005d5966;
        }
        iVar3 = *(int *)(param_1 + 0x18);
        if (iVar3 != 0) {
          piVar7 = _malloc(iVar3 * 0xac + 4);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = iVar3;
            piVar7 = piVar7 + 1;
            FUN_004010a0(piVar7,0xac,iVar3,&LAB_005cd2f5);
          }
          *(int **)(param_1 + 0x1c) = piVar7;
          if (piVar7 == (int *)0x0) goto LAB_005d5966;
          iVar3 = *(int *)(param_1 + 0x20);
          if (iVar3 != 0) {
            piVar7 = _malloc(iVar3 * 0x1c + 4);
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              *piVar7 = iVar3;
              piVar7 = piVar7 + 1;
              FUN_004010a0(piVar7,0x1c,iVar3,&LAB_005c8f5e);
            }
            *(int **)(param_1 + 0x24) = piVar7;
            if (piVar7 == (int *)0x0) goto LAB_005d5966;
            param_3 = (int *)0x0;
            if (*(int *)(param_1 + 0x20) != 0) {
              param_2 = (int *)0x0;
              do {
                pvVar5 = _malloc(0xac);
                if (pvVar5 == (void *)0x0) {
                  iVar3 = 0;
                }
                else {
                  iVar3 = FUN_005cd207();
                }
                *(int *)((int)param_2 + 0x18 + *(int *)(param_1 + 0x24)) = iVar3;
                if (iVar3 == 0) goto LAB_005d5966;
                param_3 = (int *)((int)param_3 + 1);
                param_2 = (int *)((int)param_2 + 0x1c);
              } while (param_3 < *(int **)(param_1 + 0x20));
            }
          }
          uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
          if (*param_5 <= uVar4) {
            *(undefined4 *)(param_1 + 0x88) = 1;
            param_2 = (int *)0x0;
            if (*(int *)(param_1 + 0x10) != 0) {
              param_3 = (int *)0x0;
              do {
                iVar3 = FUN_005d04e2(*(int *)(param_1 + 0x14) + (int)param_3,param_4,param_5);
                if (iVar3 < 0) {
                  return iVar3;
                }
                param_2 = (int *)((int)param_2 + 1);
                param_3 = param_3 + 0x11;
              } while (param_2 < *(uint *)(param_1 + 0x10));
            }
            param_2 = (int *)0x0;
            if (*(int *)(param_1 + 0x18) != 0) {
              param_3 = (int *)0x0;
              do {
                *(int **)((int)param_3 + *(int *)(param_1 + 0x1c) + 4) = param_2;
                iVar3 = FUN_005d1593(*(int *)(param_1 + 0x1c) + (int)param_3,param_4,param_5);
                if (iVar3 < 0) {
                  return iVar3;
                }
                param_2 = (int *)((int)param_2 + 1);
                param_3 = param_3 + 0x2b;
              } while (param_2 < *(uint *)(param_1 + 0x18));
            }
            piVar7 = _malloc(*(int *)(param_1 + 0x88) << 2);
            *(int **)(param_1 + 0x8c) = piVar7;
            if (piVar7 == (int *)0x0) goto LAB_005d5966;
            *piVar7 = param_1 + 0x40;
            uVar4 = 1;
            param_2 = (int *)0x0;
            if (*(int *)(param_1 + 0x10) != 0) {
              param_3 = (int *)0x0;
              do {
                if (*(uint *)(param_1 + 0x88) <= uVar4) break;
                iVar12 = *(int *)(param_1 + 0x14) + (int)param_3;
                *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4) = iVar12;
                *(uint *)(iVar12 + 4) = uVar4;
                iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4);
                if (*(int *)(iVar3 + 0x38) == 0) {
                  local_c = *(int *)(param_1 + 0x2c);
                }
                else {
                  local_c = *(int *)(*(int *)(param_1 + 0xc) + 8);
                }
                local_c = *(int *)(iVar3 + 0x24) + *(int *)(iVar12 + 8) + local_c;
                iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar12 + 4) * 4);
                if (*(int *)(iVar3 + 0x38) == 0) {
                  local_8 = *(int *)(param_1 + 0x2c);
                }
                else {
                  local_8 = *(int *)(*(int *)(param_1 + 0xc) + 8);
                }
                local_8 = *(int *)(iVar3 + 0x28) + *(int *)(iVar12 + 0xc) + local_8;
                local_14 = *(int *)(iVar12 + 0x24);
                local_10 = *(int *)(iVar12 + 0x28);
                iVar3 = FUN_005cd973(&local_c,&local_8,uVar4);
                if (iVar3 < 0) {
                  return iVar3;
                }
                if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar12 + 4) * 4) + 0x38)
                    == 0) {
                  uVar8 = *(undefined4 *)(param_1 + 0x2c);
                }
                else {
                  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
                }
                uVar8 = FUN_005ca273(uVar8,&local_14,&local_10);
                *(undefined4 *)(iVar12 + 0x1c) = uVar8;
                iVar3 = *(int *)((int)param_3 + *(int *)(param_1 + 0x14) + 0x34);
                while ((uVar4 = uVar4 + 1, iVar3 != 0 && (uVar4 < *(uint *)(param_1 + 0x88)))) {
                  *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4) = iVar3;
                  *(uint *)(iVar3 + 4) = uVar4;
                  iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4);
                  if (*(int *)(iVar12 + 0x38) == 0) {
                    local_c = *(int *)(param_1 + 0x2c);
                  }
                  else {
                    local_c = *(int *)(*(int *)(param_1 + 0xc) + 8);
                  }
                  local_c = *(int *)(iVar12 + 0x24) + *(int *)(iVar3 + 8) + local_c;
                  iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
                  if (*(int *)(iVar12 + 0x38) == 0) {
                    local_8 = *(int *)(param_1 + 0x2c);
                  }
                  else {
                    local_8 = *(int *)(*(int *)(param_1 + 0xc) + 8);
                  }
                  local_8 = *(int *)(iVar12 + 0x28) + *(int *)(iVar3 + 0xc) + local_8;
                  local_14 = *(int *)(iVar3 + 0x24);
                  local_10 = *(int *)(iVar3 + 0x28);
                  iVar12 = FUN_005cd973(&local_c,&local_8,uVar4);
                  if (iVar12 < 0) {
                    return iVar12;
                  }
                  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4) + 0x38)
                      == 0) {
                    uVar8 = *(undefined4 *)(param_1 + 0x2c);
                  }
                  else {
                    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
                  }
                  uVar8 = FUN_005ca273(uVar8,&local_14,&local_10);
                  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
                  iVar3 = *(int *)(iVar3 + 0x34);
                }
                param_2 = (int *)((int)param_2 + 1);
                param_3 = param_3 + 0x11;
              } while (param_2 < *(uint *)(param_1 + 0x10));
            }
            param_2 = (int *)0x0;
            if (*(int *)(param_1 + 0x18) != 0) {
              local_20 = 0;
              do {
                param_3 = (int *)(*(int *)(param_1 + 0x1c) + local_20);
                iVar3 = param_3[10];
                for (; (iVar3 != 0 && (uVar4 < *(uint *)(param_1 + 0x88))); uVar4 = uVar4 + 1) {
                  *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4) = iVar3;
                  *(uint *)(iVar3 + 4) = uVar4;
                  iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4);
                  if (*(int *)(iVar12 + 0x38) == 0) {
                    local_10 = *(int *)(param_1 + 0x2c);
                  }
                  else {
                    local_10 = *(int *)(*(int *)(param_1 + 0xc) + 8);
                  }
                  local_10 = *(int *)(iVar12 + 0x24) + *(int *)(iVar3 + 8) + local_10;
                  iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
                  if (*(int *)(iVar12 + 0x38) == 0) {
                    local_14 = *(int *)(param_1 + 0x2c);
                  }
                  else {
                    local_14 = *(int *)(*(int *)(param_1 + 0xc) + 8);
                  }
                  local_14 = *(int *)(iVar12 + 0x28) + *(int *)(iVar3 + 0xc) + local_14;
                  local_8 = *(int *)(iVar3 + 0x24);
                  local_c = *(int *)(iVar3 + 0x28);
                  iVar12 = FUN_005cd973(&local_10,&local_14,uVar4);
                  if (iVar12 < 0) {
                    return iVar12;
                  }
                  if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4) + 0x38)
                      == 0) {
                    uVar8 = *(undefined4 *)(param_1 + 0x2c);
                  }
                  else {
                    uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
                  }
                  uVar8 = FUN_005ca273(uVar8,&local_8,&local_c);
                  *(undefined4 *)(iVar3 + 0x1c) = uVar8;
                  iVar3 = *(int *)(iVar3 + 0x34);
                }
                local_1c = 0;
                if (param_3[0xb] != 0) {
                  local_18 = 0;
                  do {
                    iVar3 = *(int *)(local_18 + 0x30 + param_3[0xc]);
                    for (; (iVar3 != 0 && (uVar4 < *(uint *)(param_1 + 0x88))); uVar4 = uVar4 + 1) {
                      *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4) = iVar3;
                      *(uint *)(iVar3 + 4) = uVar4;
                      iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + uVar4 * 4);
                      if (*(int *)(iVar12 + 0x38) == 0) {
                        local_10 = *(int *)(param_1 + 0x2c);
                      }
                      else {
                        local_10 = *(int *)(*(int *)(param_1 + 0xc) + 8);
                      }
                      local_10 = *(int *)(iVar12 + 0x24) + *(int *)(iVar3 + 8) + local_10;
                      iVar12 = *(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4);
                      if (*(int *)(iVar12 + 0x38) == 0) {
                        local_14 = *(int *)(param_1 + 0x2c);
                      }
                      else {
                        local_14 = *(int *)(*(int *)(param_1 + 0xc) + 8);
                      }
                      local_14 = *(int *)(iVar12 + 0x28) + *(int *)(iVar3 + 0xc) + local_14;
                      local_8 = *(int *)(iVar3 + 0x24);
                      local_c = *(int *)(iVar3 + 0x28);
                      iVar12 = FUN_005cd973(&local_10,&local_14,uVar4);
                      if (iVar12 < 0) {
                        return iVar12;
                      }
                      if (*(int *)(*(int *)(*(int *)(param_1 + 0x8c) + *(int *)(iVar3 + 4) * 4) +
                                  0x38) == 0) {
                        uVar8 = *(undefined4 *)(param_1 + 0x2c);
                      }
                      else {
                        uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 8);
                      }
                      uVar8 = FUN_005ca273(uVar8,&local_8,&local_c);
                      *(undefined4 *)(iVar3 + 0x1c) = uVar8;
                      iVar3 = *(int *)(iVar3 + 0x34);
                    }
                    local_1c = local_1c + 1;
                    local_18 = local_18 + 0x3c;
                  } while (local_1c < (uint)param_3[0xb]);
                }
                param_2 = (int *)((int)param_2 + 1);
                local_20 = local_20 + 0xac;
              } while (param_2 < *(uint *)(param_1 + 0x18));
            }
            if (uVar4 == *(uint *)(param_1 + 0x88)) {
              param_2 = (int *)*param_5;
              uVar4 = (**(code **)(*param_4 + 0x10))(param_4);
              if ((int)param_2 + 1U <= uVar4) {
                param_2 = (int *)*param_5;
                iVar3 = (**(code **)(*param_4 + 0xc))(param_4);
                param_4 = *(int **)(iVar3 + (int)param_2 * 4);
              }
              *param_5 = (int)param_2 + 1U;
              uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
              uVar6 = (int)param_2 + 2;
              param_2 = (int *)((int)param_2 + 1U);
              if (uVar6 <= uVar4) {
                param_2 = (int *)*param_5;
                iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9);
                local_1c = *(uint *)(iVar3 + (int)param_2 * 4);
              }
              *param_5 = (int)param_2 + 1;
              uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
              if (*param_5 <= uVar4) {
                iVar3 = 0;
                param_5 = (uint *)0x0;
                if (param_4 != (int *)0x0) {
                  do {
                    iVar3 = FUN_005cd327(piVar9,puVar1);
                    if (iVar3 < 0) {
                      return iVar3;
                    }
                    param_5 = (uint *)((int)param_5 + 1);
                  } while (param_5 < param_4);
                }
                if ((*(int *)(param_1 + 0xc) != 0) &&
                   (param_2 = (int *)0x0, *(int *)(param_1 + 0x10) != 0)) {
                  param_5 = (uint *)0x0;
                  do {
                    param_4 = (int *)(*(int *)(param_1 + 0x14) + (int)param_5);
                    if (((*(uint *)(*(int *)(*(int *)(param_1 + 0x8c) + param_4[1] * 4) + 0x20) & 1)
                         != 0) && (iVar3 = FUN_005b14b6(param_1,param_4), iVar3 < 0)) {
                      return iVar3;
                    }
                    param_2 = (int *)((int)param_2 + 1);
                    param_5 = (uint *)((int)param_5 + 0x44);
                  } while (param_2 < *(uint *)(param_1 + 0x10));
                }
                param_5 = (uint *)0x0;
                if (local_1c != 0) {
                  do {
                    param_2 = (int *)*puVar1;
                    uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
                    if ((int)param_2 + 1U <= uVar4) {
                      param_2 = (int *)*puVar1;
                      iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9);
                      local_18 = *(uint *)(iVar3 + (int)param_2 * 4);
                    }
                    *puVar1 = (int)param_2 + 1U;
                    uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
                    uVar6 = (int)param_2 + 2;
                    param_2 = (int *)((int)param_2 + 1U);
                    if (uVar6 <= uVar4) {
                      param_2 = (int *)*puVar1;
                      iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9);
                      param_3 = *(int **)(iVar3 + (int)param_2 * 4);
                    }
                    *puVar1 = (int)param_2 + 1U;
                    uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
                    uVar6 = (int)param_2 + 2;
                    param_2 = (int *)((int)param_2 + 1U);
                    if (uVar6 <= uVar4) {
                      param_2 = (int *)*puVar1;
                      iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9);
                      local_20 = *(uint *)(iVar3 + (int)param_2 * 4);
                    }
                    *puVar1 = (int)param_2 + 1U;
                    uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
                    uVar6 = (int)param_2 + 2;
                    param_2 = (int *)((int)param_2 + 1U);
                    if (uVar6 <= uVar4) {
                      param_2 = (int *)*puVar1;
                      iVar3 = (**(code **)(*piVar9 + 0xc))(piVar9);
                      param_4 = *(int **)(iVar3 + (int)param_2 * 4);
                    }
                    *puVar1 = (int)param_2 + 1;
                    uVar4 = (**(code **)(*piVar9 + 0x10))(piVar9);
                    if (uVar4 < *puVar1) goto LAB_005d63aa;
                    if (local_18 == 0xffffffff) {
                      if ((*(int **)(param_1 + 0x10) <= param_3) ||
                         (iVar3 = *(int *)(param_1 + 0x14) + (int)param_3 * 0x44,
                         *(uint *)(iVar3 + 0x3c) <= local_20)) goto LAB_005d63aa;
                      piVar7 = (int *)(local_20 * 0xac + *(int *)(iVar3 + 0x40));
                    }
                    else {
                      if (((*(uint *)(param_1 + 0x18) <= local_18) ||
                          (iVar3 = local_18 * 0xac + *(int *)(param_1 + 0x1c),
                          *(int **)(iVar3 + 0x2c) <= param_3)) ||
                         (iVar3 = (int)param_3 * 0x3c + *(int *)(iVar3 + 0x30),
                         *(uint *)(iVar3 + 0x24) <= local_20)) goto LAB_005d63aa;
                      piVar7 = (int *)(local_20 * 0xac + *(int *)(iVar3 + 0x28));
                    }
                    piVar7[10] = piVar7[10] | 1;
                    iVar3 = *(int *)(&DAT_006dc264 + *piVar7 * 0x1c);
                    if ((iVar3 == 5) || (iVar3 == 10)) {
                      if (param_4 == (int *)0x1) {
LAB_005d62ee:
                        iVar3 = FUN_005d241e(piVar7,piVar9,puVar1);
                      }
                      else {
                        iVar3 = -0x7fffbffb;
                      }
                    }
                    else if ((iVar3 < 0xf) || (0x10 < iVar3)) {
                      iVar3 = FUN_005cd7bf(piVar7,piVar9,puVar1);
                    }
                    else if (param_4 == (int *)0x0) {
                      iVar3 = FUN_005cd5bf(piVar7,piVar9,puVar1);
                    }
                    else {
                      if (param_4 == (int *)0x1) goto LAB_005d62ee;
                      iVar3 = FUN_005d2609(piVar7,piVar9,puVar1);
                    }
                    if (iVar3 < 0) {
                      return iVar3;
                    }
                    param_5 = (uint *)((int)param_5 + 1);
                  } while (param_5 < local_1c);
                }
                *(undefined4 *)(param_1 + 0x9c) = 0;
                *(undefined4 *)(param_1 + 0xa0) = 0;
                *(undefined4 *)(param_1 + 0xa4) = 0;
                local_20 = 0;
                if (*(int *)(param_1 + 0x18) != 0) {
                  param_3 = (int *)0x0;
                  do {
                    iVar12 = *(int *)(param_1 + 0x1c) + (int)param_3;
                    param_2 = (int *)0x0;
                    *(undefined4 *)(iVar12 + 0x90) = 0;
                    *(undefined4 *)(iVar12 + 0x94) = 0;
                    *(undefined4 *)(iVar12 + 0x98) = 0;
                    *(undefined4 *)(iVar12 + 0x9c) = 0;
                    *(undefined4 *)(iVar12 + 0xa0) = 0;
                    *(undefined4 *)(iVar12 + 0xa4) = 0;
                    *(undefined4 *)(iVar12 + 0xa8) = 0;
                    if (*(int *)(iVar12 + 0x2c) != 0) {
                      local_1c = 0;
                      do {
                        param_4 = (int *)0x0;
                        if (*(int *)(*(int *)(iVar12 + 0x30) + 0x24 + local_1c) != 0) {
                          param_5 = (uint *)0x0;
                          do {
                            piVar9 = (int *)(*(int *)(*(int *)(iVar12 + 0x30) + 0x28 + local_1c) +
                                            (int)param_5);
                            iVar14 = *(int *)(&DAT_006dc274 + *piVar9 * 0x1c);
                            if ((iVar14 == 0x6000000) || (iVar14 == 0x6000001)) {
                              iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + piVar9[3] * 4);
                              iVar13 = *(int *)(iVar3 + 0x38);
                              iVar3 = *(int *)(iVar3 + 0x28) + piVar9[5];
                              if (iVar13 == 0) {
                                iVar3 = *(int *)(iVar3 + *(int *)(param_1 + 0x2c));
                              }
                              else {
                                iVar3 = *(int *)(*(int *)(iVar13 + 8) +
                                                *(int *)(iVar3 + *(int *)(*(int *)(param_1 + 0xc) +
                                                                         8)) * 4);
                              }
                              if (iVar14 == 0x6000000) {
                                iVar14 = iVar12 + 0x98;
                                iVar13 = iVar12 + 0x94;
                                iVar10 = iVar12 + 0x90;
                              }
                              else {
                                iVar14 = iVar12 + 0xa4;
                                iVar13 = iVar12 + 0xa0;
                                iVar10 = iVar12 + 0x9c;
                              }
                              iVar3 = FUN_005c80ae(*(undefined4 *)
                                                    (iVar3 * 0x1c + 0x14 + *(int *)(param_1 + 0x24))
                                                   ,iVar10,iVar13,iVar14,iVar12 + 0xa8,0);
                              if (iVar3 < 0) {
                                return iVar3;
                              }
                            }
                            param_4 = (int *)((int)param_4 + 1);
                            param_5 = (uint *)((int)param_5 + 0xac);
                          } while (param_4 < *(uint *)(*(int *)(iVar12 + 0x30) + 0x24 + local_1c));
                        }
                        param_2 = (int *)((int)param_2 + 1);
                        local_1c = local_1c + 0x3c;
                      } while (param_2 < *(uint *)(iVar12 + 0x2c));
                    }
                    local_20 = local_20 + 1;
                    param_3 = (int *)((int)param_3 + 0xac);
                  } while (local_20 < *(uint *)(param_1 + 0x18));
                }
                *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
                *(undefined4 *)(param_1 + 0x34) = 0;
                *(undefined4 *)(param_1 + 0x84) = 0;
                return iVar3;
              }
            }
          }
        }
      }
    }
LAB_005d63aa:
    iVar3 = -0x7fffbffb;
  }
  return iVar3;
}
