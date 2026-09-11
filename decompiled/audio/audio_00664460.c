/* spd-match: far pct=8.74 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00664460 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00447030();
int unaff_EBX;
undefined4 __fastcall FUN_00664460(int val, undefined4 param_1, int param_2, undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;

  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  
  piVar1 = (int *)(unaff_EBX + 0x6f4);
  iVar3 = *piVar1;
  while( true ) {
    if (iVar3 == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)*piVar1;
    if ((puVar2[1] == 0x70696e67) &&
       ((puVar2[2] == param_2 || ((param_2 == -1 && ((int)puVar2[3] < val)))))) break;
    piVar1 = puVar2 + 0x10;
    iVar3 = *piVar1;
  }
  *piVar1 = puVar2[0x10];
  puVar4 = puVar2;
  for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  FUN_00447030(puVar2);
  *(int *)(unaff_EBX + 0x6f8) = *(int *)(unaff_EBX + 0x6f8) + -1;
  return 1;
}
