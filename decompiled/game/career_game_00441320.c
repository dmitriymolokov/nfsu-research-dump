/* spd-match: far pct=17.65 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00441320 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004400d0();
int __cdecl FUN_00567220();
extern int DAT_00736184;
void __fastcall FUN_00441320(int obj)

{
  int *piVar1;
  int iVar2;

  int extraout_ECX;
  undefined4 *extraout_EDX;
  int *piVar3;
  
  if (DAT_00736184 != 0) {
    piVar3 = (int *)(obj + 0x50);
    piVar1 = *(int **)(obj + 0x50);
    while (piVar1 != piVar3) {
      iVar2 = *(int *)*piVar3;
      piVar1 = (int *)((int *)*piVar3)[1];
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      FUN_004400d0();
      iVar2 = *(int *)(extraout_ECX + 0x18);
      *extraout_EDX = *(undefined4 *)(extraout_ECX + 0x10);
      *(int *)(extraout_ECX + 0x18) = iVar2 + -1;
      *(undefined4 **)(extraout_ECX + 0x10) = extraout_EDX;
      piVar1 = (int *)*piVar3;
    }
    FUN_00567220();
    DAT_00736184 = 0;
  }
  return;
}
