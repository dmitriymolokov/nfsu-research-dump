/* spd-match: far pct=14.91 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005283F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_007356a8;
extern int DAT_007356ac;
extern unsigned char *DAT_007361f0;
void __fastcall FUN_005283f0(int * obj, undefined4 param_1, int param_2, int param_3)

{
  int iVar1;
  int *piVar2;

  piVar2 = DAT_007361f0;
  if ((DAT_007361f0 != (int *)0x0) && (*DAT_007361f0 == 8)) {
    *obj = 0;
    return;
  }
  *obj = *(int *)(param_3 + 0x70) * *obj >> 0xf;
  if (param_2 < 4) {
    if (*(char *)(DAT_007356a8 + 0x84) != '\0') {
      *obj = 0;
    }
    if ((piVar2 != (int *)0x0) && ((iVar1 = *piVar2, iVar1 == 1 || (iVar1 == 7)))) {
      *obj = 0;
    }
    *obj = *(int *)(param_2 * 0xd10 + 0x398 + DAT_007356ac) * *obj >> 0xf;
  }
  return;
}
