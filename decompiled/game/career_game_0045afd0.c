/* spd-match: far pct=10.08 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0045AFD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0045b050(...);

struct ThisCallBox {
  void FUN_0045afd0(undefined4 * obj, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8);
};
void ThisCallBox::FUN_0045afd0(undefined4 * obj, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  puVar1 = (undefined4 *)(((int)this) + 0x38c);
  uVar2 = *puVar1;
  uVar3 = *(undefined4 *)(((int)this) + 0x390);
  uVar4 = *(undefined4 *)(((int)this) + 0x394);
  *puVar1 = *obj;
  *(undefined4 *)(((int)this) + 0x390) = obj[1];
  *(undefined4 *)(((int)this) + 0x394) = obj[2];
  FUN_0045b050(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *puVar1 = uVar2;
  *(undefined4 *)(((int)this) + 0x390) = uVar3;
  *(undefined4 *)(((int)this) + 0x394) = uVar4;
  return;
}
