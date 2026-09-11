/* spd-match: far pct=4.69 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p1/attempt2_tc_c */
#include "ghidra_compat.h"

int __cdecl FUN_005f7e20();
int __cdecl FUN_005fbec8();
extern void LAB_00613698(void);
extern void LAB_00614202(void);
extern void LAB_00614209(void);
extern void LAB_0061420f(void);
extern void LAB_00614221(void);
extern void LAB_0061422b(void);
extern void LAB_00614236(void);
extern void LAB_0061427f(void);

undefined4 
FUN_00613d78(int param_1,int param_2,uint param_3,uint param_4,uint param_5,char param_6)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *_Memory;
  long lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *local_1c;
  uint local_18;
  uint local_14;
  int *local_10;
  undefined4 *local_c;
  
  uVar8 = 0;
  local_1c = (int *)0x0;
  local_c = (undefined4 *)0x0;
  if (*(int *)(param_1 + 4) != 0) {
    do {
      iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar8 * 4);
      uVar12 = *(uint *)(iVar5 + 4);
      *(undefined4 *)(iVar5 + 0x10) = 0;
      if ((uVar12 & 0x200) == 0) {
        uVar11 = 0;
        *(undefined4 *)(iVar5 + 8) = 0;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            puVar1 = *(uint **)(*(int *)(param_1 + 0x14) + uVar11 * 4);
            if ((*puVar1 == uVar8) && (uVar4 = puVar1[2] + 1, *(uint *)(iVar5 + 8) < uVar4)) {
              *(uint *)(iVar5 + 8) = uVar4;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < *(uint *)(param_1 + 8));
        }
        if ((char)uVar12 < '\0') {
          *(uint *)(iVar5 + 4) = uVar12 & 0xffffffdf;
        }
        uVar12 = *(uint *)(iVar5 + 4);
        if (((uVar12 & 8) != 0) && ((uVar12 & 0x500) == 0)) {
          *(uint *)(iVar5 + 4) = uVar12 & 0xffffffdf;
        }
        uVar12 = *(uint *)(iVar5 + 4);
        if ((((uVar12 & 0x40) != 0) && ((uVar12 & 0x400) == 0)) && (*(int *)(iVar5 + 8) == 1)) {
          *(uint *)(iVar5 + 4) = uVar12 & 0xffffffdf;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 4));
  }
  _Memory = _malloc(param_3 << 3);
  if (_Memory != (undefined4 *)0x0) {
    local_10 = (int *)0x0;
    puVar13 = _Memory;
    for (iVar5 = (param_3 & 0x1fffffff) << 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar13 = 0;
      puVar13 = (undefined4 *)((int)puVar13 + 1);
    }
    if (*(int *)(param_1 + 4) != 0) {
      do {
        piVar6 = *(int **)(*(int *)(param_1 + 0x10) + (int)local_10 * 4);
        uVar8 = piVar6[1];
        if ((((param_4 & uVar8) != 0) && ((param_5 & uVar8) == 0)) &&
           (((uVar8 & 0x20) != 0 && ((uVar8 & 0x400) != 0)))) {
          pcVar9 = (char *)*piVar6;
          piVar6[4] = -1;
          if (((pcVar9 != (char *)0x0) && (iVar5 = _tolower((int)*pcVar9), param_6 == iVar5)) &&
             (iVar5 = _isdigit((int)pcVar9[1]), iVar5 != 0)) {
            pcVar9 = pcVar9 + 2;
            while (iVar5 = _isdigit((int)*pcVar9), iVar5 != 0) {
              pcVar9 = pcVar9 + 1;
            }
            if (*pcVar9 == '\0') {
              lVar3 = _atol((char *)(*piVar6 + 1));
              piVar6[4] = lVar3;
            }
          }
          if (param_3 <= (uint)piVar6[4]) {
            FUN_005fbec8(param_1,0,0x119d,"invalid register semantic \'%s\'",*piVar6);
            goto LAB_00614236;
          }
          local_14 = 0;
          if (piVar6[2] != 0) {
            do {
              uVar8 = piVar6[4] + local_14;
              if (param_3 <= uVar8) goto LAB_00614209;
              puVar1 = _Memory + uVar8 * 2;
              if (*puVar1 != 0) {
                FUN_005fbec8(param_1,0,0x1194,
                             "overlapping register semantics not yet implemented \'%c%u\'",
                             (int)param_6,uVar8);
              }
              *puVar1 = (uint)local_10;
              puVar1[1] = local_14;
              local_14 = local_14 + 1;
            } while (local_14 < (uint)piVar6[2]);
          }
        }
        local_10 = (int *)((int)local_10 + 1);
      } while (local_10 < *(uint *)(param_1 + 4));
    }
    iVar5 = *(int *)(param_1 + 4);
    iVar7 = 0;
    if (iVar5 != 0) {
      piVar6 = *(int **)(param_1 + 0x10);
      do {
        uVar8 = *(uint *)(*piVar6 + 4);
        if (((((param_4 & uVar8) != 0) && ((param_5 & uVar8) == 0)) && ((uVar8 & 0x20) != 0)) &&
           ((uVar8 & 0x400) == 0)) {
          iVar7 = iVar7 + 1;
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_1c = _malloc(iVar7 << 2);
    if (local_1c != (int *)0x0) {
      uVar8 = 0;
      uVar12 = 0;
      local_18 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        do {
          uVar11 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + uVar8 * 4) + 4);
          if ((((param_4 & uVar11) != 0) && ((param_5 & uVar11) == 0)) &&
             (((uVar11 & 0x20) != 0 && ((uVar11 & 0x400) == 0)))) {
            local_1c[uVar12] = uVar8;
            uVar12 = uVar12 + 1;
          }
          uVar8 = uVar8 + 1;
          local_18 = uVar12;
        } while (uVar8 < *(uint *)(param_1 + 4));
      }
      FUN_005f7e20(&LAB_00613698,local_1c,local_18,param_1);
      local_14 = 0;
      local_10 = local_1c;
      if (local_18 != 0) {
        do {
          iVar5 = *(int *)(*(int *)(param_1 + 0x10) + *local_10 * 4);
          uVar8 = 0;
          if (param_3 != 0) {
            do {
              for (; (uVar12 = uVar8, uVar8 < param_3 && (_Memory[uVar8 * 2] != 0));
                  uVar8 = uVar8 + 1) {
              }
              for (; (uVar12 < param_3 && (_Memory[uVar12 * 2] == 0)); uVar12 = uVar12 + 1) {
              }
            } while ((uVar12 - uVar8 < *(uint *)(iVar5 + 8)) && (uVar8 = uVar12, uVar12 < param_3));
          }
          if (param_3 < *(int *)(iVar5 + 8) + uVar8) {
            if (param_6 == 'v') goto LAB_0061420f;
            if (param_6 == 'c') goto LAB_00614221;
            if (param_6 != 's') goto LAB_00614236;
            pcVar9 = "maximum sampler register index exceeded";
            uVar10 = 0x11c2;
            goto LAB_0061422b;
          }
          uVar12 = 0;
          if (*(int *)(iVar5 + 8) != 0) {
            piVar6 = _Memory + uVar8 * 2;
            do {
              iVar7 = *local_10;
              piVar6[1] = uVar12;
              *piVar6 = iVar7;
              uVar12 = uVar12 + 1;
              piVar6 = piVar6 + 2;
            } while (uVar12 < *(uint *)(iVar5 + 8));
          }
          local_14 = local_14 + 1;
          local_10 = local_10 + 1;
          *(uint *)(iVar5 + 0x10) = uVar8;
        } while (local_14 < local_18);
      }
      uVar8 = 0;
      if (*(int *)(param_1 + 8) != 0) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4);
          piVar6 = piVar2 + 2;
          *piVar6 = *piVar6 + *(int *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar2 * 4) + 0x10);
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 8));
      }
      uVar8 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        do {
          iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar8 * 4);
          *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + *(int *)(iVar5 + 0x10);
          uVar8 = uVar8 + 1;
          *(undefined4 *)(iVar5 + 0x10) = 0;
        } while (uVar8 < *(uint *)(param_1 + 4));
      }
      uVar8 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        do {
          iVar5 = *(int *)(*(int *)(param_1 + 0x10) + uVar8 * 4);
          uVar12 = *(uint *)(iVar5 + 4);
          if (((((param_4 & uVar12) != 0) && ((param_5 & uVar12) == 0)) && ((uVar12 & 0x20) == 0))
             && ((uVar12 & 0x400) == 0)) {
            local_c = _malloc(*(int *)(iVar5 + 8) << 2);
            if (local_c == (undefined4 *)0x0) goto LAB_00614202;
            local_10 = (int *)0x0;
            puVar13 = local_c;
            for (uVar12 = *(uint *)(iVar5 + 8) & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar13 = 0xffffffff;
              puVar13 = puVar13 + 1;
            }
            for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined1 *)puVar13 = 0xff;
              puVar13 = (undefined4 *)((int)puVar13 + 1);
            }
            if (*(int *)(param_1 + 8) != 0) {
              do {
                puVar1 = *(uint **)(*(int *)(param_1 + 0x14) + (int)local_10 * 4);
                if (*puVar1 == uVar8) {
                  if (local_c[puVar1[2]] == -1) {
                    uVar12 = 0;
                    if (param_3 == 0) goto LAB_00614209;
                    do {
                      if (_Memory[uVar12 * 2] == 0) break;
                      uVar12 = uVar12 + 1;
                    } while (uVar12 < param_3);
                    if (param_3 <= uVar12) goto LAB_00614209;
                    _Memory[uVar12 * 2] = uVar8;
                    (_Memory + uVar12 * 2)[1] = puVar1[2];
                    local_c[puVar1[2]] = uVar12;
                  }
                  puVar1[2] = local_c[puVar1[2]];
                }
                local_10 = (int *)((int)local_10 + 1);
              } while (local_10 < *(uint *)(param_1 + 8));
            }
            _free(local_c);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(param_1 + 4));
      }
      local_c = (undefined4 *)0x0;
      if (param_2 != -1) {
        uVar8 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          do {
            piVar6 = *(int **)(*(int *)(param_1 + 0x14) + uVar8 * 4);
            uVar12 = *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar6 * 4) + 4);
            if (((param_4 & uVar12) != 0) && ((param_5 & uVar12) == 0)) {
              if ((char)uVar12 < '\0') {
                *piVar6 = *(int *)(param_1 + 0x50);
              }
              else {
                *piVar6 = param_2;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)(param_1 + 8));
        }
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) + 0x10) = 0;
        *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) + 8) = param_3;
        if (param_2 == *(int *)(param_1 + 0x54)) {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x50) * 4) + 0x10)
               = 0;
          *(uint *)(*(int *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x50) * 4) + 8) = param_3
          ;
        }
      }
      uVar10 = 0;
      goto LAB_0061427f;
    }
  }
LAB_00614202:
  uVar10 = 0x8007000e;
  goto LAB_0061427f;
LAB_00614209:
  if (param_6 == 'v') {
LAB_0061420f:
    pcVar9 = "maximum input register index exceeded";
    uVar10 = 0x119a;
LAB_0061422b:
    FUN_005fbec8(param_1,0,uVar10,pcVar9);
  }
  else if (param_6 == 'c') {
LAB_00614221:
    pcVar9 = "maximum constant register index exceeded";
    uVar10 = 0x119b;
    goto LAB_0061422b;
  }
LAB_00614236:
  uVar10 = 0x80004005;
LAB_0061427f:
  _free(_Memory);
  _free(local_1c);
  _free(local_c);
  return uVar10;
}
