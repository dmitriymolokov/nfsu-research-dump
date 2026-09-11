/* spd-match: far pct=6.02 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-cefam-ce_arity_c2198/va_00480D40 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00424ba0();
int __cdecl FUN_00481160();
extern int DAT_007372b0;
int unaff_EDI;
void __fastcall FUN_00480d40(int obj, int param_1, int param_2)

{
  int iVar1;
  uint uVar2;

  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *unaff_EDI;
  undefined4 local_64;
  
  iVar3 = param_2 * 0x4c + obj;
  if (*(char *)(param_2 * 0x4c + 0xd4 + obj) != '\0') {
    uVar2 = *(uint *)(obj + 0xcb0);
    uVar4 = param_2 + param_1 & (param_2 + param_1 < 1) - 1;
    uVar5 = uVar4;
    if ((int)uVar4 > (int)uVar2) {
      uVar5 = uVar2;
    }
    if (SBORROW4(uVar5,uVar2) == ((int)uVar4 <= (int)uVar2 && (int)(uVar4 - uVar2) < 0)) {
      local_64 = DAT_007372b0;
    }
    else {
      local_64 = *(undefined4 *)(uVar5 * 0x4c + 0xd8 + obj);
    }
    FUN_00481160(obj,local_64);
    FUN_00424ba0();
    FUN_005abda2();
    return;
  }
  iVar1 = iVar3 + 0xd0 + param_1 * 0xc;
  *unaff_EDI = *(undefined4 *)(iVar3 + 0xdc + param_1 * 0xc);
  unaff_EDI[1] = *(undefined4 *)(iVar1 + 0x10);
  unaff_EDI[2] = *(undefined4 *)(iVar1 + 0x14);
  return;
}
