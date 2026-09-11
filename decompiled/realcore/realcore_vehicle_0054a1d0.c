/* spd-match: far pct=4.59 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_c2106 */
#include "ghidra_compat.h"

unsigned int __cdecl rsqrtss(unsigned __int64, unsigned __int64);

int __cdecl FUN_0054a070(...);
int __cdecl FUN_00664d40(...);
int __cdecl FUN_00666ea0(...);
int unaff_ESI;

struct ThisCallBox {
  undefined4 FUN_0054a1d0(int param_2, undefined4 param_3);
};
undefined4 ThisCallBox::FUN_0054a1d0(int param_2, undefined4 param_3) {
  int param_1 = (int)this;
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x68) != 0) {
    if (param_1 == -1) {
      param_1 = *(int *)(unaff_ESI + 0x294);
    }
    uVar1 = FUN_00664d40(*(int *)(unaff_ESI + 0x68),5,param_1);
    iVar2 = FUN_00666ea0(*(undefined4 *)(unaff_ESI + 0x74),uVar1);
    if (iVar2 != 0) {
      if (*(int *)(unaff_ESI + 0x68) == 0) {
        uVar1 = FUN_0054a070(param_3);
        return uVar1;
      }
      uVar1 = FUN_00664d40(*(int *)(unaff_ESI + 0x68),1,*(undefined4 *)(iVar2 + 0x184 + param_2 * 4)
                          );
      FUN_00666ea0(*(undefined4 *)(unaff_ESI + 0x70),uVar1);
      uVar1 = FUN_0054a070(param_3);
      return uVar1;
    }
  }
  return 0xffffffff;
}
