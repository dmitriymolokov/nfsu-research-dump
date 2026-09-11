/* spd-match: far pct=7.89 flags=/O2 /c /nologo /TP method=m39 source=m39/4.1.G.45-s0/va_00575A10 */
#include <memory.h>
struct Object { int pad[1]; int count; float data[128]; };
void __fastcall FUN_00575a10(Object* ecx_obj, void* edx_unused, int param_2) {
  int count = ecx_obj->count;
  if (count > 0 && count < 4) {
    char* base = (char*)param_2 + ((count * 5 + 0x6e) * 16);
    memcpy((char*)ecx_obj + 0x170, base, 32);
    memcpy((char*)ecx_obj + 0x190, base + 32, 32);
    float* fbase = (float*)base;
    ecx_obj->data[6] += fbase[17];
    ecx_obj->data[18] += fbase[17];
    ecx_obj->data[30] += fbase[18];
    ecx_obj->data[42] += fbase[18];
    ecx_obj->data[2] -= fbase[16];
  }
}
