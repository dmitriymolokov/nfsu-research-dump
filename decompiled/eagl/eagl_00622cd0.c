/* spd-match: far pct=10.28 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00622970();
extern int DAT_006e2a8c;
extern unsigned char *DAT_0070a488;
extern unsigned char *_DAT_0070a498;
extern unsigned char *PTR_FUN_006dfa9c;

void FUN_00622cd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_6 == 0) {
    param_6 = param_1;
  }
  iVar1 = (*(code *)PTR_FUN_006dfa9c)(0x24,"EAGL::VertexBuffer new");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00622970(param_6,param_2,param_3,param_5,param_4,0);
  }
  iVar1 = 0;
  if (0 < DAT_006e2a8c) {
    while (*(int *)(DAT_0070a488 + iVar1 * 4) != 0) {
      iVar1 = iVar1 + 1;
      if (DAT_006e2a8c <= iVar1) {
        return;
      }
    }
    *(undefined4 *)(DAT_0070a488 + iVar1 * 4) = uVar2;
    _DAT_0070a498 = _DAT_0070a498 + 1;
  }
  return;
}
