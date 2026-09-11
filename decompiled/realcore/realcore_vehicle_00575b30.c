/* spd-match: far pct=18.35 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00575B30 */
#include <windows.h>
void __fastcall FUN_00575b30(void* eax, void* edx, int esi) {
  int i = *(int*)((char*)edx + 0x28);
  if (i > 0 && i < 4) {
    volatile float* src = (volatile float*)(esi + ((i + 0x6c) << 4));
    volatile float* dst = (volatile float*)((char*)eax + 0x264);
    dst[0] += src[0];
    dst[1] += src[1];
    dst[2] += src[2];
  }
  i = *(int*)((char*)edx + 0x24);
  if (i > 0 && i < 4) {
    volatile float* src = (volatile float*)(esi + ((i + 0x69) << 4));
    volatile float* dst = (volatile float*)((char*)eax + 0x264);
    dst[0] += src[0];
    dst[1] += src[1];
    dst[2] += src[2];
  }
}
