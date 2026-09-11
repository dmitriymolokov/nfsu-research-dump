/* spd-match: far pct=28.95 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00571F20 */
#include "ghidra_compat.h"
struct Obj { char gap1[64]; char idx; int limit; char gap2[283]; int arr[1]; };
void __fastcall FUN_00571f20(struct Obj* eax, void* edx_dummy) { int ecx = (signed char)eax->idx; int edx = *(int*)((char*)eax + 0x150); int* pEntry = (int*)((ecx * 16) + (char*)eax + 0x4c); *pEntry -= edx; eax->idx--; if ((signed char)eax->idx < eax->limit) eax->limit = -1; }
