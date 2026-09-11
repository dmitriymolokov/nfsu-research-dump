/* spd-match: far pct=8.43 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00664400 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00447030();
int unaff_EBX;
bool __fastcall FUN_00664400(int val, undefined4 param_1, undefined4 *param_2)

{

  int iVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = *(undefined4 **)(unaff_EBX + 0x6f4);
  if ((puVar3 != (undefined4 *)0x0) && ((puVar3[1] == val || (val == 0x44515545)))) {
    *(undefined4 *)(unaff_EBX + 0x6f4) = puVar3[0x10];
    puVar2 = puVar3;
    for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    FUN_00447030(puVar3);
  }
  return *(int *)(unaff_EBX + 0x6f4) != 0;
}
