/* spd-match: far pct=21.43 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00600FA7 */
#include <malloc.h>
struct Frame { int local_78; int buf[32]; };
typedef unsigned int uint;
extern void __cdecl FUN_005fb8ae(void);
uint __fastcall FUN_00600fa7(int ebx) { struct Frame f; f.local_78 = 0; if (*(unsigned char*)(ebx + 0x34) & 8) return 0; FUN_005fb8ae(); return 0; }
