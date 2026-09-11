/* spd-match: far pct=3.70 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0049FEC0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
void __fastcall FUN_0049fec0(undefined4 * obj, uint param_1, uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;

  undefined4 *puVar4;
  undefined4 uVar5;
  int extraout_EDX;
  int iVar6;
  
  uVar1 = obj[4];
  obj[6] = param_1;
  uVar2 = obj[5];
  obj[7] = param_2;
  puVar3 = (undefined4 *)*obj;
  puVar4 = (undefined4 *)FUN_0040a880();
  for (; puVar3 != puVar4; puVar3 = (undefined4 *)*puVar3) {
    iVar6 = puVar3[2];
    if ((uVar1 & param_1) == 0 && (uVar2 & param_2) == 0) {
      FUN_004f6910(iVar6);
    }
    else if ((iVar6 != 0) &&
            (*(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) & 0xfffffffe | 0x400000,
            *(int *)(iVar6 + 0x18) == 5)) {
      uVar5 = *(undefined4 *)(iVar6 + 0x60);
      iVar6 = *(int *)(iVar6 + 0x5c);
      if (0 < iVar6) {
        do {
          FUN_004f6970(uVar5);
          uVar5 = *(undefined4 *)(extraout_EDX + 4);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  return;
}
