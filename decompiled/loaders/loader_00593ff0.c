/* spd-match: far pct=2.25 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00593FF0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

void __fastcall FUN_00593ff0(uint obj, int param_1, int param_2, int param_3)

{

  sbyte sVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = (byte *)(((int)(obj + ((int)obj >> 0x1f & 7U)) >> 3) + param_1);
  uVar4 = obj & 7;
  iVar2 = 0;
  if (0 < param_3) {
    do {
      sVar1 = (sbyte)uVar4;
      uVar4 = uVar4 + 1 & 7;
      *pbVar3 = ((byte)(param_2 >> ((byte)iVar2 & 0x1f)) & 1) << sVar1 |
                ~('\x01' << sVar1) & *pbVar3;
      if (uVar4 == 0) {
        pbVar3 = pbVar3 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}
