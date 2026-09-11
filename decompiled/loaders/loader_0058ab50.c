/* spd-match: far pct=17.19 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.2-n5/va_0058AB50 */
#include <windows.h>
extern void* __cdecl FUN_00566dc0(int, const char*, int);
extern void* DAT_00734508;
extern int DAT_0073d814;
extern void* DAT_0073d81c;
extern void* DAT_0073d818;
void FUN_0058ab50(void) { void* p; p = FUN_00566dc0(0x74, "QueuedFileSlotPool", 0); DAT_00734508 = p; if (!p) return; if (DAT_0073d814 == 1) { *(void**)DAT_0073d81c = p; *(void**)((char*)p + 4) = DAT_0073d81c; DAT_0073d81c = p; *(void**)p = &DAT_0073d818; } }
