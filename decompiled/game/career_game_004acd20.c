/* spd-match: far pct=5.22 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2107 */
#include "ghidra_compat.h"

int __cdecl FUN_00434150();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043b850();
int __cdecl FUN_004a9990();
int __cdecl FUN_00580240();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int DAT_006f227c;
extern int DAT_0073619c;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern int DAT_0078a31c;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int _DAT_006b5e7c;
extern int _DAT_006cc7bc;
extern int _DAT_006cc964;
int unaff_ESI;
int _param_2;

void FUN_004acd20(int *param_1,char param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *unaff_ESI;
  uint uVar10;
  float10 fVar11;
  int *local_4;
  
  piVar2 = param_1;
  iVar7 = *param_1;
  if (iVar7 == 0) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = *(int **)(iVar7 + 0x18);
  }
  if ((((*(char *)(*(int *)(iVar7 + 0x14) + 0x734) != '\0') && (param_2 == '\0')) &&
      (piVar4 = (int *)FUN_0043b850((int)*(short *)(iVar7 + 10)), piVar4 != (int *)0x0)) &&
     (((iVar5 = *piVar4, iVar5 == 3 || (iVar5 == 4)) ||
      ((iVar5 == 5 || ((iVar5 == 0 || (iVar5 == 6)))))))) {
    FUN_004a9990();
    return;
  }
  *unaff_ESI = (int)*(char *)((int)piVar2 + 10);
  unaff_ESI[1] = (int)*(short *)(*piVar2 + 10);
  unaff_ESI[2] = (int)(short)piVar2[4];
  unaff_ESI[3] = piVar2[0x44];
  FUN_00434150();
  iVar5 = FUN_00674898();
  unaff_ESI[0x31] = iVar5;
  unaff_ESI[6] = piVar2[0x46];
  unaff_ESI[7] = piVar2[0x47];
  unaff_ESI[0x1e] = (int)*(char *)((int)piVar2 + 9);
  unaff_ESI[0x1f] = piVar2[5];
  unaff_ESI[0x2b] = *(int *)(*piVar2 + 0x3b8);
  unaff_ESI[0x2c] = piVar2[0x48];
  unaff_ESI[0x2d] = piVar2[0x4a];
  unaff_ESI[0x2e] = piVar2[0x49];
  unaff_ESI[0x55] = piVar2[0x4b];
  unaff_ESI[0x54] = piVar2[0x4c];
  unaff_ESI[0x2a] = 0;
  unaff_ESI[4] = 0;
  if (0 < unaff_ESI[0x1e]) {
    unaff_ESI[4] = piVar2[*(char *)(DAT_0073619c + 0x53f) + 0x18];
  }
  if (param_1 == (int *)0x0) {
    unaff_ESI[0x2f] = 0;
    unaff_ESI[0x30] = 0;
    unaff_ESI[5] = -1;
  }
  else {
    unaff_ESI[0x2f] = *(int *)((int)param_1 + 0x9dc);
    fVar1 = *(float *)(*(int *)(iVar7 + 0x14) + 0x738);
    if (fVar1 <= _DAT_006cc7bc) {
      fVar1 = _DAT_006cc7bc;
    }
    unaff_ESI[0x30] = (int)fVar1;
    unaff_ESI[5] = (int)*(char *)((int)param_1 + 0x22);
  }
  unaff_ESI[0x52] = 0;
  unaff_ESI[0x53] = 0;
  piVar4 = unaff_ESI + 0x48;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  piVar4 = unaff_ESI + 0x3d;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  if ((param_1 != (int *)0x0) && ((DAT_0078a345 != '\0' || (DAT_007361a4 != 0)))) {
    iVar7 = *(int *)((int)param_1 + 0x960);
    iVar5 = FUN_00674898();
    unaff_ESI[0x52] = iVar5;
    unaff_ESI[0x53] = *(int *)(iVar7 + 0x2c);
  }
  piVar4 = unaff_ESI + 0x13;
  iVar7 = 0xb;
  do {
    piVar4[-0xb] = 0;
    *piVar4 = 0;
    piVar4[0x1f] = 0;
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  _param_2 = 1;
  if (0 < DAT_0078a31c) {
    local_4 = (int *)((int)param_1 + 0xa0c);
    piVar4 = unaff_ESI + 0x14;
    piVar9 = piVar2 + 0x2e;
    do {
      if (10 < _param_2) break;
      piVar4[-0xb] = piVar9[-0xb];
      *piVar4 = *piVar9;
      iVar7 = FUN_00674898();
      piVar4[0x1f] = iVar7;
      piVar4[0x2a] = piVar4[0x29] + iVar7;
      if (param_1 != (int *)0x0) {
        piVar4[0x34] = *local_4;
      }
      _param_2 = _param_2 + 1;
      local_4 = local_4 + 1;
      piVar9 = piVar9 + 1;
      piVar4 = piVar4 + 1;
    } while (_param_2 <= DAT_0078a31c);
  }
  if (((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) && (cVar3 = FUN_0043a2e0(), cVar3 == '\0')) {
    *unaff_ESI = unaff_ESI[DAT_0078a31c + 0x47];
  }
  if (unaff_ESI[2] == 3) {
    unaff_ESI[3] = 0;
  }
  if (unaff_ESI[2] == 1) {
    if ((((float)unaff_ESI[0x2e] < DAT_006cc7a4 != ((float)unaff_ESI[0x2e] == DAT_006cc7a4)) ||
        (unaff_ESI[0x2d] == 0)) || (unaff_ESI[0x2d] == 0x7fffffff)) {
      uVar8 = DAT_006f227c % 0x7fffffff;
      uVar10 = DAT_006f227c ^ 0x1d872b41;
      uVar6 = uVar10 >> 5 ^ uVar10;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar10;
      fVar1 = (float)uVar8 * _DAT_006b5e7c;
      unaff_ESI[0x2e] =
           (int)(((fVar1 + fVar1) - _DAT_006cc7bc) * *(float *)(*(int *)(*piVar2 + 0x10) + 0x440) *
                 _DAT_006cc964 + *(float *)(*(int *)(*piVar2 + 0x10) + 0x440));
      uVar8 = DAT_006f227c ^ 0x1d872b41;
      uVar6 = uVar8 >> 5 ^ uVar8;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar8;
      iVar7 = FUN_00674898();
      unaff_ESI[0x2d] = iVar7;
    }
    if ((unaff_ESI[0x2c] == 0) || (unaff_ESI[0x2c] == 0x7fffffff)) {
      uVar8 = DAT_006f227c ^ 0x1d872b41;
      uVar6 = uVar8 >> 5 ^ uVar8;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar8;
      iVar7 = FUN_00674898();
      unaff_ESI[0x2c] = iVar7;
    }
    if (((char)piVar2[0x45] != '\0') && ((DAT_0078a344 != '\0' || (DAT_007361a8 != 0)))) {
      fVar11 = (float10)FUN_00580240();
      uVar10 = DAT_006f227c % 0x7fffffff;
      uVar8 = DAT_006f227c ^ 0x1d872b41;
      uVar6 = uVar8 >> 5 ^ uVar8;
      DAT_006f227c = uVar6 << 0x1b ^ uVar6 ^ uVar8;
      unaff_ESI[6] = (int)(float)(fVar11 - (float10)uVar10 * (float10)_DAT_006b5e7c * fVar11 *
                                           (float10)_DAT_006cc964);
    }
  }
  return;
}
