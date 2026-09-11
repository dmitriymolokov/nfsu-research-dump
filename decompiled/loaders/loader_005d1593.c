/* spd-match: far pct=5.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004010a0();
int __cdecl FUN_005c9025();
int __cdecl FUN_005c90b3();
int __cdecl FUN_005d0177();
int __cdecl FUN_005d0387();
int __cdecl FUN_005d0627();
extern unsigned char *DAT_006dc274;
extern void LAB_005cd2da(void);
extern void LAB_005d187e(void);
extern void LAB_005d19b4(void);

int FUN_005d1593(int param_1,int *param_2,uint *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar5 = param_3;
  iVar4 = param_1;
  local_10 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  if ((param_2 != (int *)0x0) &&
     (uVar6 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar6)) {
    iVar7 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar7 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) &&
     (uVar6 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar6)) {
    iVar7 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar7 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) &&
     (uVar6 = (**(code **)(*param_2 + 0x10))(param_2), *param_3 + 1 <= uVar6)) {
    iVar7 = (**(code **)(*param_2 + 0xc))(param_2);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar7 + *param_3 * 4);
  }
  *param_3 = *param_3 + 1;
  if ((param_2 != (int *)0x0) && (uVar6 = (**(code **)(*param_2 + 0x10))(param_2), uVar6 < *param_3)
     ) {
    return -0x7fffbffb;
  }
  iVar7 = FUN_005c90b3(*(undefined4 *)(param_1 + 0x20));
  if (iVar7 < 0) {
    return iVar7;
  }
  local_18 = 0;
  param_3 = (uint *)0x0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      pvVar8 = _malloc(0x44);
      if (pvVar8 == (void *)0x0) {
        local_8 = 0;
      }
      else {
        local_8 = FUN_005d0177();
      }
      if (local_8 == 0) {
        return -0x7ff8fff2;
      }
      iVar7 = FUN_005c9025(local_8,param_2,puVar5);
      if (iVar7 < 0) goto LAB_005d19b4;
      if (local_18 == 0) {
        *(int *)(param_1 + 0x28) = local_8;
      }
      else {
        *(int *)(local_18 + 0x34) = local_8;
      }
      param_3 = (uint *)((int)param_3 + 1);
      local_18 = local_8;
    } while (param_3 < *(uint *)(param_1 + 0x24));
  }
  param_1 = iVar7;
  local_8 = 0;
  iVar7 = *(int *)(iVar4 + 0x2c);
  if (iVar7 != 0) {
    piVar9 = _malloc(iVar7 * 0x3c + 4);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      *piVar9 = iVar7;
      piVar9 = piVar9 + 1;
      FUN_004010a0(piVar9,0x3c,iVar7,&LAB_005cd2da);
    }
    *(int **)(iVar4 + 0x30) = piVar9;
    if (piVar9 == (int *)0x0) {
      return -0x7ff8fff2;
    }
  }
  param_3 = (uint *)0x0;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    iVar7 = 0;
    do {
      *(undefined4 *)(iVar7 + 4 + *(int *)(iVar4 + 0x30)) = *(undefined4 *)(iVar4 + 4);
      *(uint **)(iVar7 + 8 + *(int *)(iVar4 + 0x30)) = param_3;
      param_1 = FUN_005d0627(*(int *)(iVar4 + 0x30) + iVar7,param_2,puVar5);
      if (param_1 < 0) {
        return param_1;
      }
      param_3 = (uint *)((int)param_3 + 1);
      iVar7 = iVar7 + 0x3c;
    } while (param_3 < *(uint *)(iVar4 + 0x2c));
  }
  iVar7 = 0;
  param_2 = (int *)0x0;
  if (*(int *)(iVar4 + 0x2c) != 0) {
    param_3 = *(uint **)(iVar4 + 0x2c);
    puVar10 = (undefined4 *)(*(int *)(iVar4 + 0x30) + 0x28);
    do {
      if (puVar10[-1] != 0) {
        piVar9 = (int *)*puVar10;
        iVar12 = *(int *)(iVar7 + 0x24 + *(int *)(iVar4 + 0x30));
        do {
          if (((*(uint *)(&DAT_006dc274 + *piVar9 * 0x1c) & 0xff000000) == 0x3000000) &&
             (param_2 < (uint)piVar9[1])) {
            param_2 = (int *)piVar9[1];
          }
          piVar9 = piVar9 + 0x2b;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
      }
      iVar7 = iVar7 + 0x3c;
      puVar10 = puVar10 + 0xf;
      param_3 = (uint *)((int)param_3 + -1);
    } while (param_3 != (uint *)0x0);
  }
  uVar6 = (int)param_2 * 4 + 4;
  local_10 = _malloc(uVar6);
  if (local_10 == (undefined4 *)0x0) {
LAB_005d187e:
    param_1 = -0x7ff8fff2;
  }
  else {
    puVar10 = local_10;
    for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    *(undefined4 *)(iVar4 + 0x34) = 0;
    param_3 = (uint *)0x0;
    if (*(int *)(iVar4 + 0x2c) != 0) {
      iVar7 = 0;
      do {
        local_14 = 0;
        iVar12 = *(int *)(iVar4 + 0x30) + iVar7;
        if (*(int *)(iVar12 + 0x24) != 0) {
          param_2 = (int *)0x0;
          do {
            piVar9 = (int *)(*(int *)(iVar12 + 0x28) + (int)param_2);
            if (((*(uint *)(&DAT_006dc274 + *piVar9 * 0x1c) & 0xff000000) == 0x3000000) &&
               (local_10[piVar9[1]] == 0)) {
              *(int *)(iVar4 + 0x34) = *(int *)(iVar4 + 0x34) + 1;
              local_10[piVar9[1]] = *(undefined4 *)(iVar4 + 0x34);
            }
            local_14 = local_14 + 1;
            param_2 = (int *)((int)param_2 + 0xac);
          } while (local_14 < *(uint *)(*(int *)(iVar4 + 0x30) + 0x24 + iVar7));
        }
        param_3 = (uint *)((int)param_3 + 1);
        iVar7 = iVar7 + 0x3c;
      } while (param_3 < *(uint *)(iVar4 + 0x2c));
    }
    if (*(int *)(iVar4 + 0x34) != 0) {
      pvVar8 = _malloc(*(int *)(iVar4 + 0x34) * 0x68);
      *(void **)(iVar4 + 0x38) = pvVar8;
      local_c = _malloc(*(int *)(iVar4 + 0x34) << 2);
      if ((*(int *)(iVar4 + 0x38) == 0) || (local_c == (undefined4 *)0x0)) goto LAB_005d187e;
    }
    param_3 = (uint *)0x0;
    if (*(int *)(iVar4 + 0x2c) != 0) {
      local_14 = 0;
      do {
        iVar7 = *(int *)(iVar4 + 0x30) + local_14;
        bVar2 = false;
        puVar10 = local_c;
        for (uVar6 = *(uint *)(iVar4 + 0x34) & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        for (iVar12 = 0; iVar12 != 0; iVar12 = iVar12 + -1) {
          *(undefined1 *)puVar10 = 0;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        iVar12 = *(int *)(iVar7 + 0x24);
        *(undefined4 *)(iVar7 + 0x34) = 0xffffffff;
        *(undefined4 *)(iVar7 + 0x38) = 0xffffffff;
        if (iVar12 != 0) {
          param_2 = (int *)(iVar12 * 0xac);
          do {
            param_2 = (int *)((int)param_2 + -0xac);
            piVar9 = (int *)(*(int *)(iVar7 + 0x28) + (int)param_2);
            iVar12 = iVar12 + -1;
            uVar6 = *(uint *)(&DAT_006dc274 + *piVar9 * 0x1c);
            uVar11 = uVar6 >> 0x18;
            if (uVar11 == 3) {
              iVar1 = local_10[piVar9[1]];
              piVar9[0x2a] = iVar1 + -1;
              if (*(uint *)(&DAT_006dc274 + *piVar9 * 0x1c) == 0x300000d) {
                piVar9[10] = piVar9[10] | 2;
              }
              else {
                piVar9[10] = piVar9[10] ^ ((uint)(local_c[iVar1 + -1] == 0) << 1 ^ piVar9[10]) & 2;
                local_c[piVar9[0x2a]] = 1;
              }
            }
            else if (uVar11 == 4) {
              bVar3 = !bVar2;
              bVar2 = true;
              piVar9[10] = piVar9[10] ^ ((uint)bVar3 << 1 ^ piVar9[10]) & 2;
            }
            else if (uVar11 == 6) {
              if ((*(int *)(iVar7 + 0x34) == -1) && (uVar6 == 0x6000000)) {
                *(int *)(iVar7 + 0x34) = iVar12;
              }
              else if ((*(int *)(iVar7 + 0x38) == -1) && (uVar6 == 0x6000001)) {
                *(int *)(iVar7 + 0x38) = iVar12;
              }
            }
          } while (iVar12 != 0);
        }
        param_3 = (uint *)((int)param_3 + 1);
        local_14 = local_14 + 0x3c;
        iVar7 = param_1;
      } while (param_3 < *(uint *)(iVar4 + 0x2c));
LAB_005d19b4:
      param_1 = iVar7;
      if (local_8 != 0) {
        FUN_005d0387(1);
      }
    }
  }
  if (local_10 != (undefined4 *)0x0) {
    _free(local_10);
  }
  if (local_c != (undefined4 *)0x0) {
    _free(local_c);
  }
  return param_1;
}
