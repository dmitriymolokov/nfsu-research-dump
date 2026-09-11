/* spd-match: far pct=0.76 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_00638990();
int __cdecl FUN_00638a50();
int __cdecl FUN_0067101f();
extern unsigned char *PTR_FUN_006e755c;

int FUN_00638c30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 local_10 [16];
  
  iVar1 = FUN_00638990(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  if (iVar1 != 0) {
    FUN_0067101f(local_10,"SHP%dx%dx%d",param_1,param_2,param_3);
    iVar1 = (*(code *)PTR_FUN_006e755c)(local_10,iVar1,0,0x10,param_6);
    if (iVar1 != 0) {
      FUN_00638a50(iVar1,param_1,param_2,param_3,param_4,param_5,param_7,param_8);
    }
    return iVar1;
  }
  return 0;
}
