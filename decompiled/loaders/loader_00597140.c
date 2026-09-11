/* spd-match: far pct=7.62 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-cefam-ce_arity_c2660/va_00597140 */
#include "ghidra_compat.h"

int __cdecl FUN_00401cd0(...);
int __cdecl FUN_00468ec0(...);
int __cdecl FUN_00579190(...);
int __cdecl FUN_00584b80(...);
int __cdecl thunk_FUN_005abda2(...);
int unaff_EBX;
int unaff_ESI;

struct ThisCallBox {
  void FUN_00597140(undefined4 *obj, int param_2, undefined4 *param_3);
};
void ThisCallBox::FUN_00597140(undefined4 *obj, int param_2, undefined4 *param_3) {
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar5;
  float fStack_e4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  float fStack_24;
  
  local_dc = *(undefined4 *)(param_2 + 0x34);
  local_d8 = *(undefined4 *)(param_2 + 0x38);
  FUN_00401cd0();
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 1.0;
  local_c0 = 0;
  local_bc = 0.0;
  local_b8 = 0.0;
  if (obj != (undefined4 *)0x0) {
    local_bc = (float)obj[1];
    local_c0 = *obj;
    local_b8 = (float)obj[2];
  }
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  if (param_3 != (undefined4 *)0x0) {
    local_cc = param_3[1];
    local_d0 = *param_3;
    local_c8 = param_3[2];
  }
  thunk_FUN_005abda2(local_b0,*(int *)(((int)this) + 0x158) + 0xb0,local_a0);
  fVar3 = local_bc + unaff_ESI;
  fVar4 = local_b8 + unaff_EBX;
  local_64 = fStack_b4 + fStack_e4;
  FUN_00584b80(&local_cc,&local_dc);
  FUN_00401cd0();
  fStack_24 = fStack_24 - *(float *)(((int)this) + 0x174);
  iVar1 = *(int *)(((int)this) + 0x4a0);
  *(undefined4 *)(((int)this) + 0x450) = 1;
  if (iVar1 == 0) {
    FUN_00401cd0();
  }
  else {
    FUN_00401cd0();
    if (*(int *)(iVar1 + 0xe4) == 0) {
      FUN_00579190();
    }
  }
  *(float *)(((int)this) + 0xc0) = fVar3;
  *(float *)(((int)this) + 0xc4) = fVar4;
  *(float *)(((int)this) + 200) = fStack_b4 + fStack_e4;
  FUN_00401cd0();
  *(undefined4 *)(((int)this) + 0xd0) = 0;
  *(undefined4 *)(((int)this) + 0xd4) = 0;
  *(undefined4 *)(((int)this) + 0xd8) = 0;
  *(undefined4 *)(((int)this) + 0x70) = 0x459c4000;
  (**(code **)(*(int *)(((int)this) + 0x140) + 4))();
  FUN_00468ec0();
  piVar5 = *(int **)(((int)this) + 0x4b0);
  if (piVar5 != (int *)(((int)this) + 0x4b0)) {
    do {
      FUN_00401cd0();
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)(((int)this) + 0x4b0));
  }
  for (puVar2 = *(undefined4 **)(((int)this) + 0x4b8); puVar2 != (undefined4 *)(((int)this) + 0x4b8);
      puVar2 = (undefined4 *)*puVar2) {
    FUN_00401cd0();
  }
  return;
}
