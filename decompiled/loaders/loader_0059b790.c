/* spd-match: far pct=9.41 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0041f680();
int __cdecl FUN_0041f690();
int __cdecl FUN_00424dc0();
int __cdecl FUN_00426110();
int __cdecl FUN_00432d30();
int __cdecl FUN_00468810();
extern int DAT_007361f8;

void __fastcall FUN_0059b790(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_8;
  
  if (DAT_007361f8 != 0) {
    for (local_8 = 0; iVar1 = FUN_0041f680(), local_8 < iVar1; local_8 = local_8 + 1) {
      FUN_0041f690();
      piVar2 = (int *)FUN_00424dc0();
      FUN_00468810();
      iVar1 = (**(code **)(*piVar2 + 0x50))();
      if (iVar1 == 0) {
        FUN_00432d30(0);
        FUN_00426110();
      }
      else {
        FUN_00432d30(1);
        FUN_00426110();
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}
