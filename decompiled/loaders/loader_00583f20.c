/* spd-match: far pct=1.53 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00583f20 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00583f20(int *param_1,float param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  
  iVar1 = param_1[1];
  if (1 < iVar1) {
    pfVar2 = (float *)*param_1;
    if (param_2 < *pfVar2 != (param_2 == *pfVar2)) {
      return (float10)pfVar2[1];
    }
    if (pfVar2[iVar1 * 2 + -2] <= param_2) {
      return (float10)pfVar2[iVar1 * 2 + -1];
    }
    iVar3 = 0;
    pfVar4 = pfVar2;
    if (0 < iVar1 + -1) {
      do {
        if ((*pfVar4 <= param_2) && (param_2 < pfVar4[2])) {
          pfVar4 = pfVar2 + iVar3 * 2 + 1;
          if (ABS((float10)pfVar2[iVar3 * 2 + 2] - (float10)pfVar2[iVar3 * 2]) <=
              (float10)(int)_DAT_006ccae0) {
            return ((float10)pfVar2[iVar3 * 2 + 3] - (float10)*pfVar4) * (float10)(int)_DAT_006cc7dc +
                   (float10)*pfVar4;
          }
          return (((float10)param_2 - (float10)pfVar2[iVar3 * 2]) /
                 ((float10)pfVar2[iVar3 * 2 + 2] - (float10)pfVar2[iVar3 * 2])) *
                 ((float10)pfVar2[iVar3 * 2 + 3] - (float10)*pfVar4) + (float10)*pfVar4;
        }
        iVar3 = iVar3 + 1;
        pfVar4 = pfVar4 + 2;
      } while (iVar3 < iVar1 + -1);
    }
  }
  return (float10)*(float *)(*param_1 + 4);
}

