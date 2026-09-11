/* spd-match: far pct=4.33 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004f43d0();
int __cdecl FUN_004f4ea0();
int __cdecl FUN_004f4f10();
int __cdecl FUN_004f5000();
int __cdecl FUN_004f5030();
int __cdecl FUN_004fea10();
int __cdecl FUN_004ff1f0();
extern int _DAT_006cc7dc;

void FUN_004f7000(float param_1,float param_2)

{
  float10 fVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_ECX;
  int unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float local_18;
  float local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (unaff_ESI != 0) {
    iVar3 = *(int *)(unaff_ESI + 0x2c);
    local_18 = *(float *)(iVar3 + 0x1c);
    local_14 = *(float *)(iVar3 + 0x20);
    local_10 = *(undefined4 *)(iVar3 + 0x24);
    local_c = *(float *)(iVar3 + 0x38);
    local_8 = *(float *)(iVar3 + 0x3c);
    switch(*(undefined4 *)(unaff_ESI + 0x18)) {
    case 1:
    case 7:
    case 9:
      local_18 = local_c * ((int)_DAT_006cc7dc) + param_1;
      local_14 = local_8 * ((int)_DAT_006cc7dc) + param_2;
      break;
    case 2:
      iVar3 = FUN_004f43d0();
      if (iVar3 != 0) {
        fVar4 = (float10)FUN_004f4ea0(0);
        fVar6 = (float10)local_c;
        fVar5 = (float10)FUN_004f4f10(iVar3,*(undefined4 *)(unaff_ESI + 0x60),
                                      *(undefined4 *)(unaff_ESI + 0x6c));
        fVar1 = (float10)local_8;
        fVar6 = (float10)FUN_004f5000(iVar3,*(undefined4 *)(unaff_ESI + 0x68),(float)(fVar4 * fVar6)
                                     );
        local_18 = (float)((float10)param_1 - fVar6);
        fVar6 = (float10)FUN_004f5030(iVar3,extraout_ECX,(float)(fVar5 * fVar1));
        local_14 = (float)((float10)param_2 - fVar6);
      }
      break;
    default:
      local_18 = param_1;
      local_14 = param_2;
    }
    if (*(int *)(unaff_ESI + 0x18) < 0x100) {
      cVar2 = FUN_004fea10();
      if (cVar2 == '\0') {
        *(uint *)(unaff_ESI + 0x1c) = *(uint *)(unaff_ESI + 0x1c) | 0x400000;
      }
      FUN_004ff1f0(unaff_ESI,2,&local_18,0);
    }
  }
  return;
}
