/* spd-match: far pct=58.21 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00567220 */
#include "ghidra_compat.h"

extern int __cdecl FUN_00565ce0(void* p); extern int __cdecl FUN_00566f20(void* p, int dummy); void __fastcall FUN_00567220(int* esi, int* eax) { if (!esi) return; if (*eax) { int* p1 = (int*)*esi; int* p2 = (int*)*(esi + 1); *p2 = (int)p1; *(p1 + 1) = (int)p2; } if (((*(unsigned char*)((char*)esi + 20) & 8)) && (*(esi + 6) > 0)) { FUN_00566f20(esi, 0); } { int* edi = (int*)*(esi + 2); do { esi = edi; FUN_00565ce0(esi); edi = (int*)*(esi + 2); } while (edi); } }
