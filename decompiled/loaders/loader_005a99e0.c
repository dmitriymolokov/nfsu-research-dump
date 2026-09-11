/* spd-match: far pct=9.94 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A99E0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567de0();
extern unsigned char *DAT_00734588;
int __fastcall FUN_005a99e0(int * obj)

{
  byte bVar1;
  int iVar2;

  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  byte local_40;
  byte local_3f [63];
  
  iVar3 = obj[0x137];
  iVar2 = obj[0x136];
  pbVar4 = (byte *)(*obj * 0xc90 + DAT_00734588 + 0x20);
  local_40 = *pbVar4;
  if (local_40 != 0) {
    pbVar5 = &local_40;
    do {
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
      *pbVar5 = bVar1;
    } while (bVar1 != 0);
  }
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      return 0;
    }
    pcVar6 = "_SPOILER_MASK";
  }
  else if (iVar3 == 0) {
    pcVar6 = "_HOOD_MASK";
  }
  else {
    pcVar6 = "_HOOD_SPOILER_MASK";
  }
  FUN_00567de0(pcVar6);
  iVar3 = -1;
  pbVar4 = &local_40;
  if (local_40 == 0) {
    return -1;
  }
  do {
    iVar3 = iVar3 * 0x21 + (uint)local_40;
    local_40 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  } while (local_40 != 0);
  return iVar3;
}
