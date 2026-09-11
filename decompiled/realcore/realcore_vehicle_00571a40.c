/* spd-match: far pct=8.49 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00571A40 */
#include <windows.h>
extern int DAT_006f08a4;
extern int DAT_0073ad34;
void __fastcall FUN_00571a40(void* ecx, char* edx) {
    char* esi = (char*)ecx;
    char* edi = (char*)edx;
    char val;
    char* dst = esi + 8;
    val = *edi;
    *dst = val;
    if (val != 0) {
        char* p = dst;
        do {
            val = edi[p - dst + 1];
            p++;
            *p = val;
        } while (val != 0);
    }
    *(int*)((char*)esi + 0x28) = DAT_0073ad34;
    *(int*)((char*)esi + 0x34) = 0;
    *(int*)((char*)esi + 0x38) = 0;
    *(char*)((char*)esi + 0x3c) = 0;
    *(char*)((char*)esi + 0x3d) = 0;
    *(char*)((char*)esi + 0x3e) = 0;
    *(char*)((char*)esi + 0x3f) = 0;
    *(char*)((char*)esi + 0x41) = 0;
    *(short*)((char*)esi + 0x42) = 0;
    *(int*)((char*)esi + 0x48) = 0;
    *(int*)((char*)esi + 0x14c) = 0;
    *(int*)((char*)esi + 0x150) = 0;
    *(int*)((char*)esi + 0x154) = 0;
    *(int*)((char*)esi + 0x30) = DAT_006f08a4;
    *(char*)((char*)esi + 0x40) = (char)0xff;
    *(int*)((char*)esi + 0x44) = -1;
}
