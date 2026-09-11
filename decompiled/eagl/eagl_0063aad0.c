/* spd-match: far pct=10.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0063a1e0();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00641a90();
int __cdecl FUN_00642450();
extern int DAT_0070f36c;

undefined4 FUN_0063aad0(code *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_0070f36c == 0) {
    FUN_00642450("FILESYS_atomic - FILE SYSTEM NOT INITIALIZED, CALL FILESYS_init().\n");
  }
  if ((param_2 < 0) || (0x1f < param_2)) {
    FUN_00642450("FILESYS_atomic - CALLED WITH ILLEGAL FILE DEVICE (%d).\n",param_2);
    return 0;
  }
  iVar4 = param_2 * 0xac + DAT_0070f36c;
  if (*(int *)(param_2 * 0xac + DAT_0070f36c) == 0) {
    FUN_0063a1e0();
  }
  iVar1 = iVar4 + 0x84;
  FUN_0063f190(iVar1);
  iVar2 = *(int *)(iVar4 + 0xa8);
  if (param_3 <= iVar2) {
    *(int *)(iVar4 + 0xa8) = param_3;
    uVar3 = (*param_1)(param_3,param_4);
    *(int *)(iVar4 + 0xa8) = iVar2;
    FUN_00641a90(iVar4 + 0x7c);
    FUN_0063f1a0(iVar1);
    return uVar3;
  }
  FUN_00642450("FILESYS_atomic - CALLED AT PRIORITY (%d) LOWER THAN CURRENT DEVICE PRIORITY (%d).\n"
               ,param_3,iVar2);
  FUN_0063f1a0(iVar1);
  return 0;
}
