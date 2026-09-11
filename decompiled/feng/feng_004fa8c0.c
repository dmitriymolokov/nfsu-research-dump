/* spd-match: far pct=6.10 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004FA8C0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004fdd00(...);

struct ThisCallBox {
  void FUN_004fa8c0(int val, int param_2);
};
void ThisCallBox::FUN_004fa8c0(int val, int param_2)

{
  undefined4 *_Memory;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;

  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 local_8;
  
  _Memory = *(undefined4 **)(param_2 + 0x88);
  uVar1 = *(uint *)(param_2 + 0x5c);
  *(int *)(param_2 + 0x5c) = val;
  iVar5 = val * ((int)this);
  uVar2 = *(uint *)(param_2 + 0x60);
  *(int *)(param_2 + 0x60) = ((int)this);
  pvVar6 = _malloc(iVar5 * 0x30);
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else if (-1 < iVar5 + -1) {
    puVar7 = (undefined4 *)((int)pvVar6 + 0x10);
    do {
      puVar7[-4] = 0;
      puVar7[-3] = 0x3f800000;
      puVar7[-2] = 0x3f800000;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0xffffffff;
      puVar7 = puVar7 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(void **)(param_2 + 0x88) = pvVar6;
  FUN_004fdd00();
  uVar8 = *(uint *)(param_2 + 0x5c);
  uVar9 = *(uint *)(param_2 + 0x78);
  *(uint *)(param_2 + 0x68) = uVar8;
  if (uVar8 <= uVar9) {
    if (uVar8 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar8 - 1;
    }
  }
  uVar11 = *(uint *)(param_2 + 100) & 8;
  if (uVar11 != 0) {
    iVar5 = uVar9 - (uVar8 >> 1);
    if (iVar5 < 0) {
      if ((int)uVar8 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar8 - -iVar5 % (int)uVar8;
      }
    }
    else {
      uVar9 = iVar5 % (int)uVar8;
    }
  }
  uVar3 = *(uint *)(param_2 + 0x60);
  *(uint *)(param_2 + 0x70) = uVar9;
  uVar9 = *(uint *)(param_2 + 0x7c);
  *(uint *)(param_2 + 0x6c) = uVar3;
  if (uVar3 <= uVar9) {
    if (uVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = uVar3 - 1;
    }
  }
  if (uVar11 != 0) {
    iVar5 = uVar9 - (uVar3 >> 1);
    if (iVar5 < 0) {
      if ((int)uVar3 < 2) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar3 - -iVar5 % (int)uVar3;
      }
    }
    else {
      uVar9 = iVar5 % (int)uVar3;
    }
  }
  *(uint *)(param_2 + 0x74) = uVar9;
  if ((*(byte *)(param_2 + 100) & 1) != 0) {
    uVar9 = uVar1;
    if (uVar8 < uVar1) {
      uVar9 = uVar8;
    }
    uVar8 = uVar2;
    if (uVar3 < uVar2) {
      uVar8 = uVar3;
    }
    if (_Memory != (undefined4 *)0x0) {
      uVar11 = 0;
      if (uVar8 != 0) {
        local_10 = _Memory + uVar9 * 0xc + 8;
        local_14 = _Memory;
        do {
          puVar7 = local_14;
          puVar12 = (undefined4 *)
                    (*(int *)(param_2 + 0x5c) * uVar11 * 0x30 + *(int *)(param_2 + 0x88));
          for (iVar5 = (*(int *)(param_2 + 0x5c) * 3 & 0xfffffffU) << 2; iVar5 != 0;
              iVar5 = iVar5 + -1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          if (uVar9 < uVar1) {
            iVar5 = uVar1 - uVar9;
            puVar7 = local_10;
            do {
              if (puVar7[-2] == 2) {
                uVar4 = *puVar7;
                iVar10 = *(int *)(param_2 + 0x94) + -1;
                *(int *)(param_2 + 0x94) = iVar10;
                *(undefined4 *)(*(int *)(param_2 + 0x98) + iVar10 * 4) = uVar4;
              }
              puVar7 = puVar7 + 0xc;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          local_14 = local_14 + uVar1 * 0xc;
          local_10 = local_10 + uVar1 * 0xc;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
      }
      if (uVar8 < uVar2) {
        puVar7 = _Memory + uVar8 * uVar1 * 0xc + 8;
        local_8 = uVar2 - uVar8;
        uVar2 = uVar1;
        puVar12 = puVar7;
        do {
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            if (puVar7[-2] == 2) {
              uVar4 = *puVar7;
              iVar5 = *(int *)(param_2 + 0x94) + -1;
              *(int *)(param_2 + 0x94) = iVar5;
              *(undefined4 *)(*(int *)(param_2 + 0x98) + iVar5 * 4) = uVar4;
            }
            puVar7 = puVar7 + 0xc;
          }
          puVar7 = puVar12 + uVar1 * 0xc;
          local_8 = local_8 + -1;
          uVar2 = uVar1;
          puVar12 = puVar7;
        } while (local_8 != 0);
      }
      _free(_Memory);
    }
  }
  *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) | 1;
  return;
}
