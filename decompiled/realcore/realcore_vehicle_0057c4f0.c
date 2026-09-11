/* spd-match: far pct=17.72 flags=/O2 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-arity/va_0057C4F0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

struct ThisCallBox {
  int FUN_0057c4f0(int obj, int param_2);
};
int ThisCallBox::FUN_0057c4f0(int obj, int param_2)

{
  uint uVar1;

  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  pbVar2 = (byte *)((param_2 - *(int *)(obj + 0xc)) + 100 + obj);
  ((uint *)this)[1] = (uint)(*pbVar2 >> 4);
  uVar1 = ((uint *)this)[1];
  *((uint *)this) = *pbVar2 & 0xf;
  uVar3 = 0;
  if (0 < (int)uVar1) {
    pbVar2 = pbVar2 + uVar1;
    uVar4 = uVar1;
    do {
      uVar3 = uVar3 << 8 | (uint)*pbVar2;
      pbVar2 = pbVar2 + -1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  ((uint *)this)[2] = uVar3;
  return uVar1 + 1 + param_2;
}
