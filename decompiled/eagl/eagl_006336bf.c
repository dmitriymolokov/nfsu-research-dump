/* spd-match: far pct=16.39 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_006336BF */
#include "ghidra_compat.h"
extern void __stdcall FUN_00629140(int, void*, void*, int);
void __fastcall FUN_006336BF(int ecx, int edx, int p1, int p2, int p3) {
  int buf[12];
  int val1 = *(int*)(ecx + 0);
  int val2 = *(int*)(ecx + 8);
  int val3 = *(int*)(ecx + 12);
  int reg_edx = *(int*)(edx + 0x28);
  buf[9] = edx;
  buf[8] = val1;
  buf[11] = val2;
  buf[12] = val3;
  FUN_00629140(reg_edx, &buf[9], &buf[6], buf[8]);
}
