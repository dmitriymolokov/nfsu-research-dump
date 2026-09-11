/* spd-match: far pct=11.11 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00437FE0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00437fe0(int obj)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = *(int *)(obj + 4);
  uVar1 = *(undefined4 *)(iVar3 + 100);
  uVar2 = *(undefined4 *)(iVar3 + 0x68);
  *(undefined4 *)(obj + 0x210) = *(undefined4 *)(iVar3 + 0x60);
  *(undefined4 *)(obj + 0x214) = uVar1;
  *(undefined4 *)(obj + 0x218) = uVar2;
  iVar3 = *(int *)(obj + 4);
  uVar1 = *(undefined4 *)(iVar3 + 0x74);
  uVar2 = *(undefined4 *)(iVar3 + 0x78);
  *(undefined4 *)(obj + 0x220) = *(undefined4 *)(iVar3 + 0x70);
  *(undefined4 *)(obj + 0x224) = uVar1;
  *(undefined4 *)(obj + 0x228) = uVar2;
  *(undefined4 *)(obj + 0x238) = 1;
  return;
}
