/* spd-match: far pct=13.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_005fbec8();
int __cdecl FUN_0061663f();
int __cdecl FUN_0061a26f();
extern void LAB_0061a86d(void);
extern void LAB_0061a8b0(void);
extern void LAB_0061a90b(void);
extern void LAB_0061a913(void);

int __fastcall FUN_0061a7fa(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  iVar2 = param_1[0x26];
  uVar1 = *(uint *)(iVar2 + 4);
  local_c = param_1;
  if (uVar1 != 0) {
    piVar3 = *(int **)(iVar2 + 8);
    do {
      if ((*(uint *)(*(int *)(param_1[5] + *piVar3 * 4) + 0xc) != local_8) &&
         ((*(byte *)((int)param_1 + 0x92) & 0x20) != 0)) {
        pcVar5 = "cannot clip from a swizzled vector";
        goto LAB_0061a90b;
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 1;
    } while (local_8 < uVar1);
  }
  if ((*(byte *)((int)param_1 + 0x92) & 0x20) == 0) {
    if (uVar1 == 4) goto LAB_0061a86d;
    pcVar5 = "clip must be performed from a float4 vector for ps_2_0 models";
  }
  else if (uVar1 == 3) {
LAB_0061a86d:
    piVar3 = *(int **)(param_1[5] + **(int **)(iVar2 + 8) * 4);
    if (*piVar3 == param_1[0x16]) {
      iVar2 = (**(code **)(*param_1 + 0x74))(piVar3,&local_c,&local_8);
      if (-1 < iVar2) {
LAB_0061a8b0:
        iVar2 = FUN_0061a26f(0x41);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*param_1 + 0x54))
                          (((local_8 | 0xfffffff8) << 0x14 | local_8 & 0x18) << 8 |
                           (uint)local_c & 0x7ff,0xf0000);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*param_1 + 0x50))();
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = FUN_0061663f();
        if (iVar2 < 0) {
          return iVar2;
        }
        return 0;
      }
      pcVar5 = "internal error: unexpected input register type";
      uVar4 = 0;
      goto LAB_0061a913;
    }
    if (*piVar3 == param_1[0x18]) {
      local_8 = 0;
      local_c = (int *)piVar3[2];
      goto LAB_0061a8b0;
    }
    pcVar5 = "clip cannot be performed from a constant or literal";
  }
  else {
    pcVar5 = "clip must be performed from a float3 vector for ps_1_x models";
  }
LAB_0061a90b:
  uVar4 = *(undefined4 *)(iVar2 + 0x34);
LAB_0061a913:
  FUN_005fbec8(param_1,uVar4,0x1194,pcVar5);
  return -0x7fffbffb;
}
