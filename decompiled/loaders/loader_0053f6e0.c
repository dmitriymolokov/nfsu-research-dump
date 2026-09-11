/* spd-match: far pct=6.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2111 */
#include "ghidra_compat.h"

int __cdecl FUN_0040a880();
int __cdecl FUN_00540680();
extern int DAT_007349c8;
extern int DAT_00735594;
extern int DAT_00743c70;
extern unsigned char *DAT_00743c74;
extern int _DAT_007301d0;
extern int _DAT_00735580;
extern int _DAT_00735588;
extern int _DAT_0073558c;
extern int _DAT_00735590;

void FUN_0053f6e0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_c;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar9 = __allshr();
  piVar1 = DAT_00743c70;
  piVar10 = (int *)FUN_0040a880();
  while (piVar7 = piVar1, piVar7 != piVar10) {
    piVar1 = (int *)*piVar7;
    if (((piVar7[2] != 0) && (iVar11 = FUN_00540680(), piVar7[2] != 0)) && (iVar11 != piVar7[3])) {
      iVar2 = *piVar7;
      piVar3 = (int *)piVar7[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      if (iVar11 == 0) {
        *DAT_00743c74 = (int)piVar7;
        piVar3 = piVar7;
        piVar7[1] = (int)DAT_00743c74;
        DAT_00743c74 = piVar3;
        *piVar7 = (int)&DAT_00743c70;
      }
      else {
        puVar4 = *(undefined4 **)(iVar11 + 0x8c);
        *puVar4 = piVar7;
        *(int **)(iVar11 + 0x8c) = piVar7;
        piVar7[1] = (int)puVar4;
        *piVar7 = iVar11 + 0x88;
      }
      piVar7[3] = iVar11;
    }
  }
  QueryPerformanceCounter(&local_8);
  uVar8 = DAT_007349c8;
  local_c = __allshr();
  local_c = local_c - iVar9;
  if (local_c < 0) {
    local_c = 0;
  }
  fVar5 = (float)(1 << ((byte)uVar8 & 0x1f)) * (float)local_c * _DAT_007301d0;
  fVar6 = fVar5;
  if (fVar5 < _DAT_00735580) {
    fVar6 = _DAT_00735580;
  }
  _DAT_00735580 = fVar6;
  _DAT_00735588 = ((int)(_DAT_00735588)) + fVar5;
  DAT_00735594 = ((int)(DAT_00735594)) + 1;
  _DAT_00735590 = ((int)(_DAT_0073558c)) + _DAT_00735588;
  return;
}
