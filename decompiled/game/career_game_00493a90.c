/* Decompiled from Speed.exe @ 00493a90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00493a90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *unaff_ESI;
  int local_24;
  float local_18;
  
  piVar4 = *(int **)(param_1 + 8);
  local_24 = 0;
  local_18 = DAT_006cc7a4;
  fVar1 = DAT_006cc7a4;
  fVar2 = DAT_006cc7a4;
  if (piVar4 != (int *)(param_1 + 8)) {
    do {
      local_24 = local_24 + 1;
      fVar1 = fVar1 + (float)piVar4[4];
      fVar2 = (float)piVar4[5] + fVar2;
      local_18 = local_18 + (float)piVar4[6];
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)(param_1 + 8));
    if (0 < local_24) goto LAB_00493ae3;
  }
  local_24 = 1;
LAB_00493ae3:
  fVar3 = _DAT_006cc7bc / (float)local_24;
  *unaff_ESI = fVar1 * fVar3;
  unaff_ESI[1] = fVar2 * fVar3;
  unaff_ESI[2] = local_18 * fVar3;
  return;
}

