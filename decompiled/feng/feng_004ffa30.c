/* spd-match: far pct=3.45 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00500500();

bool __fastcall FUN_004ffa30(int *param_1)

{
  char cVar1;
  undefined4 unaff_ESI;
  
  cVar1 = (**(code **)(*param_1 + 4))();
  FUN_00500500(unaff_ESI);
  return cVar1 != '\0';
}
