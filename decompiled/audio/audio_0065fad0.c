/* spd-match: far pct=10.94 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_0065FAD0 */
#include <windows.h>
int __cdecl FUN_0065f930(void);
extern float DAT_006eac18[];
extern float DAT_006eac28[];
extern float DAT_006eac38[];
void __stdcall FUN_0065fad0(int *p) {
  int *base = (int*)p[4];
  int v1 = p[1];
  int v2 = p[2];
  unsigned char *pb = (unsigned char*)p[3];
  base[-1] = v1;
  base[-2] = v2;
  while (p[0] > 0) {
    p[0] -= 0x1c;
    if (*pb == 0xee) {
      FUN_0065f930();
      base = (int*)p[4];
      v1 = p[1];
      v2 = p[2];
      base[-1] = v1;
      base[-2] = v2;
    } else {
      float f1 = DAT_006eac28[*pb >> 4];
      float f2 = DAT_006eac18[*pb >> 4];
      pb++;
      p[3] = (int)pb;
    }
  }
}
