/* spd-match: far pct=10.16 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.G.45-s0/va_00579B30 */
#include <stdlib.h>
extern void* ExceptionList;
extern void* PTR_FUN_006ba5d4;
extern void* PTR_FUN_006dfaa0;
void FUN_0047b1c0();
void FUN_0047b0b0(void*);
void FUN_00591c90(void*);
void FUN_00578c70();
void __stdcall FUN_00579b30(int* p) {
  int* esi;
  p[0] = (int)&PTR_FUN_006ba5d4;
  esi = (int*)p[5];
  if (esi) {
    esi[3] = 0;
    if (esi[5]) { free((void*)esi[5]); esi[5] = 0; }
    esi[6] = 0;
    if (esi[7]) { ((void(__stdcall*)(int, int))PTR_FUN_006dfaa0)(esi[7], 0x40); esi[7] = 0; }
    esi[8] = 0;
    FUN_0047b1c0();
    esi = (int*)p[5];
    if (esi) { FUN_0047b0b0(esi); free(esi); }
  }
  if (p[0x1a]) { FUN_00591c90((void*)p[0x1a]); }
  FUN_00578c70();
}
