/* spd-match: far pct=12.50 flags=/O1 /c /nologo /TC method=m39 source=m39/m39/va_00589A30 */
#include <math.h>
typedef int undefined4;
extern float _DAT_006b5b08;
extern char __cdecl FUN_004306c0(void);
extern int __cdecl FUN_00589930(void);
extern int __cdecl FUN_005894e0(int iVar, float *pf, int p3, int p4, int p5);
extern void __cdecl FUN_005892d0(void);
void __cdecl FUN_00589a30(int p1, float *p2, int p3, int p4, int p5) {
  int local_38;
  float f1, f2, f3, f4, f5, f6;
  if (p1 != 0) {
    f1 = *(float*)(p1 + 0x50) - p2[0];
    f2 = *(float*)(p1 + 0x54) - p2[1];
    f3 = *(float*)(p1 + 0x58) - p2[2];
    f4 = (f1 * f1) + (f2 * f2) + (f3 * f3);
    if ((float)sqrt(f4) <= _DAT_006b5b08) {
       local_38 = 0;
       if ((*(int*)(p1 + 0x18) != 0) && (FUN_004306c0() != 0)) {
         local_38 = 1;
       }
    }
  }
}
