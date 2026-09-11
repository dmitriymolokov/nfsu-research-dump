/* spd-match: far pct=10.00 flags=/O1 /Gr /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_0057F970 */
#include <math.h>
#include "ghidra_compat.h"
extern int __cdecl FUN_0057f2b0(int);
extern int __cdecl FUN_00580590(int);
extern int __cdecl FUN_00674898(void);
extern float _DAT_006cc7b8;
extern float _DAT_006f0d58;
extern float _DAT_006f0d5c;
void __cdecl FUN_0057f970(int obj, float param_1, int param_2, char param_3, float param_4) {
  float local_4 = param_1;
  if (param_3) {
    local_4 = (_DAT_006f0d5c - _DAT_006f0d58) * param_1 * _DAT_006cc7b8 + _DAT_006f0d58;
  }
  do {
    if (*(signed char*)(obj + 0x424) == -1) FUN_0057f2b0(1);
    if (fabsf(local_4 - *(float*)(obj + 0x428)) <= param_4) break;
  } while (1);
  FUN_00580590(obj);
}
