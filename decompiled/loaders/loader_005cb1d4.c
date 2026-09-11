/* spd-match: far pct=9.44 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_005c8286(...);
extern unsigned char *DAT_006dc264;
extern unsigned char *DAT_006dc270;
extern unsigned char *DAT_006dc274;
extern void LAB_005cb355(...);
extern void LAB_005cb3aa(...);
extern void LAB_005cb40f(...);
extern void LAB_005cb415(...);
extern void LAB_005cb449(...);
extern void LAB_005cb48c(...);

struct ThisCallBox {
  undefined4 FUN_005cb1d4(uint *param_2, int *param_3, uint *param_4);
};
undefined4 ThisCallBox::FUN_005cb1d4(uint *param_2, int *param_3, uint *param_4) {
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar2 = param_4;
  piVar1 = param_3;
  param_2[10] = param_2[10] & 0xfffffffe;
  param_2[0xb] = 0;
  param_2[3] = 0;
  if ((param_3 != (int *)0x0) &&
     (uVar3 = (**(code **)(*param_3 + 0x10))(param_3), *puVar2 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
    *param_2 = *(uint *)(iVar4 + *puVar2 * 4);
  }
  *puVar2 = *puVar2 + 1;
  if ((piVar1 != (int *)0x0) &&
     (uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1), *puVar2 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
    param_2[1] = *(uint *)(iVar4 + *puVar2 * 4);
  }
  *puVar2 = *puVar2 + 1;
  if ((piVar1 != (int *)0x0) &&
     (uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1), *puVar2 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
    param_2[4] = *(uint *)(iVar4 + *puVar2 * 4);
  }
  *puVar2 = *puVar2 + 1;
  if ((piVar1 != (int *)0x0) &&
     (uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1), *puVar2 + 1 <= uVar3)) {
    iVar4 = (**(code **)(*piVar1 + 0xc))(piVar1);
    param_2[5] = *(uint *)(iVar4 + *puVar2 * 4);
  }
  *puVar2 = *puVar2 + 1;
  if (((piVar1 != (int *)0x0) && (uVar3 = (**(code **)(*piVar1 + 0x10))(piVar1), uVar3 < *puVar2))
     || (0xb2 < *param_2)) {
    return 0x80004005;
  }
  iVar4 = *param_2 * 0x1c;
  uVar3 = *(uint *)(&DAT_006dc270 + iVar4);
  if ((uVar3 != 0) && (uVar3 <= param_2[1])) {
    return 0x80004005;
  }
  if (uVar3 == 0x105) {
    uVar3 = param_2[1];
    if (((uVar3 < 0x10) || (uVar3 == 0x101)) ||
       ((uVar3 == 0x102 || ((uVar3 == 0x103 || (uVar3 == 0x104)))))) {
      if (*(int *)(&DAT_006dc274 + iVar4) == 0x800000d) {
        return 0x80004005;
      }
    }
    else if (uVar3 != 0x100) {
      return 0x80004005;
    }
  }
  param_2[0x2a] = 0;
  uVar3 = *(uint *)(&DAT_006dc274 + iVar4);
  if (uVar3 < 0x6000103) {
    if (uVar3 == 0x6000102) goto LAB_005cb40f;
    if (0x6000004 < uVar3) {
      if (uVar3 != 0x6000005) {
        if (uVar3 != 0x6000006) {
          if (uVar3 != 0x6000007) goto LAB_005cb48c;
          goto LAB_005cb3aa;
        }
LAB_005cb355:
        param_3 = (int *)(param_2[4] + *(int *)(((int)this) + 0x2c));
        uVar3 = FUN_005c8286(&param_3,4);
        param_2[0x2a] = uVar3;
        uVar3 = uVar3 << 4;
        goto LAB_005cb449;
      }
      goto LAB_005cb415;
    }
    if (uVar3 != 0x6000004) {
      if (uVar3 != 0x5000000) {
        if (uVar3 < 0x6000000) goto LAB_005cb48c;
        if (0x6000001 < uVar3) {
          if (uVar3 != 0x6000002) {
            if (uVar3 != 0x6000003) goto LAB_005cb48c;
            goto LAB_005cb355;
          }
          goto LAB_005cb415;
        }
      }
      *(undefined4 *)
       (*(int *)(param_2[5] + *(int *)(((int)this) + 0x2c)) * 0x1c + *(int *)(((int)this) + 0x24)) =
           *(undefined4 *)(&DAT_006dc264 + iVar4);
      goto LAB_005cb48c;
    }
LAB_005cb3aa:
    param_3 = (int *)(param_2[4] + *(int *)(((int)this) + 0x2c));
    uVar3 = FUN_005c8286(&param_3,1);
    param_2[0x2a] = uVar3;
    uVar3 = uVar3 << 2;
  }
  else {
    if (uVar3 != 0x6000105) {
      if ((uVar3 != 0x6000202) && (uVar3 != 0x6000205)) {
        if ((uVar3 != 0x6000302) && (uVar3 != 0x6000305)) {
          if ((uVar3 != 0x6000402) && (uVar3 != 0x6000405)) goto LAB_005cb48c;
          param_2[0x2a] = 1;
        }
        param_2[0x2a] = param_2[0x2a] + 1;
      }
      param_2[0x2a] = param_2[0x2a] + 1;
    }
LAB_005cb40f:
    param_2[0x2a] = param_2[0x2a] + 1;
LAB_005cb415:
    if ((*(int *)(&DAT_006dc274 + iVar4) == 0x6000002) ||
       (*(int *)(&DAT_006dc274 + iVar4) == 0x6000005)) {
      param_3 = (int *)(param_2[4] + *(int *)(((int)this) + 0x2c));
      uVar3 = FUN_005c8286(&param_3,4);
      param_2[0x2a] = uVar3;
    }
    uVar3 = param_2[0x2a] << 4;
  }
LAB_005cb449:
  if (uVar3 != 0) {
    if ((void *)param_2[0x13] != (void *)0x0) {
      _free((void *)param_2[0x13]);
      param_2[0x13] = 0;
    }
    puVar5 = (unsigned int *)_malloc(uVar3);
    param_2[0x13] = (uint)puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    for (uVar3 = uVar3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
LAB_005cb48c:
  param_2[10] = param_2[10] | 1;
  return 0;
}
