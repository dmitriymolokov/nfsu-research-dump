/* spd-match: far pct=6.30 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-a/va_00418330 */
#include "ghidra_compat.h"

uint __fastcall FUN_00418330(int obj, byte *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  puVar4 = (undefined4 *)(obj + 0x274);
  puVar1 = (undefined4 *)*puVar4;
  do {
    if (puVar1 == puVar4) {
      return (uint)puVar4 & 0xffffff00;
    }
    for (puVar2 = (undefined4 *)puVar1[2]; puVar2 != puVar1 + 2; puVar2 = (undefined4 *)*puVar2) {
      pbVar7 = (byte *)(puVar2 + 2);
      pbVar6 = param_1;
      do {
        bVar5 = *pbVar7;
        if (('`' < (char)bVar5) && ((char)bVar5 < '{')) {
          bVar5 = bVar5 & 0x5f;
        }
        bVar3 = *pbVar6;
        pbVar7 = pbVar7 + 1;
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 & 0x5f;
        }
        pbVar6 = pbVar6 + 1;
      } while (((bVar5 != 0) && (bVar3 != 0)) && (bVar5 == bVar3));
      if (bVar5 == bVar3) {
        return CONCAT31((char)bVar3 >> 7,1);
      }
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}
