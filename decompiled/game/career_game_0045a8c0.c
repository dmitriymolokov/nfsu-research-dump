/* Decompiled from Speed.exe @ 0045a8c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0045a8c0(char *param_1)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1[0x1ac] = '\0';
  param_1[0x1ad] = '\0';
  param_1[0x1ae] = '\0';
  param_1[0x1af] = '\0';
  if (*param_1 != 1 && -1 < *param_1 + -1) {
    pfVar1 = (float *)(param_1 + 0x24);
    do {
      iVar2 = iVar2 + 1;
      *(float *)(param_1 + 0x1ac) =
           SQRT((pfVar1[-5] - pfVar1[-1]) * (pfVar1[-5] - pfVar1[-1]) +
                (pfVar1[-4] - *pfVar1) * (pfVar1[-4] - *pfVar1) +
                (pfVar1[-3] - pfVar1[1]) * (pfVar1[-3] - pfVar1[1])) + *(float *)(param_1 + 0x1ac);
      pfVar1 = pfVar1 + 4;
    } while (iVar2 < *param_1 + -1);
  }
  return;
}

