/* spd-match: far pct=15.34 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_0060C8B9 */
#include <windows.h>
extern int __fastcall FUN_005f7478(void*, int, int, int);
extern int __fastcall FUN_005f74cf(int, int, int, double);
int __fastcall FUN_0060c8b9(int ecx_ptr) {
  int* esi = (int*)ecx_ptr;
  int eax, u3, u4, i;
  int* p;
  u3 = FUN_005f7478((void*)0x69ecd8, 0x189, 1, 4);
  u4 = FUN_005f74cf(u3, 0, 0, 0.0);
  esi[0x1fc / 4] = u4;
  u3 = FUN_005f74cf(u3, 0, 1, 1.0);
  esi[0x200 / 4] = u3;
  if (esi[2] != 0) {
    for (i = 0; i < esi[2]; i++) {
      p = (int*)(*(int*)(esi[0x14 / 4] + i * 4));
      p[0x24 / 4] = -1;
      if (*p == esi[0x58 / 4]) {
        if (((char*)p)[0x14] == 1) p[6] = 0x14;
        if ((esi[0x30 / 4] & 0xffff) < 0x104 && ((char*)p)[0x50] == 3) p[0x18 / 4] = 0x14;
      }
    }
  }
  return 0;
}
