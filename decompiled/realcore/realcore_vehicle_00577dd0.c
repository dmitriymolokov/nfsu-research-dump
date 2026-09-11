/* spd-match: far pct=15.91 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.45-s1/va_00577DD0 */
#include "ghidra_compat.h"
extern int __cdecl FUN_00577d10(int);
extern int __cdecl FUN_00577e60(int);
struct Node { int pad[11]; int* next; int val; };
int __cdecl FUN_00577dd0(int val) {
  int* ecx = (int*)FUN_00577d10(val);
  int* edx = (int*)0; 
  if (ecx) {
    if (edx) {
      return edx[6];
    } else {
      int* p = ecx + 11;
      if (*p == (int)p) return FUN_00577e60(0);
      if (*p) return *p - 1;
    }
  }
  return 0;
}
