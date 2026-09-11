/* spd-match: far pct=34.26 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0063F0A0 */
#include "ghidra_compat.h"
extern int DAT_0070f538; extern int DAT_0070fe28; extern int _DAT_0070f634;
typedef struct { int (*func)(int, int); int offset; int start_addr; int end_addr; } Entry;
uint FUN_0063f0a0(int param_1) {
  uint res = 0; Entry *curr = (Entry*)0x0070f538;
  _DAT_0070f634 = DAT_0070fe28;
  while ((int)curr < 0x0070f638) {
    if (curr->func != 0 && curr->start_addr <= DAT_0070fe28 && curr->offset == 0) {
      int diff = DAT_0070fe28 - curr->start_addr;
      curr->offset = 1;
      res |= curr->func(param_1, diff);
      curr->start_addr = DAT_0070fe28 + ((int*)curr)[-1];
      curr->offset = 0;
    }
    curr++;
  }
  return res;
}
