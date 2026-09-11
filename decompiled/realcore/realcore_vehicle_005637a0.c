/* spd-match: far pct=31.94 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005637A0 */
#include "ghidra_compat.h"
extern int DAT_006ee6f0;
int __cdecl FUN_0041f060(int, void*);
int __cdecl FUN_0059fe10(int, void*);
int unaff_ESI;
void __fastcall FUN_005637a0(int val) {
  int i, base, *table;
  base = unaff_ESI;
  *(int*)(base + 0x2ee78) += val;
  if (*(int*)(base + 0x2ee78) > *(int*)(base + 0x2ee74) - 9) *(int*)(base + 0x2ee78) = *(int*)(base + 0x2ee74) - 9;
  if (*(int*)(base + 0x2ee78) < 0) *(int*)(base + 0x2ee78) = 0;
  table = (int*)(base + 0x50);
  for (i = 0; i < 9; ++i) {
    int offset = (*(int*)(base + 0x2ee78) + i) * 0x80;
    void *target = (void*)(offset + base + 0x74);
    if (DAT_006ee6f0 == 8 || DAT_006ee6f0 == 7) {
      FUN_0059fe10(0x100, target);
    } else {
      FUN_0041f060(table[i], target);
    }
  }
}
