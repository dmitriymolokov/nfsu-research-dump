/* spd-match: far pct=8.79 flags=/O1 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_00536C20 */
#include "ghidra_compat.h"
extern int DAT_007356a8;
extern int DAT_007361f0;
extern int unaff_ESI;
void __stdcall FUN_00536c20(int val, int* this_ptr, int param_2) {
  int esi = unaff_ESI;
  if ((unsigned int)val <= 3) {
    int* edx = (int*)DAT_007356a8;
    if (*((unsigned char*)edx + 0x84)) {
      *this_ptr = 0;
    }
    int* p = (int*)DAT_007361f0;
    if (p && (*p == 1 || *p == 7)) {
      *this_ptr = 0;
    }
    if (esi != 0) {
      int idx = (val * 11 + esi) * 304 + 8;
      int val_base = *(int*)((char*)param_2 + idx);
      *this_ptr = (int)((long)val_base * (*this_ptr) >> 15);
    }
  }
}
