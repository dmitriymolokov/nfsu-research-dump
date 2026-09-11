/* spd-match: far pct=31.50 flags=/O1 /c /nologo /TC method=m39 source=m39/4.1.G.4-float/va_00671E13 */
#include <string.h>
typedef unsigned char uchar;
extern int DAT_00717aa8;
extern int DAT_00717ab0;
extern int DAT_00793340;
int __cdecl FUN_00679330();
int __cdecl __mbsnbicoll(const uchar *, const uchar *, int);
int __stdcall FUN_00671E13(const uchar *param_1) {
  int *piVar1;
  int iVar2;
  int iVar3;
  if (DAT_00793340 == 0) return 0;
  piVar1 = (int *)DAT_00717aa8;
  if (piVar1 == 0) return 0;
  if (DAT_00717ab0 != (int)piVar1) {
    if (FUN_00679330() != 0) return 0;
    piVar1 = (int *)DAT_00717aa8;
    if (piVar1 == 0) return 0;
  }
  if (param_1 == 0) return 0;
  iVar3 = (int)strlen((const char *)param_1);
  while (*piVar1 != 0) {
    if ((int)strlen((const char *)*piVar1) > iVar3) {
      if (((uchar *)*piVar1)[iVar3] == '=') {
        if (__mbsnbicoll((const uchar *)*piVar1, param_1, iVar3) == 0) {
          return *piVar1 + iVar3 + 1;
        }
      }
    }
    piVar1++;
  }
  return 0;
}
