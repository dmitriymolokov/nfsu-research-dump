/* spd-match: far pct=16.30 flags=/Ob2 /c /nologo /TP method=m39 source=m39/m39/va_00613865 */
#include <windows.h>
#define undefined4 int
#define uint unsigned int
int __stdcall FUN_00613865(int ecx_val, uint* p2, int p3, uint p4, int p5, uint* p6, int p7) {
  int local_vars[5] = {0,0,0,0, *p2};
  int p1 = ecx_val;
  uint mask = local_vars[4] & 0xFF000000;
  if (mask == 0x30000000 || mask == 0xFA000000) {
    return 0;
  }
  return 1;
}
