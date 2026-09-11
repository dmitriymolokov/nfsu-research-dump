/* Decompiled from Speed.exe @ 00459710 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00459710(float param_1,float *param_2)

{
  int iVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *unaff_ESI;
  int local_14;
  float local_8;
  float local_4;
  
  if (DAT_0073ad34 != unaff_ESI[0x69]) {
    cVar2 = *(char *)unaff_ESI;
    if ('\0' < cVar2) {
      iVar1 = cVar2 + -1;
      if (param_1 <= _DAT_006ccac0) {
        param_1 = DAT_006b7524;
      }
      else {
        param_1 = DAT_006b7520;
      }
      FUN_005672b0();
      iVar10 = 0;
      pfVar4 = unaff_ESI;
      local_14 = iVar1;
      if (0 < cVar2) {
        do {
          fVar3 = pfVar4[4] - *param_2;
          fVar5 = pfVar4[5] - param_2[1];
          fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
          fVar7 = SQRT(fVar6);
          fVar8 = _DAT_006cc7bc;
          fVar9 = DAT_006cc7a4;
          if (fVar7 != DAT_006cc7a4) {
            fVar7 = _DAT_006cc7bc / fVar7;
            fVar8 = fVar7 * fVar3;
            fVar9 = fVar7 * fVar5;
          }
        } while (((local_8 * fVar8 + local_4 * fVar9 <= param_1) ||
                 (local_14 = iVar10, fVar6 <= _DAT_0077a4a8)) &&
                (iVar10 = iVar10 + 1, pfVar4 = pfVar4 + 4, local_14 = iVar1,
                iVar10 < *(char *)unaff_ESI));
      }
      *(undefined1 *)(unaff_ESI + 0x68) = (undefined1)local_14;
      unaff_ESI[0x69] = DAT_0073ad34;
      return (int)*(char *)(unaff_ESI + 0x68);
    }
    *(undefined1 *)(unaff_ESI + 0x68) = 0;
    unaff_ESI[0x69] = 0.0;
  }
  return (int)*(char *)(unaff_ESI + 0x68);
}

