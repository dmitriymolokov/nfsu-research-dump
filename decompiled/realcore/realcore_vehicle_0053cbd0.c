/* spd-match: far pct=13.18 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0053CBD0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00520e90();
extern int DAT_007356a8;
extern int DAT_00758930;
extern int DAT_00758934;
extern int DAT_00758b58;
extern int DAT_0077a920;
uint __fastcall FUN_0053cbd0(int obj)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  int *piVar4;
  byte bVar5;
  uint uVar6;
  uint local_4;
  
  uVar3 = DAT_00758930;
  uVar2 = DAT_007356a8;
  iVar1 = *(int *)(obj + 0x2c + *(int *)(obj + 0x20) * 4);
  local_4 = DAT_00758934;
  if (*(int *)(iVar1 + 0x18) < 3) {
    bVar5 = (char)(&DAT_00758b58)[*(int *)(*(int *)(obj + 4) + 0xf8) * 2] + 1;
  }
  else {
    bVar5 = (byte)*(undefined4 *)(iVar1 + 0x54);
  }
  uVar6 = 1 << (bVar5 & 0x1f);
  if (DAT_00758934 == 0) {
    FUN_00520e90(DAT_007356a8,&local_4,0);
  }
  if (uVar3 == 0) {
    FUN_00520e90(uVar2,0,0);
  }
  if ((DAT_0077a920 == 3) || (piVar4 = *(int **)(obj + 4), *piVar4 == 8)) {
    if ((uVar3 & uVar6) != 0) {
      DAT_00758930 = DAT_00758930 - uVar6;
      *(undefined4 *)(obj + 0x614) = 0;
      return uVar3 & 0xffffff00;
    }
    piVar4 = *(int **)(obj + 4);
  }
  else if ((local_4 & uVar6) != 0) {
    DAT_00758934 = DAT_00758934 - uVar6;
    *(undefined4 *)(obj + 0x614) = 0;
    return (uint)piVar4 & 0xffffff00;
  }
  piVar4[0x3e] = piVar4[0x3e] + 1;
  if (0x19 < *(int *)(*(int *)(obj + 4) + 0xf8)) {
    *(undefined4 *)(*(int *)(obj + 4) + 0xf8) = 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 2;
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}
