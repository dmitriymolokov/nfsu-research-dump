/* spd-match: far pct=6.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_0047e820();
int __cdecl FUN_0047f9e0();
extern int DAT_006cc7a4;
extern int DAT_00736870;
extern int DAT_0078a2fc;

int FUN_0047e8c0(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int unaff_ESI;
  bool bVar3;
  undefined4 local_74;
  undefined4 local_8;
  
  local_8 = 0;
  if (0 < DAT_00736870) {
    do {
      FUN_0047f9e0();
      bVar3 = DAT_0078a2fc == 1;
      bVar1 = false;
      iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x2c) + 0x18))(0);
      if (((iVar2 == 0) ||
          (DAT_006cc7a4 <
           *(float *)(iVar2 + 0xc) * *(float *)(unaff_ESI + 0x90) +
           *(float *)(iVar2 + 0x10) * *(float *)(unaff_ESI + 0x94))) && (bVar3)) {
        bVar1 = true;
      }
      iVar2 = (**(code **)(**(int **)(unaff_ESI + 0x2c) + 0x18))(0);
      if (((iVar2 != 0) &&
          (*(float *)(iVar2 + 0xc) * *(float *)(unaff_ESI + 0x90) +
           *(float *)(iVar2 + 0x10) * *(float *)(unaff_ESI + 0x94) <= DAT_006cc7a4)) && (!bVar3)) {
        bVar1 = true;
      }
      if (!bVar1 == (local_74 == 0)) {
        iVar2 = FUN_0047e820(param_1,unaff_ESI);
        if (iVar2 != 0) {
          return local_8;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < DAT_00736870);
  }
  return -1;
}
