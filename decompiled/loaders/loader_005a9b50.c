/* spd-match: far pct=3.47 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A9B50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567de0();
int __cdecl FUN_0057cc30();
extern int DAT_006b7e1c;
extern int DAT_00734588;
int __fastcall FUN_005a9b50(int * obj, int param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;

  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  byte local_40;
  byte local_3f [63];
  
  if (obj[param_1 + 0x132] == 0) {
    return 0;
  }
  iVar6 = *obj * 0xc90 + DAT_00734588;
  pcVar7 = "TEXTURE";
  do {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  iVar4 = FUN_0057cc30(0);
  if (iVar4 != 0) {
    local_40 = *(byte *)(iVar6 + 0x20);
    iVar6 = iVar6 + 0x20;
    if (local_40 != 0) {
      pbVar5 = &local_40;
      do {
        bVar3 = *(byte *)(iVar6 + 1);
        iVar6 = iVar6 + 1;
        pbVar5 = pbVar5 + 1;
        *pbVar5 = bVar3;
      } while (bVar3 != 0);
    }
    FUN_00567de0(&DAT_006b7e1c);
    FUN_00567de0(iVar4);
    iVar6 = -1;
    pbVar5 = &local_40;
    while (local_40 != 0) {
      iVar6 = iVar6 * 0x21 + (uint)local_40;
      pbVar2 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
      local_40 = *pbVar2;
    }
    return iVar6;
  }
  return 0;
}
