/* spd-match: far pct=4.42 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0058A640 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00567d30();
extern int DAT_007301d4;
extern void LAB_0058a66e(void);
int unaff_EDI;
int unaff_ESI;
uint __fastcall FUN_0058a640(uint val)

{

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = *(int *)(unaff_ESI + 0x10);
  if ((iVar2 < 0x10) && (val = *(uint *)(unaff_EDI + 0x44), val == 0)) {
    if (0 < iVar2) {
      val = FUN_00567d30();
      if ((val != 0) || (val = *(uint *)(unaff_EDI + 0x50), val != 0)) goto LAB_0058a66e;
    }
    iVar5 = *(int *)(unaff_EDI + 0x40) + *(uint *)(unaff_EDI + 0x3c);
    uVar1 = *(uint *)(unaff_EDI + 0x3c) & 0xfffff800;
    iVar3 = *(int *)(unaff_ESI + 0xc) + *(int *)(unaff_EDI + 0x40);
    if (0 < iVar2) {
      if ((int)*(uint *)(unaff_ESI + 4) < (int)uVar1) {
        uVar1 = *(uint *)(unaff_ESI + 4);
      }
      if (iVar5 < *(int *)(unaff_ESI + 8)) {
        iVar5 = *(int *)(unaff_ESI + 8);
      }
    }
    iVar4 = iVar5 - uVar1;
    if (((iVar4 < 0x40001) && (iVar4 - iVar3 < 0x8001)) &&
       (iVar4 <= (int)((-(uint)(DAT_007301d4 != 0) & 0x6300000) - 0x40000))) {
      *(uint *)(unaff_ESI + 4) = uVar1;
      *(int *)(unaff_ESI + 8) = iVar5;
      *(int *)(unaff_ESI + 0xc) = iVar3;
      *(int *)(unaff_ESI + 0x14 + iVar2 * 4) = unaff_EDI;
      iVar2 = *(int *)(unaff_ESI + 0x10) + 1;
      *(int *)(unaff_ESI + 0x10) = iVar2;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
    return uVar1 & 0xffffff00;
  }
LAB_0058a66e:
  return val & 0xffffff00;
}
