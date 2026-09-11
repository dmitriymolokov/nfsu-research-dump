/* spd-match: far pct=17.71 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_005337F0 */
#include <windows.h>
struct State { unsigned char pad[544]; float data[3]; float extra[3]; float val[3]; float extra2[3]; };
void __fastcall FUN_005337f0(void* p_edi) {
    struct State* s = (struct State*)0;
    extern void __stdcall FUN_0052e3f0();
    extern void __stdcall FUN_00567370();
    FUN_0052e3f0();
    *(DWORD*)0 = 0x6be428;
    *(DWORD*)0x230 = 0;
    s->data[0] = *(float*)((char*)p_edi + 0);
    s->data[1] = *(float*)((char*)p_edi + 4);
    s->data[2] = *(float*)((char*)p_edi + 8);
    s->extra[0] = 100.0f; s->extra[1] = 5.0f;
    *(BYTE*)0x220 = 0; *(DWORD*)0x224 = 0; *(DWORD*)0x228 = 0;
    FUN_00567370();
}
