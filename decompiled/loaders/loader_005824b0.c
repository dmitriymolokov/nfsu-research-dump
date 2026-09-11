/* Decompiled from Speed.exe @ 005824b0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005824b0(int param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_58 [22];
  
  cVar2 = *(char *)(param_1 + 0x424);
  piVar9 = (int *)(param_1 + 8);
  piVar6 = piVar9;
  piVar7 = local_58;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  if (cVar2 == -1) {
    FUN_0057f2b0(1);
  }
  fVar3 = (*(float *)(param_1 + 0x418) - *(float *)(param_1 + 0x414)) * _DAT_006cc8f8;
  for (fVar1 = *(float *)(param_1 + 0x414); fVar1 < *(float *)(param_1 + 0x418);
      fVar1 = fVar1 + fVar3) {
  }
  for (fVar1 = *(float *)(param_1 + 0x414); fVar1 < *(float *)(param_1 + 0x418);
      fVar1 = fVar1 + fVar3) {
  }
  puVar8 = (undefined4 *)(param_1 + 0x34);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  iVar4 = 0;
  do {
    piVar6 = piVar9;
    for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar6 = iVar4;
      piVar6 = piVar6 + 1;
    }
    FUN_0057f2b0(1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  puVar8 = (undefined4 *)(param_1 + 0x34);
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 1;
    puVar8 = puVar8 + 1;
  }
  FUN_0057f2b0(1);
  piVar6 = local_58;
  for (iVar4 = 0x16; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
  }
  FUN_0057f2b0(1);
  return;
}

