/* spd-match: far pct=8.12 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2520 */
#include "ghidra_compat.h"

int __cdecl FUN_005e9081();
int __cdecl FUN_005e9207();
int __cdecl FUN_00672e20();
int __cdecl FUN_00673590();
int __cdecl FUN_00673890();
int __cdecl FUN_00673b70();
extern int _DAT_006a3d38;
extern int _DAT_006ccaf8;
extern void LAB_005e978d(void);

undefined4
FUN_005e9257(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  double dVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  undefined1 local_1814 [2048];
  undefined4 local_1014 [254];
  double dStack_c1c;
  undefined8 local_c14;
  int local_414 [256];
  uint local_14;
  undefined4 *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_c = *param_2;
  local_8 = 0;
  local_10 = param_2 + 1;
  local_14 = *param_1;
  param_1 = param_1 + 1;
  if (local_14 != 0) {
    do {
      uVar10 = *param_1;
      uVar9 = param_1[1];
      param_2 = (undefined4 *)param_1[2];
      param_1 = param_1 + 3;
      FUN_005e9081(uVar9,local_10,param_4,param_5,param_3,param_6,local_1814,&param_1,local_414,
                   param_7,param_8,param_9,param_10,local_c,0xff,0);
      FUN_005e9081(param_2,local_10,param_4,param_5,param_3,param_6,local_1814,&param_1,local_1014,
                   param_7,param_8,param_9,param_10,local_c,0xff,1);
      uVar10 = uVar10 & 0xff000000;
      if (uVar10 < 0x1a000001) {
        if (uVar10 == 0x1a000000) {
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              fVar11 = (float10)FUN_00672e20();
              (&local_c14)[uVar10] = (double)fVar11;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar9);
          }
        }
        else if (uVar10 < 0x15000001) {
          if (uVar10 == 0x15000000) {
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                if (*(double *)local_414[uVar10] < _DAT_006ccaf8) {
                  fVar11 = (float10)0;
                }
                else {
                  fVar11 = (float10)log2((float10)*(double *)local_414[uVar10]);
                  fVar11 = (float10)0.6931471805599453 * fVar11 * (float10)_DAT_006a3d38;
                }
                (&local_c14)[uVar10] = (double)fVar11;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar9);
            }
          }
          else if (uVar10 == 0x10000000) {
            uVar10 = 0;
            if (uVar9 != 0) {
              puVar6 = &local_c14;
              do {
                uVar4 = ((undefined4 *)local_414[uVar10])[1];
                *(undefined4 *)puVar6 = *(undefined4 *)local_414[uVar10];
                *(undefined4 *)((int)puVar6 + 4) = uVar4;
                uVar10 = uVar10 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar10 < uVar9);
            }
          }
          else if (uVar10 == 0x11000000) {
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                piVar7 = local_414 + uVar10;
                uVar10 = uVar10 + 1;
                (&dStack_c1c)[uVar10] = -*(double *)*piVar7;
              } while (uVar10 < uVar9);
            }
          }
          else if (uVar10 == 0x12000000) {
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                piVar7 = local_414 + uVar10;
                uVar10 = uVar10 + 1;
                (&dStack_c1c)[uVar10] = 1.0 / *(double *)*piVar7;
              } while (uVar10 < uVar9);
            }
          }
          else if (uVar10 == 0x13000000) {
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                pdVar3 = (double *)local_414[uVar10];
                fVar11 = (float10)FUN_00673590();
                uVar10 = uVar10 + 1;
                (&dStack_c1c)[uVar10] = (double)((float10)*pdVar3 - fVar11);
              } while (uVar10 < uVar9);
            }
          }
          else {
            if (uVar10 != 0x14000000) goto LAB_005e978d;
            uVar10 = 0;
            if (uVar9 != 0) {
              do {
                fVar11 = (float10)FUN_00673890();
                (&local_c14)[uVar10] = (double)fVar11;
                uVar10 = uVar10 + 1;
              } while (uVar10 < uVar9);
            }
          }
        }
        else if (uVar10 == 0x16000000) {
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              piVar7 = local_414 + uVar10;
              uVar10 = uVar10 + 1;
              (&dStack_c1c)[uVar10] = SQRT(ABS(*(double *)*piVar7));
            } while (uVar10 < uVar9);
          }
        }
        else if (uVar10 == 0x17000000) {
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              piVar7 = local_414 + uVar10;
              uVar10 = uVar10 + 1;
              fVar11 = (float10)fsin((float10)*(double *)*piVar7);
              (&dStack_c1c)[uVar10] = (double)fVar11;
            } while (uVar10 < uVar9);
          }
        }
        else if (uVar10 == 0x18000000) {
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              piVar7 = local_414 + uVar10;
              uVar10 = uVar10 + 1;
              fVar11 = (float10)fcos((float10)*(double *)*piVar7);
              (&dStack_c1c)[uVar10] = (double)fVar11;
            } while (uVar10 < uVar9);
          }
        }
        else {
          if (uVar10 != 0x19000000) goto LAB_005e978d;
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              fVar11 = (float10)FUN_00673b70();
              (&local_c14)[uVar10] = (double)fVar11;
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar9);
          }
        }
      }
      else if (uVar10 < 0x24000001) {
        if (uVar10 == 0x24000000) {
          uVar10 = 0;
          if (param_2 != (undefined4 *)0x0) {
            do {
              iVar8 = uVar10 + (uVar9 >> 1);
              piVar7 = local_414 + uVar10;
              uVar10 = uVar10 + 1;
              (&dStack_c1c)[uVar10] = *(double *)*piVar7 + *(double *)local_414[iVar8];
            } while (uVar10 < param_2);
          }
        }
        else if (uVar10 == 0x1b000000) {
          uVar10 = 0;
          if (uVar9 != 0) {
            do {
              piVar7 = local_414 + uVar10;
              uVar10 = uVar10 + 1;
              fVar11 = (float10)fpatan((float10)*(double *)*piVar7,(float10)1);
              (&dStack_c1c)[uVar10] = (double)fVar11;
            } while (uVar10 < uVar9);
          }
        }
        else if (uVar10 == 0x20000000) {
          uVar10 = 0;
          piVar7 = local_414 + (uVar9 >> 1);
          if (param_2 != (undefined4 *)0x0) {
            iVar8 = (int)local_414 - (int)piVar7;
            do {
              pdVar3 = *(double **)(iVar8 + (int)piVar7);
              if (*(double *)*piVar7 <= *pdVar3) {
                dVar2 = *(double *)*piVar7;
              }
              else {
                dVar2 = *pdVar3;
              }
              (&local_c14)[uVar10] = dVar2;
              uVar10 = uVar10 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar10 < param_2);
          }
        }
        else if (uVar10 == 0x21000000) {
          uVar10 = 0;
          piVar7 = local_414 + (uVar9 >> 1);
          if (param_2 != (undefined4 *)0x0) {
            iVar8 = (int)local_414 - (int)piVar7;
            do {
              pdVar3 = *(double **)(iVar8 + (int)piVar7);
              if (*pdVar3 <= *(double *)*piVar7) {
                dVar2 = *(double *)*piVar7;
              }
              else {
                dVar2 = *pdVar3;
              }
              (&local_c14)[uVar10] = dVar2;
              uVar10 = uVar10 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar10 < param_2);
          }
        }
        else if (uVar10 == 0x22000000) {
          uVar10 = 0;
          piVar7 = local_414 + (uVar9 >> 1);
          if (param_2 != (undefined4 *)0x0) {
            iVar8 = (int)local_414 - (int)piVar7;
            do {
              if (*(double *)*piVar7 <= **(double **)(iVar8 + (int)piVar7)) {
                uVar5 = 0;
              }
              else {
                uVar5 = 0x3ff0000000000000;
              }
              (&local_c14)[uVar10] = uVar5;
              uVar10 = uVar10 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar10 < param_2);
          }
        }
        else {
          if (uVar10 != 0x23000000) goto LAB_005e978d;
          uVar10 = 0;
          piVar7 = local_414 + (uVar9 >> 1);
          if (param_2 != (undefined4 *)0x0) {
            iVar8 = (int)local_414 - (int)piVar7;
            do {
              if (**(double **)(iVar8 + (int)piVar7) < *(double *)*piVar7) {
                uVar5 = 0;
              }
              else {
                uVar5 = 0x3ff0000000000000;
              }
              (&local_c14)[uVar10] = uVar5;
              uVar10 = uVar10 + 1;
              piVar7 = piVar7 + 1;
            } while (uVar10 < param_2);
          }
        }
      }
      else if (uVar10 == 0x25000000) {
        uVar10 = 0;
        if (param_2 != (undefined4 *)0x0) {
          do {
            iVar8 = uVar10 + (uVar9 >> 1);
            piVar7 = local_414 + uVar10;
            uVar10 = uVar10 + 1;
            (&dStack_c1c)[uVar10] = *(double *)*piVar7 * *(double *)local_414[iVar8];
          } while (uVar10 < param_2);
        }
      }
      else if (uVar10 == 0x26000000) {
        uVar10 = 0;
        piVar7 = local_414 + (uVar9 >> 1);
        if (param_2 != (undefined4 *)0x0) {
          iVar8 = (int)local_414 - (int)piVar7;
          do {
            uVar10 = uVar10 + 1;
            fVar11 = (float10)fpatan((float10)**(double **)(iVar8 + (int)piVar7),
                                     (float10)*(double *)*piVar7);
            piVar7 = piVar7 + 1;
            (&dStack_c1c)[uVar10] = (double)fVar11;
          } while (uVar10 < param_2);
        }
      }
      else if (uVar10 == 0x30000000) {
        uVar9 = uVar9 >> 1;
        *(double *)&local_c14 = 0.0;
        uVar10 = 0;
        if (uVar9 != 0) {
          do {
            iVar8 = uVar10 + uVar9;
            piVar7 = local_414 + uVar10;
            uVar10 = uVar10 + 1;
            *(double *)&local_c14 = *(double *)*piVar7 * *(double *)local_414[iVar8] + *(double *)&local_c14;
          } while (uVar10 < uVar9);
        }
      }
      else if (uVar10 == 0x35000000) {
        FUN_005e9207(uVar9,param_2,&local_c14);
      }
      else {
LAB_005e978d:
        puVar6 = &local_c14;
        for (iVar8 = (int)param_2 * 2; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(undefined4 *)puVar6 = 0;
          puVar6 = (undefined8 *)((int)puVar6 + 4);
        }
      }
      uVar10 = 0;
      if (param_2 != (undefined4 *)0x0) {
        do {
          puVar1 = local_1014 + uVar10;
          puVar6 = &local_c14 + uVar10;
          uVar10 = uVar10 + 1;
          *(undefined8 *)*puVar1 = *puVar6;
        } while (uVar10 < param_2);
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_14);
  }
  return 0;
}
