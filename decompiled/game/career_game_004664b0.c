/* spd-match: far pct=41.77 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004664B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

uint __fastcall FUN_004664b0(int obj)

{

  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(obj + 100) + 600);
  iVar3 = 0;
  iVar4 = 0;
  if (*(char *)(iVar1 + 0x15) == '\0') {
    iVar3 = *(int *)(iVar1 + 0x140);
  }
  uVar2 = *(uint *)(*(int *)(obj + 100) + 0x25c);
  if (*(char *)(uVar2 + 0x15) == '\0') {
    iVar4 = *(int *)(uVar2 + 0x140);
  }
  if (((iVar3 == 0) || (iVar1 = *(int *)(iVar3 + 0x18), uVar2 = 0, iVar1 == 0)) &&
     ((iVar4 == 0 || (iVar1 = *(int *)(iVar4 + 0x18), uVar2 = 0, iVar1 == 0)))) {
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}
