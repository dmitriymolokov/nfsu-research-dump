/* spd-match: far pct=15.91 flags=/O2 /c /nologo /TP method=m39 source=m39/m39/va_0061F7E0 */
#include "ghidra_compat.h"
int __cdecl FUN_00621020();
extern int DAT_006a77c4, DAT_006a77dc, DAT_0070970c, DAT_00709720, _DAT_00709730, _DAT_00709734;
extern unsigned char *DAT_00709d7c;
struct ThisCallBox { int FUN_0061f7e0(int p1); };
int ThisCallBox::FUN_0061f7e0(int p1) {
  int eax, ebp, ebx;
  int* ctx = (int*)((int)this + 0xc);
  int val = *(int*)(*ctx + 0x58);
  if (val <= 0x10) { ebp = (int)&DAT_006a77c4; eax = 5; }
  else { ebp = (int)&DAT_006a77dc; eax = 2; }
  ebx = ebp;
  int res1 = 0, res2 = 0;
  for (int i = 0; i < eax; ++i) {
    *(int*)(*ctx + 0xd0) = 1;
    int val_table = *(int*)(ebx + i * 4);
    int fn = *(int*)(*(int*)DAT_00709d7c + 0x24);
    if (((int(__stdcall*)(void*, int, int, int, int, int))fn)(DAT_00709d7c, *(int*)(*ctx + 0xb8), 1, val_table, 0, 0) >= 0) {
        res1 = val_table; res2 = val_table; break;
    }
  }
  *(int*)(*ctx + 0x38) = res1; *(int*)(*ctx + 0x3c) = res2;
  return 1;
}
