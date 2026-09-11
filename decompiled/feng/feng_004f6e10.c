/* spd-match: far pct=7.43 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004f43d0();
int __cdecl FUN_004f4ea0();
int __cdecl FUN_004f4f10();
int __cdecl FUN_004f5000();
int __cdecl FUN_004f5030();
int __cdecl FUN_0059fc60();
extern int _DAT_006cc7dc;
extern void LAB_004f6eb3(void);

void FUN_004f6e10(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  float10 fVar7;
  undefined1 local_800 [2048];
  
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 1:
    case 7:
    case 9:
      *param_2 = *(float *)(iVar3 + 0x38) * ((int)_DAT_006cc7dc) + *(float *)(iVar3 + 0x1c);
      *param_3 = *(float *)(iVar3 + 0x3c) * ((int)_DAT_006cc7dc) + *(float *)(iVar3 + 0x20);
      return;
    case 2:
      goto switchD_004f6e3f_caseD_2;
    default:
      *param_2 = *(float *)(iVar3 + 0x1c);
      *param_3 = *(float *)(iVar3 + 0x20);
      return;
    }
  }
  return;
switchD_004f6e3f_caseD_2:
  iVar5 = FUN_004f43d0();
  if (iVar5 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1c) & 2) == 0) {
    cVar4 = FUN_0059fc60(local_800,0x800);
    puVar6 = local_800;
    if (cVar4 != '\0') goto LAB_004f6eb3;
  }
  puVar6 = *(undefined1 **)(param_1 + 0x60);
LAB_004f6eb3:
  fVar7 = (float10)FUN_004f4ea0(0);
  fVar1 = (float)(fVar7 * (float10)*(float *)(iVar3 + 0x38));
  fVar7 = (float10)FUN_004f4f10(iVar5,puVar6,*(undefined4 *)(param_1 + 0x6c));
  fVar2 = (float)(fVar7 * (float10)*(float *)(iVar3 + 0x3c));
  fVar7 = (float10)FUN_004f5000(iVar5,*(undefined4 *)(param_1 + 0x68),fVar1);
  *param_2 = (float)(((float10)*(float *)(iVar3 + 0x1c) - fVar7) + (float10)fVar1);
  fVar7 = (float10)FUN_004f5030(iVar5,*(undefined4 *)(param_1 + 0x68),fVar2);
  *param_3 = (float)(((float10)*(float *)(iVar3 + 0x20) - fVar7) + (float10)fVar2);
  return;
}
