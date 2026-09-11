/* Decompiled from Speed.exe @ 00480020 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480020(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_0073619c;
  *(float *)(param_1 + 0xccc) =
       *(float *)(DAT_0073619c + 0x540 + *(char *)(DAT_0073619c + 0x53e) * 4) * _DAT_006cc79c *
       DAT_007372b0;
  fVar1 = *(float *)(iVar3 + 0x540 + *(char *)(iVar3 + 0x53f) * 4) * _DAT_006cc79c * DAT_007372b0;
  *(float *)(param_1 + 0xcd0) = fVar1;
  fVar1 = ABS(fVar1 - *(float *)(param_1 + 0xccc));
  if (fVar1 < _DAT_006cc8bc != (fVar1 == _DAT_006cc8bc)) {
    *(float *)(param_1 + 0xccc) = -_DAT_006b6fa4;
    *(float *)(param_1 + 0xcd0) = DAT_007372b0 - _DAT_006b6fa8;
  }
  if (*(int *)(param_1 + 0xcb0) == 0) {
    *(undefined4 *)(param_1 + 0xcb0) = 3;
    puVar4 = &DAT_006fc4b0;
    puVar5 = (undefined4 *)(param_1 + 0xd0);
    for (iVar3 = 0x39; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x124) + *(float *)(param_1 + 0xccc);
    *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(param_1 + 0xcd0);
  }
  uVar2 = FUN_005461c0(0x32283a11,1,0);
  *(undefined4 *)(param_1 + 0xcf0) = uVar2;
  uVar2 = FUN_005461c0(0x317ec0f4,1,0);
  *(undefined4 *)(param_1 + 0xcf4) = uVar2;
  return;
}

