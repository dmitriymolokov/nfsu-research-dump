/* spd-match: far pct=4.87 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/batches/p1_09/h2_loader_recipe_retry */
#include "ghidra_compat.h"

unsigned int __cdecl __controlfp(unsigned int, unsigned int);
long __cdecl __ftol(void);

int __cdecl FUN_004010a0(...);
int __cdecl FUN_005ca175(...);
int __cdecl FUN_005ca361(...);
int __cdecl FUN_005ca4f3(...);
int __cdecl FUN_005ca526(...);
int __cdecl FUN_005cb189(...);
int __cdecl FUN_005cd207(...);
int __cdecl FUN_005d0177(...);
int __cdecl FUN_005d0387(...);
int __cdecl FUN_005d19ea(...);
extern void LAB_005c8f5e(...);
extern void LAB_005d0a16(...);
extern void LAB_005d0cb4(...);
extern void LAB_005d0d90(...);
extern void LAB_005d0d9d(...);

struct ThisCallBox {
  uint FUN_005d07f5(undefined4 *param_2, char *param_3, uint param_4);
};
uint ThisCallBox::FUN_005d07f5(undefined4 *param_2, char *param_3, uint param_4) {
  char cVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  undefined4 *puVar18;
  uint local_20;
  uint local_1c;
  uint local_10;
  undefined4 *local_c;
  int *local_8;
  
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    return 0;
  }
  iVar2 = FUN_005ca175(param_2,10);
  if (iVar2 == 0) {
    iVar2 = FUN_005ca526(param_2,10);
    if (iVar2 == 0) {
      iVar2 = FUN_005ca4f3(param_2,10);
      if (iVar2 == 0) {
        return 0;
      }
      piVar8 = (int *)(iVar2 + 0x2c);
      puVar3 = (uint *)(iVar2 + 0x30);
    }
    else {
      piVar8 = (int *)(iVar2 + 0x24);
      puVar3 = (uint *)(iVar2 + 0x28);
    }
  }
  else {
    piVar8 = (int *)(iVar2 + 0x30);
    puVar3 = (uint *)(iVar2 + 0x34);
  }
  local_1c = 0;
  uVar7 = *puVar3;
  while (uVar12 = uVar7, uVar12 != 0) {
    iVar2 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(uVar12 + 4) * 4);
    iVar13 = *(int *)(iVar2 + 0x38);
    if (iVar13 == 0) {
      iVar4 = *(int *)(((int)this) + 0x2c);
    }
    else {
      iVar4 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
    }
    iVar4 = *(int *)(iVar2 + 0x24) + *(int *)(uVar12 + 8) + iVar4;
    if (iVar13 == 0) {
      iVar2 = *(int *)(((int)this) + 0x2c);
    }
    else {
      iVar2 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
    }
    iVar14 = *(int *)(iVar4 + 8);
    pcVar10 = param_3;
    if (*(int *)(iVar14 + iVar2) == 0) {
      pcVar9 = (char *)0x0;
    }
    else {
      if (iVar13 == 0) {
        iVar2 = *(int *)(((int)this) + 0x2c);
      }
      else {
        iVar2 = *(int *)(*(int *)(((int)this) + 0xc) + 8);
      }
      pcVar9 = (char *)(iVar14 + 4 + iVar2);
    }
    for (; (*pcVar10 == *pcVar9 && (*pcVar10 != '\0')); pcVar10 = pcVar10 + 1) {
      pcVar9 = pcVar9 + 1;
    }
    cVar1 = *pcVar10;
    if (cVar1 == *pcVar9) {
      return ~uVar12;
    }
    if (*pcVar9 == '\0') {
      if (cVar1 == '.') {
        pcVar10 = pcVar10 + 1;
        uVar12 = ~uVar12;
        goto LAB_005d0a16;
      }
      if (cVar1 == '[') {
        pcVar10 = pcVar10 + 1;
        if (*pcVar10 < '0') {
          return 0;
        }
        if ('9' < *pcVar10) {
          return 0;
        }
        uVar7 = _atol(pcVar10);
        if (*(uint *)(iVar4 + 0x10) <= uVar7) {
          return 0;
        }
        for (; ('/' < *pcVar10 && (*pcVar10 < ':')); pcVar10 = pcVar10 + 1) {
        }
        if (*pcVar10 != ']') {
          return 0;
        }
        uVar12 = FUN_005ca361(~uVar12,uVar7,param_4);
        if (uVar12 == 0) {
          return 0;
        }
        if (pcVar10[1] == '\0') {
          return uVar12;
        }
        if (pcVar10[1] != '.') {
          return 0;
        }
        pcVar10 = pcVar10 + 2;
LAB_005d0a16:
        uVar7 = FUN_005d19ea(uVar12,pcVar10,param_4);
        return uVar7;
      }
    }
    local_1c = uVar12;
    uVar7 = *(uint *)(uVar12 + 0x34);
  }
  param_4 = 0;
  if (*(int *)(((int)this) + 0x94) == 0) {
    return 0;
  }
  local_20 = 0;
  local_8 = (int *)0x0;
  local_c = (undefined4 *)0x0;
  param_2 = (undefined4 *)0x0;
  cVar1 = *param_3;
  pcVar10 = param_3;
  do {
    if ((((cVar1 == '.') || (cVar1 == '@')) || (cVar1 == '[')) || (cVar1 == ']')) goto LAB_005d0d90;
    pcVar10 = pcVar10 + 1;
    cVar1 = *pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = param_3;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + (1 - (int)(param_3 + 1));
  iVar2 = ((uint)(((uint)pcVar10 & 3) != 0) + ((uint)pcVar10 >> 2)) * 4;
  puVar5 = (undefined4 *)_malloc(*(int *)(((int)this) + 0x88) * 4 + 4);
  local_c = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    pvVar6 = (void *)_malloc(0x44);
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_005d0177();
    }
    if (uVar7 == 0) goto LAB_005d0d9d;
    *(undefined4 *)(uVar7 + 4) = *(undefined4 *)(((int)this) + 0x88);
    iVar13 = *(int *)(((int)this) + 0x28);
    *(undefined4 *)(uVar7 + 0x18) = 0xffffffff;
    *(undefined4 *)(uVar7 + 8) = 0;
    *(undefined4 *)(uVar7 + 0xc) = 0;
    *(int *)(uVar7 + 0x24) = iVar2 + 4 + iVar13;
    *(undefined4 *)(uVar7 + 0x20) = 4;
    piVar15 = *(int **)(((int)this) + 0x90);
    iVar13 = piVar15[4];
    iVar4 = *piVar15;
    iVar14 = piVar15[1];
    param_4 = uVar7;
    if (-1 < iVar14) {
      if (iVar14 < 4) {
        if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
          iVar4 = piVar15[6] * piVar15[5] * 4;
          *(undefined4 *)(uVar7 + 0x1c) = 4;
          *(int *)(uVar7 + 0x1c) = iVar4;
          if (iVar13 != 0) {
            iVar14 = iVar13 * iVar4;
            iVar4 = iVar4 * iVar13;
            *(int *)(uVar7 + 0x1c) = iVar14;
          }
          local_10 = iVar4 + *(int *)(((int)this) + 0x28) + 0x20 + iVar2;
          param_2 = (undefined4 *)_malloc(*(int *)(((int)this) + 0x28) + local_10);
          if (param_2 != (undefined4 *)0x0) {
            uVar12 = *(uint *)(((int)this) + 0x28);
            puVar16 = *(undefined4 **)(((int)this) + 0x2c);
            puVar18 = param_2;
            for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar18 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar18 = puVar18 + 1;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar18 = *(undefined1 *)puVar16;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
              puVar18 = (undefined4 *)((int)puVar18 + 1);
            }
            puVar16 = (undefined4 *)(*(int *)(((int)this) + 0x28) + (int)param_2);
            for (uVar12 = local_10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
            for (uVar12 = local_10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar16 = 0;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            puVar16 = *(undefined4 **)(((int)this) + 0x90);
            puVar18 = (undefined4 *)((int)param_2 + *(int *)(((int)this) + 0x28) + iVar2 + 4);
            for (iVar13 = 7; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar18 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar18 = puVar18 + 1;
            }
            *(int *)(uVar7 + 0x28) = *(int *)(uVar7 + 0x24) + 0x1c;
LAB_005d0cb4:
            local_8 = (int *)0x0;
            *(char **)((int)param_2 + *(int *)(((int)this) + 0x28)) = pcVar10;
            pcVar9 = (char *)((int)param_2 + *(int *)(((int)this) + 0x28) + 4);
            for (uVar12 = (uint)pcVar10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)param_3;
              param_3 = param_3 + 4;
              pcVar9 = pcVar9 + 4;
            }
            for (uVar12 = (uint)pcVar10 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pcVar9 = *param_3;
              param_3 = param_3 + 1;
              pcVar9 = pcVar9 + 1;
            }
            *(undefined4 *)(*(int *)(uVar7 + 0x24) + 8 + (int)param_2) =
                 *(undefined4 *)(((int)this) + 0x28);
            *(undefined4 *)(*(int *)(uVar7 + 0x24) + 0xc + (int)param_2) = 0;
            if (*(void **)(((int)this) + 0x2c) != (void *)0x0) {
              _free(*(void **)(((int)this) + 0x2c));
              *(undefined4 *)(((int)this) + 0x2c) = 0;
            }
            *(undefined4 **)(((int)this) + 0x2c) = param_2;
            *(int *)(((int)this) + 0x28) = *(int *)(((int)this) + 0x28) + local_10;
            param_2 = (undefined4 *)0x0;
            puVar16 = *(undefined4 **)(((int)this) + 0x8c);
            puVar18 = puVar5;
            for (uVar12 = *(uint *)(((int)this) + 0x88) & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1)
            {
              *puVar18 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar18 = puVar18 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined1 *)puVar18 = *(undefined1 *)puVar16;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
              puVar18 = (undefined4 *)((int)puVar18 + 1);
            }
            puVar5[*(int *)(((int)this) + 0x88)] = uVar7;
            if (*(void **)(((int)this) + 0x8c) != (void *)0x0) {
              _free(*(void **)(((int)this) + 0x8c));
              *(undefined4 *)(((int)this) + 0x8c) = 0;
            }
            local_c = (undefined4 *)0x0;
            *(int *)(((int)this) + 0x88) = *(int *)(((int)this) + 0x88) + 1;
            *(undefined4 **)(((int)this) + 0x8c) = puVar5;
            if (local_1c == 0) {
              *puVar3 = uVar7;
            }
            else {
              *(uint *)(local_1c + 0x34) = uVar7;
            }
            *piVar8 = *piVar8 + 1;
            param_4 = 0;
            local_20 = ~uVar7;
          }
        }
      }
      else if ((iVar14 == 4) && (iVar13 == 0)) {
        local_10 = iVar2 + 0x1c;
        param_2 = (undefined4 *)_malloc(*(int *)(((int)this) + 0x28) + local_10);
        if (param_2 != (undefined4 *)0x0) {
          iVar2 = *(int *)(((int)this) + 0x20) + 1;
          local_8 = (int *)_malloc(iVar2 * 0x1c + 4);
          if (local_8 == (int *)0x0) {
            local_8 = (int *)0x0;
          }
          else {
            *local_8 = iVar2;
            local_8 = local_8 + 1;
            FUN_004010a0(local_8,0x1c,iVar2,&LAB_005c8f5e);
          }
          if (local_8 != (int *)0x0) {
            uVar12 = *(uint *)(((int)this) + 0x28);
            puVar16 = *(undefined4 **)(((int)this) + 0x2c);
            puVar18 = param_2;
            for (uVar11 = uVar12 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar18 = *puVar16;
              puVar16 = puVar16 + 1;
              puVar18 = puVar18 + 1;
            }
            for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *(undefined1 *)puVar18 = *(undefined1 *)puVar16;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
              puVar18 = (undefined4 *)((int)puVar18 + 1);
            }
            puVar16 = (undefined4 *)(*(int *)(((int)this) + 0x28) + (int)param_2);
            for (uVar12 = local_10 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
            for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
              *(undefined1 *)puVar16 = 0;
              puVar16 = (undefined4 *)((int)puVar16 + 1);
            }
            piVar15 = local_8 + *(int *)(((int)this) + 0x20) * 7;
            for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar15 = 0;
              piVar15 = piVar15 + 1;
            }
            local_8[*(int *)(((int)this) + 0x20) * 7] = iVar4;
            local_8[*(int *)(((int)this) + 0x20) * 7 + 2] = *(int *)(uVar7 + 4);
            pvVar6 = (void *)_malloc(0xac);
            if (pvVar6 == (void *)0x0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_005cd207();
            }
            local_8[*(int *)(((int)this) + 0x20) * 7 + 6] = iVar2;
            if (iVar2 != 0) {
              piVar15 = *(int **)(((int)this) + 0x24);
              piVar17 = local_8;
              for (uVar12 = (uint)(*(int *)(((int)this) + 0x20) * 0x1c) >> 2; uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *piVar17 = *piVar15;
                piVar15 = piVar15 + 1;
                piVar17 = piVar17 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(char *)piVar17 = (char)*piVar15;
                piVar15 = (int *)((int)piVar15 + 1);
                piVar17 = (int *)((int)piVar17 + 1);
              }
              *(int *)(uVar7 + 0x28) = *(int *)(uVar7 + 0x24) + 0x14;
              *(undefined4 *)(uVar7 + 0x1c) = 4;
              puVar16 = *(undefined4 **)(((int)this) + 0x90);
              puVar18 = (undefined4 *)(*(int *)(uVar7 + 0x24) + (int)param_2);
              for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar18 = *puVar16;
                puVar16 = puVar16 + 1;
                puVar18 = puVar18 + 1;
              }
              *(undefined4 *)((int)param_2 + *(int *)(uVar7 + 0x28)) =
                   *(undefined4 *)(((int)this) + 0x20);
              puVar16 = *(undefined4 **)(((int)this) + 0x24);
              for (uVar12 = (uint)(*(int *)(((int)this) + 0x20) * 0x1c) >> 2; uVar12 != 0;
                  uVar12 = uVar12 - 1) {
                *puVar16 = 0;
                puVar16 = puVar16 + 1;
              }
              for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                *(undefined1 *)puVar16 = 0;
                puVar16 = (undefined4 *)((int)puVar16 + 1);
              }
              if (*(int *)(((int)this) + 0x24) != 0) {
                FUN_005cb189(3);
                *(undefined4 *)(((int)this) + 0x24) = 0;
              }
              *(int *)(((int)this) + 0x20) = *(int *)(((int)this) + 0x20) + 1;
              *(int **)(((int)this) + 0x24) = local_8;
              goto LAB_005d0cb4;
            }
          }
        }
      }
    }
  }
LAB_005d0d90:
  if (param_4 != 0) {
    FUN_005d0387(1);
  }
LAB_005d0d9d:
  if (local_c != (undefined4 *)0x0) {
    _free(local_c);
  }
  if (local_8 != (int *)0x0) {
    FUN_005cb189(3);
  }
  if (param_2 != (undefined4 *)0x0) {
    _free(param_2);
    return local_20;
  }
  return local_20;
}
