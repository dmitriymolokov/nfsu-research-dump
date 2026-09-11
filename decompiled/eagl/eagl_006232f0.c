/* spd-match: far pct=14.61 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00622d40();
extern int DAT_006e2a90;
extern unsigned char *DAT_0070a48c;
extern unsigned char *DAT_0070a49c;
extern unsigned char *PTR_FUN_006dfa9c;

void FUN_006232f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FUN_006dfa9c)(0x14,"EAGL::IndexBuffer new");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00622d40(param_1,param_3,param_2);
  }
  iVar1 = 0;
  if (0 < DAT_006e2a90) {
    while (*(int *)(DAT_0070a48c + iVar1 * 4) != 0) {
      iVar1 = iVar1 + 1;
      if (DAT_006e2a90 <= iVar1) {
        return;
      }
    }
    *(undefined4 *)(DAT_0070a48c + iVar1 * 4) = uVar2;
    DAT_0070a49c = DAT_0070a49c + 1;
  }
  return;
}
