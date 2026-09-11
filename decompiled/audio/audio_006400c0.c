/* spd-match: far pct=31.50 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.1-filter100/va_006400C0 */
#include "ghidra_compat.h"
extern int iRam0070fd64; extern int iRam0070f70c; extern int iRam0070f700; int __cdecl FUN_0063f190(int); int __cdecl FUN_0063f1a0(int); int __cdecl func_0x00683ed0(int);
int __cdecl FUN_006400C0(void) {
  int esi = 0, edi = 0, eax, edx;
  FUN_0063f190(0x70f6d4);
  while ((edx = iRam0070fd64) != iRam0070f70c) {
    if (esi != 0) break;
    eax = *(int *)(edx * 4 + 0x70fc20);
    esi = eax >> 0x10;
    edi = (signed char)eax;
    if (esi == 0) {
      esi = func_0x00683ed0(edi);
    }
    iRam0070fd64 = (edx + 1) % iRam0070f700;
  }
  FUN_0063f1a0(0x70f6d4);
  return (edi << 0x10) | (esi & 0xFFFF);
}
