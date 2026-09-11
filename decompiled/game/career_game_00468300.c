/* spd-match: far pct=33.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00468300 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_0072cbfc;
uint __fastcall FUN_00468300(int obj, int param_1)

{

  int iVar1;
  
  if ((-1 < *(short *)(obj + 0x18)) && (-1 < *(short *)(param_1 + 0x18))) {
    iVar1 = *(short *)(obj + 0x18) * 0xde + (int)*(short *)(param_1 + 0x18);
    return 1 << ((byte)iVar1 & 7) & (uint)*(byte *)((iVar1 >> 3) + DAT_0072cbfc);
  }
  return 0;
}
