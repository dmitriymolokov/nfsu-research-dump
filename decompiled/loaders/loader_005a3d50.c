/* spd-match: far pct=5.20 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A3D50 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567c70();
int __cdecl FUN_005a3c00();
extern int DAT_007373a8;
extern int DAT_007373ac;
extern int DAT_007373ad;
int unaff_EDI;
uint __fastcall FUN_005a3d50(uint val)

{
  byte *pbVar1;
  char cVar2;

  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int unaff_EDI;
  
  uVar3 = FUN_005a3c00();
  cVar2 = (char)uVar3;
  if (cVar2 != '\0') {
    uVar3 = 0;
    if (cVar2 == '\x01') {
      pcVar6 = "ALLCARS_BODY_1";
      uVar3 = 0xffffffff;
      uVar4 = 0x41;
      do {
        uVar3 = uVar3 * 0x21 + uVar4;
        pbVar1 = (byte *)(pcVar6 + 1);
        uVar4 = (uint)*pbVar1;
        pcVar6 = pcVar6 + 1;
        val = uVar3;
      } while (*pbVar1 != 0);
    }
    else if ((((cVar2 == '\x02') || (cVar2 == '\x03')) || (cVar2 == '\x04')) ||
            (val = uVar3, cVar2 == '\x05')) {
      uVar3 = FUN_00567c70();
      val = uVar3;
    }
  }
  pcVar6 = &DAT_007373ac;
  do {
    if (*(uint *)(pcVar6 + -4) == val) {
      cVar2 = *pcVar6;
      uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
      if (cVar2 == '\0') {
        iVar5 = 0;
        do {
          if ((&DAT_007373a8)[iVar5 * 2] == val) {
            return (uint)((*(uint *)(unaff_EDI + 0x10) & 1 << ((&DAT_007373ad)[iVar5 * 8] & 0x1f))
                         != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x55);
        return 0;
      }
      if (cVar2 == '\x01') {
        iVar5 = 0;
        do {
          if ((&DAT_007373a8)[iVar5 * 2] == val) {
            return (uint)((*(uint *)(unaff_EDI + 0x14) & 1 << ((&DAT_007373ad)[iVar5 * 8] & 0x1f))
                         != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x55);
        return 0;
      }
      if (cVar2 == '\x02') {
        iVar5 = 0;
        do {
          if ((&DAT_007373a8)[iVar5 * 2] == val) {
            return (uint)((*(uint *)(unaff_EDI + 0x18) & 1 << ((&DAT_007373ad)[iVar5 * 8] & 0x1f))
                         != 0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x55);
        return 0;
      }
    }
    pcVar6 = pcVar6 + 8;
    if (0x737653 < (int)pcVar6) {
      return uVar3 & 0xffffff00;
    }
  } while( true );
}
