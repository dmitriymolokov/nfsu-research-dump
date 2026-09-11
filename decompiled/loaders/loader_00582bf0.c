/* Decompiled from Speed.exe @ 00582bf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


float10 __fastcall FUN_00582bf0(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar4 = 1;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (1 < *(int *)(param_1 + 4)) {
      pfVar3 = *(float **)(param_1 + 0xc);
      pfVar2 = pfVar3 + 2;
      do {
        pfVar3 = pfVar3 + 4;
        iVar4 = iVar4 + 1;
        fVar1 = pfVar2[4] - *pfVar2;
        *(float *)(param_1 + 0x20) =
             SQRT((*pfVar3 - pfVar2[-2]) * (*pfVar3 - pfVar2[-2]) +
                  (pfVar2[3] - pfVar2[-1]) * (pfVar2[3] - pfVar2[-1]) + fVar1 * fVar1) +
             *(float *)(param_1 + 0x20);
        pfVar2 = pfVar2 + 4;
      } while (iVar4 < *(int *)(param_1 + 4));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return (float10)*(float *)(param_1 + 0x20);
}

