/* spd-match: far pct=9.74 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00564F00 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_006f2d10;
extern unsigned char *DAT_006f2d12;
extern unsigned char *DAT_006f2e18;
extern unsigned char *DAT_006f2e1a;
int __fastcall FUN_00564f00(uint val)

{

  int iVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  
  bVar4 = (int)val < 0;
  if (bVar4) {
    val = -val;
  }
  if ((int)val < 0x200000) {
    if ((int)val < 0x40000) {
      iVar1 = ((int)val >> 0xb) * 2;
      uVar2 = *(ushort *)(&DAT_006f2d10 + iVar1);
      uVar3 = *(ushort *)(&DAT_006f2d12 + iVar1);
      iVar1 = (val & 0x7ff) << 5;
    }
    else {
      uVar2 = *(ushort *)(&DAT_006f2e18 + ((int)val >> 0xe) * 2);
      uVar3 = *(ushort *)(&DAT_006f2e1a + ((int)val >> 0xe) * 2);
      iVar1 = (val & 0x3fff) << 2;
    }
  }
  else if ((int)val < 0x1000000) {
    iVar1 = (int)val >> 8;
    uVar2 = 0x3eba;
    uVar3 = 0x3fd7;
  }
  else {
    uVar2 = 0x3fff;
    uVar3 = 0x3fff;
    iVar1 = 0;
  }
  iVar1 = ((int)(((uint)uVar3 - (uint)uVar2) * iVar1) >> 0x10) + (uint)uVar2;
  if (bVar4) {
    iVar1 = -iVar1;
  }
  return iVar1;
}
