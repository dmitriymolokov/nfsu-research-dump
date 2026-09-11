/* Decompiled from Speed.exe @ 0042eee0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0042eee0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int *piVar8;
  float *unaff_ESI;
  float *unaff_EDI;
  int local_1c;
  
  iVar7 = *(int *)(DAT_007361f8 + 0x20) - *(int *)(DAT_007361f8 + 0x1c);
  local_1c = 0;
  if (iVar7 < 1) {
    return 0;
  }
  piVar8 = (int *)(DAT_007361f8 + 0x28 + *(int *)(DAT_007361f8 + 0x1c) * 4);
  fVar6 = _DAT_006cc7bc;
  do {
    iVar1 = *piVar8;
    fVar2 = *(float *)(iVar1 + 0x60) - *unaff_EDI;
    fVar5 = *(float *)(iVar1 + 100) - unaff_EDI[1];
    fVar4 = *(float *)(iVar1 + 0x68) - unaff_EDI[2];
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
    fVar2 = fVar5 * unaff_ESI[1] + fVar4 * unaff_ESI[2] + fVar2 * *unaff_ESI;
    fVar4 = (_DAT_006cc7bc / _DAT_006b7a34) * fVar2;
    fVar2 = SQRT(fVar3 * fVar3 - fVar2 * fVar2) * (_DAT_006cc7bc / _DAT_006b7a38);
    fVar3 = DAT_006cc7a4;
    if ((DAT_006cc7a4 < fVar4) && (fVar3 = fVar4, _DAT_006cc7bc < fVar4)) {
      fVar3 = _DAT_006cc7bc;
    }
    if (((fVar4 == fVar3) && (fVar2 < _DAT_006cc7bc != (fVar2 == _DAT_006cc7bc))) && (fVar2 < fVar6)
       ) {
      local_1c = iVar1;
      fVar6 = fVar2;
    }
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return local_1c;
}

