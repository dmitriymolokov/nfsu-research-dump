/* Decompiled from Speed.exe @ 00434f80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434f80(int param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  
  iVar13 = 0;
  if (0 < DAT_007361c4) {
    do {
      if ((&DAT_007361bc)[iVar13] != 0) {
        piVar4 = *(int **)(*(int *)((&DAT_007361bc)[iVar13] + 4) + 0x1c);
        cVar2 = *(char *)((int)piVar4 + 10);
        cVar3 = *(char *)((int)piVar4 + 0xb);
        if (cVar2 != cVar3) {
          iVar11 = (int)cVar3;
          if (*(int *)(param_1 + 0x24) < iVar11) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = *(int **)(param_1 + 0x51c + iVar11 * 4);
          }
          iVar5 = *piVar4;
          fVar1 = *(float *)(iVar5 + 0x3d4);
          iVar6 = *piVar12;
          fVar7 = *(float *)(iVar6 + 0x3d4);
          if ((_DAT_006ccb50 < fVar1) &&
             (fVar8 = *(float *)(iVar5 + 0x60) - *(float *)(iVar6 + 0x60),
             fVar10 = *(float *)(iVar5 + 100) - *(float *)(iVar6 + 100),
             fVar9 = *(float *)(iVar5 + 0x68) - *(float *)(iVar6 + 0x68),
             SQRT(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9) < _DAT_006ccb18)) {
            if (cVar2 < cVar3) {
              pcVar14 = "GainPosition";
              fVar8 = _DAT_006b79d4 / (float)(int)cVar2 + _DAT_006b79d0;
            }
            else {
              pcVar14 = "LosePosition";
              fVar8 = _DAT_006b79d8 / (float)iVar11;
            }
            FUN_00572970(fVar8,pcVar14);
            if (ABS(fVar1 - fVar7) < _DAT_006ccb94) {
              FUN_00572970(DAT_006b79dc,"ClosePass");
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < DAT_007361c4);
  }
  return;
}

