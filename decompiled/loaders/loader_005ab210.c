/* spd-match: far pct=10.34 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005AB210 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_005983d0();
extern int DAT_0077af30;
int __fastcall FUN_005ab210(undefined4 val, undefined4 param_1, int *param_2, char param_3)

{
  char cVar1;

  int iVar2;
  int unaff_EDI;
  
  cVar1 = FUN_005983d0(unaff_EDI,param_1,val);
  if (cVar1 == '\0') {
    return 0;
  }
  if (param_3 != '\0') {
    if (*param_2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[*param_2];
    }
    return *(short *)((int)param_2 + unaff_EDI * 2 + 4) * 0x88 + 0x27c + iVar2;
  }
  iVar2 = *param_2;
  if (unaff_EDI != 0) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[iVar2];
    }
    return *(short *)(iVar2 + 0x10) * 0x88 + 500 + iVar2;
  }
  if (-1 < iVar2) {
    return (&DAT_0077af30)[iVar2] + 0x27c;
  }
  return 0x27c;
}
