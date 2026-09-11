/* spd-match: far pct=23.96 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00465700 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00466500();
int __cdecl FUN_005302f0();
extern int DAT_006f1dd8;
void __fastcall FUN_00465700(int * obj)

{
  int *piVar1;
  char cVar2;

  uint uVar3;
  int iVar4;
  
  iVar4 = *obj;
  piVar1 = (int *)obj[1];
  *piVar1 = iVar4;
  *(int **)(iVar4 + 4) = piVar1;
  if (DAT_006f1dd8 != 0) {
    FUN_005302f0();
  }
  cVar2 = FUN_00466500();
  if (cVar2 != '\0') {
    iVar4 = *(int *)(obj[0x19] + 600);
    if (*(char *)(iVar4 + 0x15) == '\x03') {
      iVar4 = *(int *)(obj[0x19] + 0x25c);
    }
    if (iVar4 != 0) {
      uVar3 = *(int *)(iVar4 + 0x130) - 1;
      *(uint *)(iVar4 + 0x130) = uVar3 & ((int)uVar3 < 0) - 1;
    }
  }
  return;
}
