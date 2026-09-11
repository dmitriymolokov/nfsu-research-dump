/* spd-match: far pct=15.60 flags=/O2 /c /nologo /TC method=m39 source=m39/m39/va_00549140 */
#include <windows.h>
void __fastcall FUN_00549140(char *obj, int param_1, char *param_2, int param_3) {
  char cVar1;
  char *pcVar2;
  int iVar3;
  int diff;
  cVar1 = *param_2;
  *obj = cVar1;
  if (cVar1 != 0) {
    pcVar2 = obj;
    do {
      cVar1 = *(param_2 - (int)obj + (int)pcVar2 + 1);
      pcVar2++;
      *pcVar2 = cVar1;
    } while (cVar1 != 0);
  }
  iVar3 = 0;
  *(int *)(obj + 0x130) = param_3;
  *(int *)(obj + 0x134) = param_1;
  *(int *)(obj + 0x12c) = 0;
  diff = param_1 - param_3 + 1;
  if (diff != 0) {
    do {
      iVar3++;
    } while ((1 << (iVar3 & 0x1f)) < diff);
    *(int *)(obj + 0x12c) = iVar3;
  }
  *(int *)(obj + 0x138) = param_1 + 1;
  *(int *)(obj + 0x13c) = param_3 - 1;
  *(obj + 0x140) = 1;
}
