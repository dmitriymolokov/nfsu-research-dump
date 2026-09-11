/* spd-match: far pct=47.37 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.5q/va_00683ED0 */
#include "ghidra_compat.h"

void __stdcall FUN_00684040(int param_1, int param_2, int param_3);
unsigned int __stdcall FUN_006843b0(int param_1, char param_2, int param_3);

extern char cRam00718264;
extern int uRam0071826c;

unsigned int __cdecl FUN_00683ed0(int param_1)
{
  unsigned int uVar1;
  
  if (param_1 == 0x3a) {
    cRam00718264 = (cRam00718264 == '\0');
    return 0;
  }
  FUN_00684040(uRam0071826c, 0x717f48, 0x100);
  uVar1 = FUN_006843b0(0x717f48, cRam00718264, param_1);
  return uVar1;
}
