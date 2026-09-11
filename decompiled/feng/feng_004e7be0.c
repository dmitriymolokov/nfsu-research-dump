/* spd-match: far pct=11.95 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004E7BE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00417600();
int __cdecl FUN_004ac5a0();
int __cdecl FUN_004f8730();
extern unsigned char *DAT_00758c30;
void __fastcall FUN_004e7be0(int val)

{
  undefined4 *puVar1;

  int iVar2;
  int *piVar3;
  int *piVar4;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar2 = FUN_004f8730(unaff_EBX + 0x40,unaff_EDI,0,1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != val)) {
    *(int *)(iVar2 + 0x24) = val;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  piVar3 = _malloc(0x740);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    FUN_00417600();
  }
  piVar3[2] = unaff_EDI;
  puVar1 = *(undefined4 **)(unaff_EBX + 0x80);
  *puVar1 = piVar3;
  *(int **)(unaff_EBX + 0x80) = piVar3;
  *piVar3 = unaff_EBX + 0x7c;
  iVar2 = piVar3[2];
  piVar3[1] = (int)puVar1;
  if ((iVar2 < 0) || (9 < iVar2)) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(&DAT_00758c30 + iVar2 * 0x338);
  }
  if (*piVar4 != 0) {
    FUN_004ac5a0(piVar4,0,piVar3 + 4);
    piVar3[0x1cc] = 1;
    return;
  }
  piVar3[0x1cc] = 0;
  return;
}
