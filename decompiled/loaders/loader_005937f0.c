/* spd-match: far pct=5.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005937F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00402ad0();
void __fastcall FUN_005937f0(byte * obj, int *param_1, byte *param_2)

{
  byte *pbVar1;
  byte bVar2;

  int iVar3;
  
  iVar3 = -1;
  bVar2 = *obj;
  while (bVar2 != 0) {
    iVar3 = iVar3 * 0x21 + (uint)bVar2;
    pbVar1 = obj + 1;
    obj = obj + 1;
    bVar2 = *pbVar1;
  }
  *param_1 = iVar3;
  iVar3 = -1;
  bVar2 = *param_2;
  while (bVar2 != 0) {
    iVar3 = iVar3 * 0x21 + (uint)bVar2;
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  param_1[1] = iVar3;
  FUN_00402ad0(iVar3);
  return;
}
