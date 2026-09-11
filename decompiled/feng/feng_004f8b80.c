/* spd-match: far pct=4.19 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2297 */
#include "ghidra_compat.h"

int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004f6e10();
int __cdecl FUN_004f6f60();
int __cdecl FUN_004f7140();
int __cdecl FUN_004f75b0();
int __cdecl FUN_00503f60();
int __cdecl FUN_00674898();
extern int DAT_006cc7a4;
extern int _DAT_006cc7bc;
extern int _DAT_006cc910;
extern int _DAT_006cc914;
extern int _DAT_006cc918;
extern int _DAT_006ccb70;
extern int _DAT_006ccd18;
extern void LAB_004f8cad(void);

void FUN_004f8b80(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar10 = *(int **)(param_1 + 4);
  if (piVar10 != (int *)(param_1 + 4)) {
    do {
      fVar2 = param_2 + (float)piVar10[4] + *(float *)(param_1 + 0x14);
      if ((fVar2 < _DAT_006ccd18) || (_DAT_006ccb70 < fVar2)) {
        FUN_004f6910(piVar10[3]);
      }
      else {
        FUN_004f6970(piVar10[3]);
      }
      iVar4 = piVar10[3];
      iVar9 = piVar10[8];
      iVar1 = piVar10[7];
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + 0x18);
        iVar6 = *(int *)(iVar4 + 0x2c);
        if (((iVar5 == 1) || (iVar5 == 7)) || (iVar5 == 9)) {
          *(int *)(iVar6 + 0x38) = iVar1;
          *(int *)(iVar6 + 0x3c) = iVar9;
        }
        *(int *)(iVar6 + 0x38) = iVar1;
        *(int *)(iVar6 + 0x3c) = iVar9;
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
      }
      FUN_004f7140(fVar2,*(undefined4 *)(param_1 + 0x18));
      FUN_004f6e10(piVar10[3],local_14,&local_1c);
      if (fVar2 < _DAT_006cc918) {
LAB_004f8cad:
        local_20 = 0.0;
      }
      else if (DAT_006cc7a4 <= fVar2) {
        if (_DAT_006cc910 <= fVar2) goto LAB_004f8cad;
        local_20 = ((int)_DAT_006cc7bc) - fVar2 * ((int)_DAT_006cc914);
      }
      else {
        local_20 = fVar2 * ((int)_DAT_006cc914) + _DAT_006cc7bc;
      }
      iVar9 = piVar10[3];
      fVar2 = (float)piVar10[8];
      fVar3 = (float)piVar10[7];
      if (iVar9 != 0) {
        iVar1 = *(int *)(iVar9 + 0x18);
        iVar4 = *(int *)(iVar9 + 0x2c);
        if (((iVar1 == 1) || (iVar1 == 7)) || (iVar1 == 9)) {
          *(float *)(iVar4 + 0x38) = local_20 * fVar3;
          *(float *)(iVar4 + 0x3c) = local_20 * fVar2;
        }
        *(float *)(iVar4 + 0x38) = local_20 * fVar3;
        *(float *)(iVar4 + 0x3c) = local_20 * fVar2;
        *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x400000;
      }
      FUN_004f6e10(piVar10[3],&local_18,local_14);
      FUN_004f6f60(local_18,local_1c);
      if (piVar10[3] == 0) {
        local_4 = 0;
        local_8 = 0;
        local_c = 0;
        local_10 = 0;
      }
      else {
        puVar7 = *(undefined4 **)(piVar10[3] + 0x2c);
        local_10 = *puVar7;
        local_c = puVar7[1];
        local_8 = puVar7[2];
        local_4 = puVar7[3];
      }
      uVar8 = FUN_00503f60();
      iVar9 = FUN_00674898();
      FUN_004f75b0(iVar9 << 0x18 | uVar8 & 0xffffff);
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)(param_1 + 4));
  }
  return;
}
