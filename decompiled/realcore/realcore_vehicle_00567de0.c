/* spd-match: far pct=16.95 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00567DE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);


struct ThisCallBox {
  void FUN_00567de0(int val, char *param_2);
};
void ThisCallBox::FUN_00567de0(int val, char *param_2)

{
  char * param_1 = (char *)this;
  char *pcVar1;

  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = *param_1;
  iVar3 = 0;
  if (cVar2 != '\0') {
    iVar4 = val - (int)param_1;
    do {
      param_1[iVar4] = cVar2;
      cVar2 = param_1[1];
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
  }
  cVar2 = *param_2;
  while (cVar2 != '\0') {
    *(char *)(iVar3 + val) = cVar2;
    pcVar1 = param_2 + 1;
    iVar3 = iVar3 + 1;
    param_2 = param_2 + 1;
    cVar2 = *pcVar1;
  }
  *(undefined1 *)(iVar3 + val) = 0;
  return;
}
