/* spd-match: far pct=17.72 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.6-control100/va_00466550 */
#include "ghidra_compat.h"
extern float _DAT_006cca04;
unsigned char __fastcall FUN_00466550(void *p) {
  int ecx = *(int *)((char *)p + 0x64);
  int eax = *(int *)(ecx + 0x258);
  if (*(unsigned char *)(eax + 0x15) == 3) {
    float f;
    int ptr = *(int *)(eax + 0x60);
    f = *(float *)(ptr + 0x78);
    if (f < 0) f = -f;
    if (!(f >= _DAT_006cca04)) return 1;
  }
  ecx = *(int *)(ecx + 0x25c);
  if (*(unsigned char *)(ecx + 0x15) == 3) {
    float f;
    int ptr = *(int *)(ecx + 0x60);
    f = *(float *)(ptr + 0x78);
    if (f < 0) f = -f;
    if (f >= _DAT_006cca04) return 1;
  }
  return 0;
}
