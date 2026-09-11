/* spd-match: far pct=11.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00639c00();
int __cdecl FUN_00639f20();
int __cdecl FUN_0063a690();
int __cdecl FUN_0063a700();
int __cdecl FUN_00642450();
int __cdecl FUN_006832b0();
int __cdecl FUN_006832d0();
extern code *DAT_006e75ec;

void FUN_006833a0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00639c00(*(undefined4 *)(param_3 + 0x1c));
  if (*(int *)(param_3 + 0x10) != 0) {
    uVar2 = FUN_0063a690(*(undefined4 *)(param_3 + 0x20),99,param_3);
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00642450("ASYNCFILE_load - unable to initiate file close\n");
      return;
    }
    FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006832b0);
    return;
  }
  uVar1 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  uVar2 = (*DAT_006e75ec)("ASYNCFILEBUF",uVar2,uVar1);
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined4 *)(param_3 + 0x14) = uVar2;
  *(undefined4 *)(param_3 + 0x2c) = uVar2;
  if (0x2000 < iVar3) {
    iVar3 = 0x2000;
  }
  uVar2 = FUN_0063a700(*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24),uVar2,iVar3,
                       99,param_3);
  *(undefined4 *)(param_3 + 0x1c) = uVar2;
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00642450("ASYNCFILE_load - unable to initiate file read\n");
    return;
  }
  FUN_00639f20(*(undefined4 *)(param_3 + 0x1c),FUN_006832d0);
  return;
}
