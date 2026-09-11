/* spd-match: far pct=4.72 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005ca175(...);
int __cdecl FUN_005cb122(...);
int __cdecl FUN_005cb49a(...);
extern void LAB_005cd1ae(...);

struct ThisCallBox {
  int FUN_005ccec4(uint param_2, uint param_3, int param_4);
};
int ThisCallBox::FUN_005ccec4(uint param_2, uint param_3, int param_4) {
  int *piVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  ushort *puVar14;
  int *piVar15;
  uint local_14;
  uint local_c;
  int local_8;
  
  iVar6 = param_3;
  iVar5 = param_2;
  uVar12 = 0;
  local_8 = 0;
  if (*(int *)(param_2 + 0x2c) != 0) {
    do {
      uVar4 = *(uint *)(*(int *)(param_2 + 0x30) + uVar12 * 4);
      if (uVar4 != 0) {
        *(undefined4 *)(*(int *)(uVar4 + 0xc) + 0x10) = *(undefined4 *)(uVar4 + 0x10);
        *(undefined4 *)(*(int *)(uVar4 + 0x10) + 0xc) = *(undefined4 *)(uVar4 + 0xc);
        iVar7 = *(int *)(*(int *)(((int)this) + 0x8c) + *(int *)(*(int *)(uVar4 + 4) + 4) * 4);
        if (uVar4 == *(uint *)(iVar7 + 0x2c)) {
          *(uint *)(iVar7 + 0x2c) =
               -(uint)(*(uint *)(uVar4 + 0x10) != uVar4) & *(uint *)(uVar4 + 0x10);
        }
        *(uint *)(uVar4 + 0xc) = uVar4;
        *(uint *)(uVar4 + 0x10) = uVar4;
        FUN_005cb122(1);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < *(uint *)(param_2 + 0x2c));
  }
  if (*(void **)(param_2 + 0x44) != (void *)0x0) {
    _free(*(void **)(param_2 + 0x44));
    *(undefined4 *)(param_2 + 0x44) = 0;
  }
  if (*(void **)(param_2 + 0x30) != (void *)0x0) {
    _free(*(void **)(param_2 + 0x30));
    *(undefined4 *)(param_2 + 0x30) = 0;
  }
  *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | 1;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (param_3 != 0) {
    iVar7 = *(int *)(param_3 + 0x10) + param_3;
    puVar8 = (unsigned int *)_malloc(*(int *)(param_3 + 0xc) << 2);
    *(undefined4 **)(param_2 + 0x30) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      for (uVar12 = *(uint *)(param_3 + 0xc) & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (iVar10 = 0; iVar10 != 0; iVar10 = iVar10 + -1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0xc);
      piVar1 = (int *)(param_3 + 0xc);
      param_3 = 0;
      local_c = 0;
      local_14 = 0;
      param_2 = 0;
      if (*piVar1 != 0) {
        puVar14 = (ushort *)(iVar7 + 8);
        do {
          uVar2 = puVar14[-2];
          if (uVar2 == 0) {
            if (local_14 <= (uint)puVar14[-1] + (uint)*puVar14) {
              local_14 = (uint)puVar14[-1] + (uint)*puVar14;
            }
          }
          else if (uVar2 == 1) {
            if (local_c <= (uint)puVar14[-1] + (uint)*puVar14) {
              local_c = (uint)puVar14[-1] + (uint)*puVar14;
            }
          }
          else if (uVar2 == 2) {
            if (param_3 <= (uint)puVar14[-1] + (uint)*puVar14) {
              param_3 = (uint)puVar14[-1] + (uint)*puVar14;
            }
          }
          else if (uVar2 != 3) {
            return -0x7fffbffb;
          }
          iVar10 = FUN_005ca175(*(int *)(puVar14 + -4) + iVar6,10);
          if ((iVar10 != 0) && (local_8 = FUN_005cb49a(iVar10,iVar5,param_2), local_8 < 0)) {
            return local_8;
          }
          param_2 = param_2 + 1;
          puVar14 = puVar14 + 10;
        } while (param_2 < *(uint *)(iVar6 + 0xc));
      }
      iVar10 = local_14 + (local_c + param_3) * 4;
      *(int *)(iVar5 + 0x3c) = iVar10;
      if (iVar10 != 0) {
        *(int *)(iVar5 + 0x3c) = iVar10 + -1;
      }
      uVar12 = *(uint *)(iVar5 + 0x3c) >> 1 | *(uint *)(iVar5 + 0x3c);
      uVar12 = uVar12 >> 2 | uVar12;
      uVar12 = uVar12 >> 4 | uVar12;
      uVar12 = uVar12 >> 8 | uVar12;
      uVar12 = uVar12 >> 0x10 | uVar12;
      *(uint *)(iVar5 + 0x3c) = uVar12;
      if (param_4 == 0) {
        uVar12 = iVar10 * 4 + 8;
        iVar10 = 4;
      }
      else {
        uVar12 = uVar12 * 8 + 0x10;
        iVar10 = 8;
      }
      puVar8 = (unsigned int *)_malloc(uVar12);
      *(undefined4 **)(iVar5 + 0x44) = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        for (uVar12 = uVar12 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
          *(undefined1 *)puVar8 = 0;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
        **(int **)(iVar5 + 0x44) = iVar10 * param_3 * 4 + 8;
        (*(int **)(iVar5 + 0x44))[1] = **(int **)(iVar5 + 0x44) + iVar10 * local_c * 4;
        if (param_4 != 0) {
          return local_8;
        }
        piVar1 = *(int **)(iVar5 + 0x44);
        iVar5 = piVar1[1];
        iVar10 = *piVar1;
        param_2 = 0;
        if (*(int *)(iVar6 + 0xc) == 0) {
          return local_8;
        }
        piVar9 = (int *)(iVar7 + 0x10);
        do {
          sVar3 = (short)piVar9[-3];
          if (sVar3 == 0) {
            if (*piVar9 != 0) {
              piVar13 = (int *)(*piVar9 + iVar6);
              uVar12 = (uint)*(ushort *)(piVar9 + -2) << 2;
              piVar15 = (int *)((int)piVar1 + (uint)*(ushort *)((int)piVar9 + -10) * 4 + iVar5);
              goto LAB_005cd1ae;
            }
          }
          else if (sVar3 == 1) {
            if (*piVar9 != 0) {
              uVar12 = (uint)*(ushort *)(piVar9 + -2) << 4;
              piVar15 = (int *)((int)piVar1 + (uint)*(ushort *)((int)piVar9 + -10) * 0x10 + iVar10);
              piVar13 = (int *)(*piVar9 + iVar6);
              goto LAB_005cd1ae;
            }
          }
          else if ((sVar3 == 2) && (*piVar9 != 0)) {
            uVar12 = (uint)*(ushort *)(piVar9 + -2) << 4;
            piVar15 = piVar1 + (uint)*(ushort *)((int)piVar9 + -10) * 4 + 2;
            piVar13 = (int *)(*piVar9 + iVar6);
LAB_005cd1ae:
            for (uVar12 = uVar12 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
              *piVar15 = *piVar13;
              piVar13 = piVar13 + 1;
              piVar15 = piVar15 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(char *)piVar15 = (char)*piVar13;
              piVar13 = (int *)((int)piVar13 + 1);
              piVar15 = (int *)((int)piVar15 + 1);
            }
          }
          param_2 = param_2 + 1;
          piVar9 = piVar9 + 5;
          if (*(uint *)(iVar6 + 0xc) <= param_2) {
            return local_8;
          }
        } while( true );
      }
    }
    local_8 = -0x7ff8fff2;
  }
  return local_8;
}
