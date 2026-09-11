/* spd-match: far pct=9.82 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2440_void_uint */
#include "ghidra_compat.h"

int __cdecl FUN_00440740(...);
int __cdecl FUN_004834e0(...);
int __cdecl FUN_00564cd0(...);
extern int DAT_00735f5c;
extern void *PTR_FUN_006c7fc8;

struct ThisCallBox {
  undefined4 * FUN_00489360(int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, undefined4 param_7);
};
undefined4 * ThisCallBox::FUN_00489360(int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, undefined4 param_7) {
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  FUN_004834e0();
  *((undefined4 *)this) = (unsigned int)&PTR_FUN_006c7fc8;
  ((undefined4 *)this)[0xb] = param_2;
  ((undefined4 *)this)[0xd] = 0;
  ((undefined4 *)this)[0xe] = 0;
  ((undefined4 *)this)[0xf] = 0;
  ((undefined4 *)this)[0x10] = 0;
  *(undefined2 *)(((undefined4 *)this) + 0x11) = 0;
  ((undefined4 *)this)[0x12] = (uint)*(ushort *)(param_2 + 0x3b4);
  ((undefined4 *)this)[0x13] = 0;
  uVar1 = FUN_00564cd0(*(undefined4 *)(param_2 + 0x98));
  ((undefined4 *)this)[0x16] = 0;
  ((undefined4 *)this)[0x15] = uVar1 & 0xffff;
  ((undefined4 *)this)[0xc3] = 0;
  ((undefined4 *)this)[0xc4] = 0;
  ((undefined4 *)this)[0xc5] = 0;
  ((undefined4 *)this)[0xc6] = 0;
  ((undefined4 *)this)[200] = 0;
  ((undefined4 *)this)[0xc9] = 0;
  ((undefined4 *)this)[0xca] = 0;
  FUN_00440740();
  ((undefined4 *)this)[0xcb] = param_5;
  ((undefined4 *)this)[0xe6] = param_7;
  ((undefined4 *)this)[0xcc] = param_4;
  if (param_6 == 0) {
    ((undefined4 *)this)[0xd] = 0;
  }
  else {
    ((undefined4 *)this)[0xd] = 0x3f800000;
  }
  ((undefined4 *)this)[0x17] = 0;
  ((undefined4 *)this)[0x18] = 0;
  ((undefined4 *)this)[0xe1] = 0;
  ((undefined4 *)this)[0xe3] = 0;
  ((undefined4 *)this)[0xe2] = 0;
  puVar3 = ((undefined4 *)this) + 0xcd;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  bVar4 = DAT_00735f5c == 0;
  ((undefined4 *)this)[0xe4] = 0;
  ((undefined4 *)this)[0xe5] = 0x3f800000;
  ((undefined4 *)this)[0x19] = *(undefined4 *)(param_2 + 0x3d0);
  if (bVar4) {
    *(undefined4 *)(((undefined4 *)this)[7] + 0x280) = 0;
    *(undefined4 *)(((undefined4 *)this)[7] + 0x284) = 0;
  }
  ((undefined4 *)this)[0xc] = param_3;
  ((undefined4 *)this)[0xe7] = 0;
  ((undefined4 *)this)[0x1a] = 0x3f800000;
  return ((undefined4 *)this);
}
