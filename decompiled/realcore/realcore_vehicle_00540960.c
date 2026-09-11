/* spd-match: far pct=15.62 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00540960 */
#include <windows.h>
typedef struct { unsigned long v[4]; } Block;
void __fastcall FUN_00540960(Block* dst, Block* src) { Block temp = *src; *dst = temp; }
