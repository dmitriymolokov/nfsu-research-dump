/* spd-match: far pct=8.55 flags=/Og /c /nologo /TC method=m39 source=m39/m39/va_0056CF10 */
#include <windows.h>
extern int __cdecl FUN_00440a40(int, void*, int, int, int);
extern int __cdecl FUN_0056ce10(int);
extern int __cdecl FUN_0056ceb0(void);
int *DAT_007305b0 = (int *)0x7305b0;
float DAT_0073c680;
float DAT_0073c684;
float DAT_0073c688;
float _DAT_006b5d68;
void FUN_0056cf10(int a, int *b, int c, float d, float e, int f) {
  int i, count, n1, n2, rem;
  float *p;
  float f1, f2;
  count = *b;
  for (i = 0; i < count; i++) {
    *(int **)((char *)DAT_007305b0 + i * 4) = (int *)(a + i * 16);
  }
  n1 = FUN_0056ce10(count);
  *(int **)((char *)DAT_007305b0 + count * 4) = (int *)0x7305b0;
  n2 = FUN_0056ce10(count - n1 + 1);
  *b = n2 + n1;
  if (f) {
    p = &DAT_0073c680;
    DAT_0073c684 = *(float *)(*(int **)(DAT_007305b0) + 1);
    DAT_0073c680 = **(float **)DAT_007305b0;
    DAT_0073c688 = d;
    f1 = (float)FUN_00440a40(c, &DAT_0073c680, 0, 0, (int)b + 3);
    f2 = e;
    rem = 0;
    for (i = 0; i < *b; i++) {
      p[0] = *(float *)(*(int **)((char *)DAT_007305b0 + i * 4));
      p[1] = *(float *)(*(int **)((char *)DAT_007305b0 + i * 4) + 1);
      p[2] = f1 + f2;
      if (((((unsigned char *)b)[3] == 0) || (fabsf((f1 + f2) - d) < _DAT_006b5d68)) || (FUN_0056ceb0() == 0)) rem++;
      else p += 4;
    }
    *b -= rem;
  }
}
