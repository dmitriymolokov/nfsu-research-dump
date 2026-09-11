/* spd-match: far pct=3.64 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_00448070 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  void FUN_00448070(int obj, int param_2);
};
void ThisCallBox::FUN_00448070(int obj, int param_2)

{
  char cVar1;

  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = (char *)(obj + 0x68);
  *(undefined4 *)(obj + 0x88) = ((undefined4)this);
  pcVar4 = pcVar2;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  iVar3 = 0x1f;
  param_2 = param_2 - (int)pcVar2;
  do {
    cVar1 = pcVar2[param_2];
    iVar3 = iVar3 + -1;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    pcVar2 = pcVar2 + 1;
  } while (iVar3 != 0);
  return;
}
