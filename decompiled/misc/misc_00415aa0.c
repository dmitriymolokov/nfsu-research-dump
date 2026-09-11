/* spd-match: far pct=15.65 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00415AA0 */
#include <windows.h>
void __fastcall FUN_00415aa0(int val, void* p) {
  float *val_ptr = (float*)((char*)p + 0x110);
  float *min_ptr = (float*)((char*)p + 0x108);
  float *max_ptr = (float*)((char*)p + 0x10c);
  float *add_ptr = (float*)((char*)p + 0x118);
  if (val == 0x9120409e) {
    *val_ptr -= *add_ptr;
  } else if (val == (int)0xb5971bf1) {
    *val_ptr += *add_ptr;
  } else goto LAB_00415b06;
  if (*min_ptr < *val_ptr) *val_ptr = *min_ptr;
  if (*val_ptr < *max_ptr) *val_ptr = *max_ptr;
LAB_00415b06:
  ((void (__stdcall *)(void*))(*(void***)((char*)p + 0xf4))[4])(p);
}
