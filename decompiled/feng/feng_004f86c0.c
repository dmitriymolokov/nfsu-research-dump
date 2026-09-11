/* spd-match: far pct=8.33 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-b/va_004F86C0 */
#include "ghidra_compat.h"

int __cdecl FUN_004f65d0();
int __fastcall FUN_004f86c0(int obj, int param_1)

{
  byte *pbVar1;
  byte *pbVar2;

  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar3 = FUN_004f65d0();
  if (obj == 0) {
    iVar4 = *(int *)(iVar3 + 0x40);
  }
  else {
    iVar4 = *(int *)(obj + 4);
  }
  pbVar2 = *(byte **)(param_1 + 0x24);
  while( true ) {
    iVar6 = -1;
    if (pbVar2 != (byte *)0x0) {
      bVar5 = *pbVar2;
      pbVar7 = pbVar2;
      while (bVar5 != 0) {
        if (('`' < (char)bVar5) && ((char)bVar5 < 0x7b)) {
          bVar5 = bVar5 - 0x20;
        }
        iVar6 = iVar6 * 0x21 + (uint)bVar5;
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        bVar5 = *pbVar1;
      }
    }
    if (*(int *)(iVar4 + 0x10) == iVar6) break;
    if (iVar4 == *(int *)(iVar3 + 0x44)) {
      return 0;
    }
    iVar4 = *(int *)(iVar4 + 4);
  }
  return iVar4;
}
