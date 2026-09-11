/* spd-match: far pct=3.85 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-tail3/va_00443C90 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00443a10(...);
int __cdecl FUN_0059d350(...);
int __cdecl FUN_0059d830(...);

struct ThisCallBox {
  void FUN_00443c90(int val, int param_2, undefined4 param_3, float param_4);
};
void ThisCallBox::FUN_00443c90(int val, int param_2, undefined4 param_3, float param_4)

{
  int iVar1;
  float fVar2;

  float10 fVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar1 = *(int *)(param_2 + 0xc) + val * 0x28;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    fVar3 = (float10)FUN_0059d830(param_3);
    fVar2 = (float)fVar3;
    local_28 = fVar2;
    FUN_0059d350(&local_20,fVar2,0);
    local_24 = local_1c;
    local_28 = local_20;
    FUN_0059d350(&local_20,fVar2,1);
    local_28 = local_1c * param_4 + local_28;
    local_24 = -local_20 * param_4 + local_24;
    local_1c = -local_20;
    FUN_00443a10(param_2,&local_28);
    return;
  }
  *((undefined4 *)this) = 0;
  ((undefined4 *)this)[1] = 0;
  ((undefined4 *)this)[7] = 0;
  ((undefined4 *)this)[5] = 0;
  ((undefined4 *)this)[4] = 0;
  ((undefined4 *)this)[6] = 0x3f800000;
  return;
}
