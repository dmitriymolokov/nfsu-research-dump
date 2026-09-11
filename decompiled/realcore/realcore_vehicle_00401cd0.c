/* spd-match: far pct=7.37 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00401CD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"
void __fastcall FUN_00401cd0(float *a, float *c) {
  float t1 = c[3]; float t2 = c[2]; float t3 = c[0]; float t4 = c[1];
  a[1] = t4; a[0] = t3; a[2] = t2; a[3] = t1;
  t1 = c[7]; t2 = c[6]; t3 = c[4]; t4 = c[5];
  a[5] = t4; a[4] = t3; a[6] = t2; a[7] = t1;
  t1 = c[11]; t2 = c[10]; t3 = c[8]; t4 = c[9];
  a[9] = t4; a[8] = t3; a[10] = t2; a[11] = t1;
  t1 = c[15]; t2 = c[14]; t3 = c[12]; t4 = c[13];
  a[13] = t4; a[12] = t3; a[14] = t2; a[15] = t1;
}
