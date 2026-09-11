/* Decompiled from Speed.exe @ 006533c0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006533c0(uint param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_00713db7 != 0) {
    pfVar1 = param_2;
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = (float)*(byte *)(*(int *)(((int)&DAT_00714034 - (int)param_2) + (int)pfVar1) +
                                (param_1 >> 8 & 0xff)) * _DAT_006cc970;
      pfVar1 = pfVar1 + 1;
    } while (iVar2 < (int)(uint)DAT_00713db7);
  }
  if (DAT_00713ce0 == 3) {
    param_2[5] = 0.0;
  }
  return;
}

