/* spd-match: far pct=7.79 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057F0D0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_006ba188;
extern int DAT_00734588;
int __fastcall FUN_0057f0d0(int * obj)

{
  byte *pbVar1;
  byte bVar2;

  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar3 = *obj * 0xc90 + DAT_00734588;
  if (iVar3 != 0) {
    pbVar4 = (byte *)(iVar3 + 0x20);
    iVar3 = -1;
    bVar2 = *pbVar4;
    while (bVar2 != 0) {
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar2 = *pbVar1;
    }
    puVar6 = &DAT_006ba188;
    uVar5 = 0x5f;
    do {
      iVar3 = iVar3 * 0x21 + uVar5;
      pbVar4 = puVar6 + 1;
      uVar5 = (uint)*pbVar4;
      puVar6 = puVar6 + 1;
    } while (*pbVar4 != 0);
    return iVar3;
  }
  return 0;
}
