/* spd-match: far pct=7.78 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_004C39D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050(...);
int __cdecl FUN_004f65d0(...);
int __cdecl FUN_004ffb70(...);
extern int DAT_0073578c;

struct ThisCallBox {
  void FUN_004c39d0(undefined4 val, int param_2);
};
void ThisCallBox::FUN_004c39d0(undefined4 val, int param_2)

{
  char cVar1;

  int iVar2;
  char *pcVar3;
  int iVar4;
  
  if (((((int)this) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar2 = FUN_004ef050(val);
    if (iVar2 == 0) {
      return;
    }
  }
  pcVar3 = *(char **)(iVar2 + 0x24);
  iVar4 = 0x100;
  param_2 = param_2 - (int)pcVar3;
  do {
    cVar1 = pcVar3[param_2];
    iVar4 = iVar4 + -1;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
  } while (iVar4 != 0);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  return;
}
