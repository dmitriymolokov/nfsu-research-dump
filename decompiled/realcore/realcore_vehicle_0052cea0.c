/* spd-match: far pct=28.57 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0052CEA0 */
#include <stddef.h>
int FUN_0052cea0(int arg) {
  int val;
  val = arg - 1;
  if ((unsigned int)val > 0x19) return -1;
  switch (((unsigned char*)0x52cf00)[val]) {
    case 0: return 5;
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    case 4: return 4;
    case 5: return 0;
    case 6: return 7;
    default: return -1;
  }
}
