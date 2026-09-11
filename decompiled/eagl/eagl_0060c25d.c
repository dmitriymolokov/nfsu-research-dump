/* spd-match: far pct=11.49 flags=/Ob2 /c /nologo /TC method=m39 source=m39/m39/va_0060C25D */
#include <stdlib.h>
struct ShaderData { char pad[0x14][20]; int field_14; char pad2[0x3C]; int field_60; int field_88; char pad3[0xA4]; int* field_134; int* field_140; int* field_144; };
extern int __fastcall FUN_0060a0f3(int*, int, int*, int);
extern int __fastcall FUN_00609c31(int*, int, int*);
extern void __fastcall FUN_005fbec8(void*, int, int, const char*, int);
extern void __fastcall FUN_005f7186(int);
int __fastcall FUN_0060c25d(struct ShaderData* pData) {
    int* slots[4] = {0, 0, 0, 0};
    int* remap[4] = {0, 0, 0, 0};
    int count = 0, i = 0, res = -0x7fffbffb;
    if (pData->field_88 != 4) return res;
    for (i = 0; i < pData->field_88; ++i) {
        int* entry = (int*)(pData->field_144[i]);
        if (entry && *entry) {
            int val = *entry;
            if ((val & 0xFF000000) == 0xE1000000) { remap[i] = (int*)val; }
            else {
                int mask = (val & 0xFF000000) != 0x34000000 ? (val & 0xFFFFFF) : 0;
                int* table = (int*)pData->field_14;
                if (*(int*)(table[*(int*)(val + 8 + mask*4)] * 4) == pData->field_60) {
                    slots[count++] = (int*)val;
                    remap[i] = (int*)val;
                } else { remap[i] = (int*)val; }
            }
            pData->field_144[i] = 0;
        }
    }
    return res;
}
