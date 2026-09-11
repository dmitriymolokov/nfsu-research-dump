/* spd-match: far pct=8.05 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00411750 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0073639c;
extern int DAT_007363a0;
extern unsigned char *DAT_007363a4;
extern int DAT_007363a8;
extern int DAT_007363ac;
extern int DAT_007363b0;
void __fastcall FUN_00411750(char * obj, undefined4 param_1, undefined1 param_2, char param_3)

{
  int iVar1;
  char cVar2;

  DAT_007363ac = param_1;
  DAT_007363b0 = param_2;
  DAT_0073639c = obj;
  DAT_007363a8 = 1;
  if (param_3 != '\0') {
    *obj = '\0';
    DAT_007363a0 = 0;
    DAT_007363a4 = 0;
    return;
  }
  DAT_007363a4 = 0;
  if (obj != (char *)0x0) {
    cVar2 = *obj;
    while (cVar2 != '\0') {
      iVar1 = DAT_007363a4 + 1;
      DAT_007363a4 = DAT_007363a4 + 1;
      cVar2 = obj[iVar1];
    }
  }
  DAT_007363a0 = DAT_007363a4;
  return;
}
