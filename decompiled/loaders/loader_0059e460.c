/* spd-match: far pct=10.91 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0059E460 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern int DAT_00734424;
extern int DAT_00735fa0;
void __fastcall FUN_0059e460(int obj, int param_1)

{

  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_1 = param_1 * 0x34;
  iVar1 = *(int *)(*(int *)(obj + 0xc) + 0x28 + param_1);
  if ((iVar1 != 0) && (uVar3 = 0, *(int *)(obj + 0x10) != 0)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(obj + 0xc) + 0x28 + iVar2) == iVar1) {
        *(undefined1 *)(*(int *)(obj + 0xc) + iVar2 + 0x30) = 0;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x34;
    } while (uVar3 < *(uint *)(obj + 0x10));
  }
  *(undefined1 *)(*(int *)(obj + 0xc) + 0x30 + param_1) = 1;
  iVar1 = *(int *)(obj + 0xc) + param_1;
  if (*(int *)(*(int *)(obj + 0xc) + 0x20 + param_1) == 5) {
    if (*(int *)(iVar1 + 0x24) == 0) {
      DAT_00734424 = 1;
    }
    else if (*(int *)(iVar1 + 0x24) == 3) {
      *(undefined1 *)(obj + 5) = 1;
      *(undefined4 *)(obj + 8) = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined4 *)(obj + 0x34) = 0;
      DAT_00735fa0 = (uint)(DAT_00735fa0 == 0);
      return;
    }
  }
  *(undefined1 *)(obj + 5) = 1;
  *(undefined4 *)(obj + 8) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(obj + 0x34) = 0;
  return;
}
