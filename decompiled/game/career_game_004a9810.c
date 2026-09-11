/* Decompiled from Speed.exe @ 004a9810 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_004a9810(float *param_1,int *param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  
  iVar1 = param_2[1];
  if (iVar1 < 2) {
    if (iVar1 < 1) {
      return;
    }
    pfVar3 = (float *)(*param_2 + 4);
  }
  else {
    pfVar3 = (float *)*param_2;
    if (param_3 < *pfVar3 != (param_3 == *pfVar3)) {
      *param_1 = pfVar3[1];
      param_1[1] = pfVar3[2];
      param_1[2] = pfVar3[3];
      param_1[3] = pfVar3[4];
      return;
    }
    if (param_3 < pfVar3[iVar1 * 5 + -5]) {
      iVar2 = 0;
      pfVar4 = pfVar3;
      if (iVar1 + -1 < 1) {
        return;
      }
      while ((param_3 < *pfVar4 || (pfVar4[5] <= param_3))) {
        iVar2 = iVar2 + 1;
        pfVar4 = pfVar4 + 5;
        if (iVar1 + -1 <= iVar2) {
          return;
        }
      }
      FUN_004a4900(param_2,(param_3 - pfVar3[iVar2 * 5]) /
                           ((pfVar3 + iVar2 * 5)[5] - pfVar3[iVar2 * 5]));
      return;
    }
    pfVar3 = pfVar3 + iVar1 * 5 + -4;
  }
  *param_1 = *pfVar3;
  param_1[1] = pfVar3[1];
  param_1[2] = pfVar3[2];
  param_1[3] = pfVar3[3];
  return;
}

