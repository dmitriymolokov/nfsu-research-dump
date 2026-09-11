/* spd-match: far pct=15.52 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00545580 */
#include <windows.h>
extern int DAT_00740458;
extern int *DAT_0074045c;
void __fastcall FUN_00545580(int base) {
  int *p_base = (int*)base;
  int ecx = p_base[3];
  int edx = *(int*)(ecx + base + 0x14);
  int ecx_sum = edx + ecx + base + 0x18;
  int *p_eax = p_base + 4;
  int *prev;
  if (p_eax[4] == 0) p_eax[4] = 1;
  p_eax[5] = ecx_sum;
  prev = (int*)*DAT_0074045c;
  *prev = (int)p_eax;
  *DAT_0074045c = (int)p_eax;
  p_eax[1] = (int)prev;
  *p_eax = 0x740458;
}
