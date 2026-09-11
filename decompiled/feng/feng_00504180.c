/* spd-match: far pct=37.50 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_00504180 */
#include <windows.h>
int __fastcall FUN_00504180(int eax, int edx, int arg1) { int mask = *(int*)(eax + 4); int res = (mask & arg1) | (0 & edx); return res ? 1 : 0; }
