/* spd-match: far pct=2.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int unaff_EDI;

uint FUN_00594050(int param_1,uint param_2)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  int unaff_EDI;
  
  pbVar2 = (byte *)(((int)(((int)param_2 >> 0x1f & 7U) + param_2) >> 3) + param_1);
  param_2 = param_2 & 7;
  uVar1 = 0;
  iVar3 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar1 = uVar1 | (*pbVar2 >> (sbyte)param_2 & 1) << ((byte)iVar3 & 0x1f);
      param_2 = param_2 + 1 & 7;
      if (param_2 == 0) {
        pbVar2 = pbVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI);
  }
  return uVar1;
}
