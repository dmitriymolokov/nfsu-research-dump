/* spd-match: far pct=27.84 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f640();
int __cdecl FUN_0041f650();
int __cdecl FUN_0041f660();
int __cdecl FUN_0041f670();
int __cdecl FUN_0041f680();
int __cdecl FUN_0041f690();
int __cdecl FUN_00424dc0();
int __cdecl FUN_00425140();
int __cdecl FUN_0042ae20();
int __cdecl FUN_0042ae30();
int __cdecl FUN_00432d30();
int __cdecl FUN_00571f20();
int __cdecl FUN_005ab010();

void FUN_00598510(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 local_8;
  
  FUN_0041f650();
  FUN_0041f660();
  FUN_0041f670();
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0042ae30();
    if (iVar1 <= local_8) break;
    FUN_0042ae20();
    FUN_005ab010();
    local_8 = local_8 + 1;
  }
  FUN_00425140();
  iVar1 = FUN_0041f640();
  if (iVar1 != 0) {
    local_10 = 0;
    while( true ) {
      iVar1 = FUN_0041f680();
      if (iVar1 <= local_10) break;
      FUN_0041f690();
      piVar2 = (int *)FUN_00424dc0();
      uVar3 = (**(code **)(*piVar2 + 0x50))();
      FUN_00432d30(uVar3);
      local_10 = local_10 + 1;
    }
  }
  FUN_00571f20();
  return;
}
