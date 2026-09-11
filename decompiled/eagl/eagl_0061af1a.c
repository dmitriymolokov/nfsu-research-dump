/* spd-match: far pct=16.07 flags=/Og /c /nologo /TP method=m39 source=m39/m39/va_0061AF1A */
#include "ghidra_compat.h"
#define THISCALL_RET_VAL -2147483643
int __cdecl FUN_005fbec8(void* p, int a, int b, const char* s);
int __cdecl FUN_0061aea7(void* p, int a);
int FUN_0061af1a(void* p_this, int p2, int* p3, int* p4, unsigned int p5, unsigned int p6, int p7) {
  int* p_ecx;
  int ecx_val;
  if (((p6 < p5) && (p6 == 1))) {
    p_ecx = (int*)((char*)p_this + 0x98);
    ecx_val = *(int*)p_ecx;
    if (*(int*)(*(int*)(ecx_val + 8)) == *p4) {
      return FUN_0061aea7(p_this, p2);
    }
  }
  if (p6 != p5) {
    FUN_005fbec8(p_this, 0, 0x12d3, "internal error: size mismatch in scalar instruction");
    return THISCALL_RET_VAL;
  }
  return 0;
}
