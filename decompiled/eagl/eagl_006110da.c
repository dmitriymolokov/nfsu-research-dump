/* spd-match: far pct=6.28 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_int */
#include "ghidra_compat.h"

int __cdecl FUN_005e7078(...);
int __cdecl FUN_0061663f(...);
int __cdecl FUN_00618c39(...);
int __cdecl FUN_0061a26f(...);
int __cdecl FUN_0067101f(...);
int __cdecl FUN_00673533(...);
extern int DAT_006a5ec0;
extern void *PTR_s_UNKNOWN_006df648;
extern void LAB_00611214(...);
extern void LAB_00611335(...);
extern void LAB_006113a3(...);

struct ThisCallBox {
  int FUN_006110da(int *param_2, uint *param_3);
};
int ThisCallBox::FUN_006110da(int *param_2, uint *param_3) {
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  void *_Memory;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 local_34 [16];
  uint local_24 [5];
  uint local_10;
  int local_c;
  uint local_8;
  
  piVar5 = param_2;
  uVar3 = *(ushort *)((int)param_2 + 0x52);
  uVar6 = param_2[0x14] & 0xffff;
  if (((int *)this)[0x3b] != 0) {
    if (param_2[0x14] == 0xffffffff) {
      return 0;
    }
    if (uVar6 != 0xffff) {
      FUN_00673533(local_34,0x20,"v_%s%d",(&PTR_s_UNKNOWN_006df648)[uVar6],uVar3);
      local_24[3] = (int)local_24[3] & 0xffffff;
      iVar7 = FUN_005e7078(local_34,param_2[2],1);
      if (iVar7 < 0) {
        return iVar7;
      }
      ((int *)this)[0x52] = ((int *)this)[0x52] + 1;
      if ((((*(byte *)(((int *)this) + 0xd) & 1) != 0) && (iVar7 = param_2[0x11], iVar7 != 0)) &&
         ((*(int *)(iVar7 + 4) == 5 && (iVar7 = *(int *)(iVar7 + 0x14), *(int *)(iVar7 + 4) == 2))))
      {
        pcVar8 = *(char **)(iVar7 + 0x18);
        pcVar1 = pcVar8 + 1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        _Memory = _malloc((size_t)(pcVar8 + (3 - (int)pcVar1)));
        if (_Memory == (void *)0x0) {
          return -0x7ff8fff2;
        }
        FUN_0067101f(_Memory,&DAT_006a5ec0,*(undefined4 *)(iVar7 + 0x18));
        iVar7 = FUN_005e7078(_Memory,param_2[2],1);
        _free(_Memory);
        if (iVar7 < 0) {
          return iVar7;
        }
        ((int *)this)[0x52] = ((int *)this)[0x52] + 1;
      }
    }
    if (param_3 == (uint *)0x0) {
      return 0;
    }
    uVar6 = param_2[0x14];
    goto LAB_00611335;
  }
  param_2 = (int *)0xd;
  switch(uVar6) {
  case 1:
    param_2 = (int *)0x0;
    break;
  case 2:
    param_2 = (int *)0x1;
    break;
  case 3:
    param_2 = (int *)0x2;
    break;
  case 4:
    param_2 = (int *)0x3;
    break;
  case 5:
    param_2 = (int *)0x4;
    break;
  case 6:
    param_2 = (int *)0x5;
    break;
  case 7:
    param_2 = (int *)0x6;
    break;
  case 8:
    param_2 = (int *)0x7;
    break;
  case 9:
    param_2 = (int *)0x8;
    if (uVar3 != 0) {
      return -0x7fffbffb;
    }
    goto LAB_00611214;
  case 10:
    param_2 = (int *)0x9;
    break;
  case 0xb:
    param_2 = (int *)0xa;
    break;
  case 0xc:
    param_2 = (int *)0xb;
    break;
  case 0xd:
    param_2 = (int *)0xc;
    break;
  case 0xe:
    break;
  default:
    goto LAB_006113a3;
  }
  if (0xf < uVar3) {
LAB_006113a3:
    return -0x7fffbffb;
  }
LAB_00611214:
  uVar6 = (uint)param_2 | (uint)(uVar3 | 0x8000) << 0x10;
  iVar7 = FUN_0061a26f(0x1f);
  if (iVar7 < 0) {
    return iVar7;
  }
  iVar7 = FUN_00618c39(uVar6);
  if (iVar7 < 0) {
    return iVar7;
  }
  if ((*(byte *)(((int *)this) + 0xd) & 1) != 0) {
    local_c = 0;
    local_8 = 0;
    local_24[0] = 0xffffffff;
    local_24[1] = 0xffffffff;
    local_24[2] = 0xffffffff;
    local_24[3] = 0xffffffff;
    if (((int *)this)[2] != 0) {
      iVar7 = *piVar5;
      puVar9 = (undefined4 *)((int *)this)[5];
      do {
        piVar4 = (int *)*puVar9;
        if (((iVar7 == *piVar4) && (piVar5[1] == piVar4[1])) && (piVar5[2] == piVar4[2])) {
          local_24[piVar4[3]] = local_8;
        }
        local_8 = local_8 + 1;
        puVar9 = puVar9 + 1;
      } while (local_8 < (uint)((int *)this)[2]);
    }
    uVar10 = 0;
    iVar7 = local_c;
    do {
      if (local_24[uVar10] != 0xffffffff) {
        local_24[iVar7] = (int)local_24[uVar10];
        iVar7 = iVar7 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 4);
    iVar7 = (**(code **)(*((int *)this) + 0x60))(local_24,iVar7,&local_c,1);
    if (iVar7 < 0) {
      return iVar7;
    }
  }
  iVar7 = (**(code **)(*((int *)this) + 0x74))(piVar5,local_24 + 4,&local_10);
  if (iVar7 < 0) {
    return iVar7;
  }
  iVar7 = (**(code **)(*((int *)this) + 0x54))
                    (((local_10 | 0xfffffff8) << 0x14 | local_10 & 0x18) << 8 | local_24[4] & 0x7ff,
                     0xf0000);
  if (iVar7 < 0) {
    return iVar7;
  }
  iVar7 = (**(code **)(*((int *)this) + 0x50))();
  if (iVar7 < 0) {
    return iVar7;
  }
  iVar7 = FUN_0061663f();
  if (iVar7 < 0) {
    return iVar7;
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
LAB_00611335:
  *param_3 = uVar6;
  return 0;
}
