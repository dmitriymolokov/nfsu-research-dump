/* spd-match: far pct=21.64 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_13/attempt_05_targeted_thiscall */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880(...);
extern int DAT_006a782c;
extern int DAT_006a7830;
extern void *PTR_FUN_006dfa9c;
extern void *PTR_LAB_006a7814;
extern void *PTR_LAB_006a7818;
extern void *PTR_LAB_006a781c;
extern void LAB_0061f5f0(...);
extern void LAB_0061f600(...);

struct ThisCallBox {
  undefined4 * FUN_00620bc0(undefined4 param_2);
};
undefined4 * ThisCallBox::FUN_00620bc0(undefined4 param_2) {
  undefined4 *puVar1;
  
  ((undefined4 *)this)[2] = 0;
  *((undefined4 *)this) = (unsigned int)&PTR_LAB_006a781c;
  ((undefined4 *)this)[3] = (unsigned int)((undefined4 *)this) + 8;
  ((undefined4 *)this)[1] = (unsigned int)((undefined4 *)this) + 4;
  ((undefined4 *)this)[5] = (unsigned int)((undefined4 *)this);
  ((undefined4 *)this)[4] = (unsigned int)&PTR_LAB_006a7814;
  ((undefined4 *)this)[7] = (unsigned int)((undefined4 *)this);
  ((undefined4 *)this)[9] = 0;
  ((undefined4 *)this)[10] = (unsigned int)((undefined4 *)this);
  ((undefined4 *)this)[0xb] = 0;
  ((undefined4 *)this)[0xc] = 0;
  ((undefined4 *)this)[8] = (unsigned int)&PTR_LAB_006a7818;
  ((undefined4 *)this)[0xd] = (unsigned int)((undefined4 *)this);
  ((undefined4 *)this)[0x25] = 0xf;
  ((undefined4 *)this)[0x2c] = 0;
  ((undefined4 *)this)[0x37] = 0x100;
  ((undefined4 *)this)[0x3d] = 0;
  ((undefined4 *)this)[0x3e] = 0;
  ((undefined4 *)this)[0x3f] = param_2;
  ((undefined4 *)this)[0x2a] = 0x3f800000;
  ((undefined4 *)this)[0x2b] = 0x3f800000;
  ((undefined4 *)this)[0x13] = 0;
  ((undefined4 *)this)[0x14] = 0;
  ((undefined4 *)this)[0x15] = 0;
  ((undefined4 *)this)[0x16] = 0;
  ((undefined4 *)this)[0x18] = 0;
  ((undefined4 *)this)[0x17] = 0;
  ((undefined4 *)this)[0x19] = 1;
  ((undefined4 *)this)[0x11] = 0;
  ((undefined4 *)this)[0x12] = 0;
  *(undefined1 *)(((undefined4 *)this) + 0x1a) = 1;
  ((undefined4 *)this)[0x1b] = 3;
  *(undefined1 *)(((undefined4 *)this) + 0x1c) = 0;
  ((undefined4 *)this)[0x1d] = 1;
  ((undefined4 *)this)[0x1e] = 1;
  ((undefined4 *)this)[0x1f] = 1;
  ((undefined4 *)this)[0x20] = 1;
  ((undefined4 *)this)[0x21] = 8;
  ((undefined4 *)this)[0x22] = 0;
  ((undefined4 *)this)[0x23] = 0xffffffff;
  ((undefined4 *)this)[0x24] = 0xffffffff;
  *(undefined1 *)(((undefined4 *)this) + 0x26) = 0;
  *(undefined1 *)((int)((undefined4 *)this) + 0x99) = 1;
  *(undefined1 *)((int)((undefined4 *)this) + 0x9a) = 0;
  ((undefined4 *)this)[0x27] = 0;
  ((undefined4 *)this)[0x28] = 0;
  ((undefined4 *)this)[0x29] = 0;
  ((undefined4 *)this)[0x2c] = 0;
  ((undefined4 *)this)[0x31] = 0;
  ((undefined4 *)this)[0x32] = 0xffffffff;
  ((undefined4 *)this)[0x33] = 0;
  ((undefined4 *)this)[0x34] = 1;
  ((undefined4 *)this)[0xe] = 0;
  ((undefined4 *)this)[0xf] = 0;
  ((undefined4 *)this)[0x10] = 0;
  *(undefined1 *)(((undefined4 *)this) + 0x35) = 1;
  ((undefined4 *)this)[0x36] = 0;
  puVar1 = (undefined4 *)(*(code *)PTR_FUN_006dfa9c)(((undefined4 *)this)[0x37],"Window Name");
  ((undefined4 *)this)[0x38] = (unsigned int)puVar1;
  *puVar1 = DAT_006a782c;
  puVar1[1] = DAT_006a7830;
  *(undefined1 *)(((undefined4 *)this) + 0x39) = 0;
  ((undefined4 *)this)[0x2d] = 1;
  ((undefined4 *)this)[0x2e] = 0;
  ((undefined4 *)this)[0x30] = 0;
  ((undefined4 *)this)[0x3a] = (unsigned int)&LAB_0061f5f0;
  ((undefined4 *)this)[0x3b] = (unsigned int)FUN_0040a880;
  ((undefined4 *)this)[0x3c] = (unsigned int)&LAB_0061f600;
  return ((undefined4 *)this);
}
