/* spd-match: far pct=8.53 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00574A70 */
#include <windows.h>
extern int DAT_007041c0;
extern unsigned char DAT_00704158;
extern float DAT_006cc7c4;
void __fastcall FUN_00574a70(int pTarget, int edi_val, int esi_val) {
  unsigned char bVar = 0x20;
  unsigned char cVar = 0x0C;
  int count = DAT_007041c0;
  unsigned char* p = &DAT_00704158;
  if (count > 0) {
    do {
      if (*(int*)(p - 0x10) == edi_val) {
        if (esi_val == 1) { bVar = p[-1]; cVar = p[-2]; }
        else if (esi_val == 2) { bVar = p[1]; cVar = p[0]; }
        else if (esi_val == 3) { bVar = p[3]; cVar = p[2]; }
      }
      p += 0x14;
    } while (--count != 0);
  }
  *(unsigned char*)(pTarget + 0x28) = cVar;
  *(float*)(pTarget + 8) = DAT_006cc7c4 - (float)bVar;
  *(float*)(pTarget + 0x10) = (float)bVar + DAT_006cc7c4;
}
