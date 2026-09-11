/* spd-match: far pct=4.73 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0057F020 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0057cc70();
extern int DAT_006b9fc8;
extern int DAT_006ba188;
extern int DAT_00734588;
int __fastcall FUN_0057f020(int * obj)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;

  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined *puVar7;
  int iVar8;
  
  iVar4 = *obj * 0xc90 + DAT_00734588;
  if (iVar4 != 0) {
    pbVar6 = (byte *)(iVar4 + 0x20);
    iVar4 = -1;
    bVar3 = *pbVar6;
    while (bVar3 != 0) {
      iVar4 = iVar4 * 0x21 + (uint)bVar3;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar3 = *pbVar1;
    }
    puVar7 = &DAT_006ba188;
    uVar5 = 0x5f;
    do {
      pbVar6 = puVar7 + 1;
      iVar4 = iVar4 * 0x21 + uVar5;
      puVar7 = puVar7 + 1;
      uVar5 = (uint)*pbVar6;
    } while (*pbVar6 != 0);
    if ((((obj[0x118] != 0) && (iVar8 = obj[0x118], *(char *)((int)obj + 0x6a9) != '\0'))
        || ((obj[0x119] != 0 && (iVar8 = obj[0x119], *(char *)((int)obj + 0x6aa) != '\0')))
        ) && (iVar8 != 0)) {
      puVar7 = &DAT_006b9fc8;
      do {
        pcVar2 = puVar7 + 1;
        puVar7 = puVar7 + 1;
      } while (*pcVar2 != '\0');
      iVar4 = FUN_0057cc70(iVar4);
    }
    return iVar4;
  }
  return 0;
}
