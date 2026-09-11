/* spd-match: far pct=21.62 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00565D70 */
#include "ghidra_compat.h"
int __cdecl FUN_00565810(void);
extern int DAT_007301d4[];
int __cdecl FUN_00565d70(int obj) {
  int iVar1;
  int* table = (int*)DAT_007301d4;
  iVar1 = table[obj];
  if (iVar1 == 0) return 0;
  if (obj == 0) return 0x6300000;
  iVar1 = FUN_00565810();
  iVar1 -= 0x58;
  if (iVar1 < 0) return 0;
  return iVar1;
}
