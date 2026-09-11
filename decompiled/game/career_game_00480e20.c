/* spd-match: far pct=6.02 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-ce_arity_c2198/va_00480E20 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00424ba0();
int __cdecl FUN_00481160();
extern int DAT_007372b0;
int unaff_EDI;
void __fastcall FUN_00480e20(int obj, int param_1, int param_2)

{
  int iVar1;
  uint uVar2;

  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_EDI;
  undefined4 local_64;
  
  iVar5 = param_2 * 0x4c + param_1;
  if (*(char *)(param_2 * 0x4c + 0xd5 + param_1) != '\0') {
    uVar2 = *(uint *)(param_1 + 0xcb0);
    uVar3 = obj + param_2 & (obj + param_2 < 1) - 1;
    uVar4 = uVar3;
    if ((int)uVar3 > (int)uVar2) {
      uVar4 = uVar2;
    }
    if (SBORROW4(uVar4,uVar2) == ((int)uVar3 <= (int)uVar2 && (int)(uVar3 - uVar2) < 0)) {
      local_64 = DAT_007372b0;
    }
    else {
      local_64 = *(undefined4 *)(uVar4 * 0x4c + 0xd8 + param_1);
    }
    FUN_00481160(param_1,local_64);
    FUN_00424ba0();
    FUN_005abda2();
    return;
  }
  iVar1 = iVar5 + 0xd0 + obj * 0xc;
  *unaff_EDI = *(undefined4 *)(iVar5 + 0xd0 + (obj * 3 + 9) * 4);
  unaff_EDI[1] = *(undefined4 *)(iVar1 + 0x28);
  unaff_EDI[2] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}
