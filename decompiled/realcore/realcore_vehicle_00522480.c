/* spd-match: far pct=18.06 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00522480 */
#include <windows.h>
extern int __cdecl FUN_0064c000(void*);
extern int __cdecl FUN_0064c1a0(void*, int*);
extern int DAT_00744210;
extern char* PTR_s_PlayCommonSample_006f8190;
void __fastcall FUN_00522480(int a1, int edx, int ecx, int ebx, int esi) {
  int* p_esi = (int*)esi;
  a1 = (a1 < 0) ? 0 : (a1 > 0x4b ? 0x4b : a1);
  p_esi[1] = a1;
  ecx = (ecx < 0) ? 0 : (ecx > 0x7fff ? 0x7fff : ecx);
  p_esi[2] = ecx;
  edx = (edx < 0) ? 0 : (edx > 0x1fff ? 0x1fff : edx);
  p_esi[3] = edx;
  ebx = (ebx < 0) ? 0 : (ebx > 0xffff ? 0xffff : ebx);
  p_esi[4] = ebx;
  if (FUN_0064c1a0(&DAT_00744210, &p_esi[1]) < 0) {
    FUN_0064c000(&PTR_s_PlayCommonSample_006f8190);
    FUN_0064c1a0(&DAT_00744210, &p_esi[1]);
  }
}
