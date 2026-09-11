/* spd-match: far pct=2.68 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-a/va_004DE3C0 */
#include "ghidra_compat.h"

int __fastcall FUN_004de3c0(int obj, byte *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  iVar1 = *(int *)(obj + 4);
  while( true ) {
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 + -4;
    }
    iVar3 = obj;
    if (obj == -4) {
      iVar3 = 0;
    }
    if (iVar1 == iVar3) {
      return 0;
    }
    pbVar5 = *(byte **)(iVar1 + 0xc);
    pbVar6 = param_1;
    do {
      bVar4 = *pbVar6;
      if (('`' < (char)bVar4) && ((char)bVar4 < '{')) {
        bVar4 = bVar4 & 0x5f;
      }
      bVar2 = *pbVar5;
      pbVar6 = pbVar6 + 1;
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 & 0x5f;
      }
      pbVar5 = pbVar5 + 1;
    } while (((bVar4 != 0) && (bVar2 != 0)) && (bVar4 == bVar2));
    if (bVar4 == bVar2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}
