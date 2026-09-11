/* spd-match: far pct=6.85 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-b/va_004EF000 */
#include "ghidra_compat.h"

int __fastcall FUN_004ef000(int obj, int hash)

{
  byte *pbVar1;
  int iVar2;

  byte bVar3;
  byte *pbVar4;
  int iVar5;
  iVar2 = *(int *)(obj + 0x104);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar4 = (byte *)(*(int *)(iVar2 + 0x2c) + 2);
    iVar5 = -1;
    if (pbVar4 != (byte *)0x0) {
      bVar3 = *pbVar4;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < 0x7b)) {
          bVar3 = bVar3 - 0x20;
        }
        iVar5 = iVar5 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar3 = *pbVar1;
      }
    }
    if (iVar5 == hash) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}
