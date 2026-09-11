/* spd-match: far pct=9.18 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2120 */
#include "ghidra_compat.h"

int __cdecl FUN_004754e0();
int __cdecl FUN_00584b80();
extern int DAT_007000e4;
extern int _DAT_006cc9f8;
int unaff_ESI;

void FUN_00474640(void)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  *(undefined2 *)(*(int *)(unaff_ESI + 0x24) + 0x130) =
       *(undefined2 *)(*(int *)(unaff_ESI + 4) + 0x1d0);
  *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 0x128) =
       *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x1dc);
  uVar4 = (**(code **)(**(int **)(unaff_ESI + 4) + 0x24))();
  *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 0x134) = uVar4;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 300) =
       *(undefined4 *)(*(int *)(unaff_ESI + 4) + 0x1e4);
  FUN_00584b80(*(int *)(unaff_ESI + 0x30) + 0x30,*(int *)(unaff_ESI + 0x30) + 0x90);
  iVar1 = *(int *)(unaff_ESI + 0x30);
  FUN_004754e0(*(undefined4 *)(iVar1 + 0x2b0),*(undefined4 *)(iVar1 + 0x2b4),
               *(undefined4 *)(iVar1 + 0x2b8),*(undefined4 *)(iVar1 + 700));
  bVar2 = DAT_007000e4 == _DAT_006cc9f8;
  *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + 0x124) =
       *(undefined4 *)(*(int *)(unaff_ESI + 0x30) + 0x398);
  fVar3 = DAT_007000e4;
  if (bVar2) {
    fVar3 = *(float *)(*(int *)(unaff_ESI + 0x30) + 0x3a0);
  }
  *(float *)(*(int *)(unaff_ESI + 0x24) + 0x120) = fVar3;
                    
                    
  (**(code **)(*(int *)(unaff_ESI + 8) + 4))();
  return;
}
