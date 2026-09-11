/* spd-match: far pct=5.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_006397e0();
extern code *DAT_006e75ec;

void FUN_0063a3f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (param_1 == 0) {
    iVar3 = 0x40;
  }
  iVar1 = param_3;
  if (param_3 == 0) {
    iVar1 = 0x40;
  }
  uVar2 = (*DAT_006e75ec)("File System",iVar1 * 0x30 + 0x1580 + iVar3 * 0x24,0x100);
  FUN_006397e0(param_1,0,param_3,uVar2);
  return;
}
