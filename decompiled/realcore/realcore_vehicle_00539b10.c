/* spd-match: far pct=25.29 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00539B10 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00539b10(int obj)

{
  int iVar1;

  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = *(int *)(obj + 0x264);
  iVar1 = *(int *)(obj + 0x260);
  if (0 < iVar1) {
    piVar3 = *(int **)(obj + 0x2a8);
    iVar4 = iVar1;
    do {
      iVar2 = iVar2 + *piVar3;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)(obj + 0x270) = iVar2;
  iVar2 = *(int *)(*(int *)(obj + 0x2ac) + iVar1 * 4);
  *(int *)(obj + 0x240) = iVar2;
  *(uint *)(obj + 0x244) = (uint)(0xf < *(int *)(obj + 0x23c) * iVar2);
  return;
}
