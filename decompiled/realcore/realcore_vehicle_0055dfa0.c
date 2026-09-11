/* spd-match: far pct=10.53 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0055DFA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_004ab510();
int __cdecl FUN_00556770();
int __cdecl FUN_005567b0();
int __cdecl FUN_0055dcf0();
int __cdecl FUN_0055e3b0();
extern void LAB_0055dfe5(void);
void __fastcall FUN_0055dfa0(int val)

{

  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  
  iVar4 = *(int *)(unaff_ESI + 0x70);
  if (val == -0x6edfbf62) {
    iVar1 = FUN_00556770();
    if (iVar4 == iVar1) goto LAB_0055dfe5;
    uVar2 = FUN_005567b0();
  }
  else {
    if (val != -0x4a68e40f) goto LAB_0055dfe5;
    iVar1 = *(int *)(unaff_ESI + 0x70);
    iVar3 = FUN_005567b0();
    if (iVar1 == iVar3) goto LAB_0055dfe5;
    uVar2 = FUN_00556770();
  }
  *(undefined4 *)(unaff_ESI + 0x70) = uVar2;
LAB_0055dfe5:
  iVar1 = *(int *)(unaff_ESI + 0x70);
  if (iVar1 != iVar4) {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      iVar4 = FUN_004ab510();
      *(int *)(iVar4 + 8) = (int)*(short *)(*(int *)(iVar1 + 0xc) + 0x6c);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(*(int *)(unaff_ESI + 0x70) + 0x18);
    }
    FUN_0055e3b0(unaff_ESI);
  }
  FUN_0055dcf0();
  return;
}
