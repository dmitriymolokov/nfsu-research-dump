/* Decompiled from Speed.exe @ 0045b900 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0045b900(int *param_1,undefined4 param_2,undefined1 *param_3,int param_4,undefined4 param_5
                 ,int param_6)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  
  param_1[0x76] = 0;
  pfVar1 = (float *)(param_1 + 0x75);
  param_1[0x77] = 0x47c34f80;
  *pfVar1 = -1.0;
  cVar4 = FUN_0045b050(param_1,(char)param_1[0x74],pfVar1,param_1 + 0x76,param_1 + 0x77,0,param_2);
  if ((cVar4 != '\0') &&
     ((*(float *)(param_4 + 0x1d4) < *pfVar1 ||
      (fVar3 = ABS(*pfVar1 - *(float *)(param_4 + 0x1d4)),
      fVar3 < _DAT_006cc7b8 != (fVar3 == _DAT_006cc7b8))))) {
    *param_3 = 1;
    FUN_0045b8a0();
  }
  bVar2 = ABS(*pfVar1 - _DAT_006cc8a8) < _DAT_006cc8bc ==
          (ABS(*pfVar1 - _DAT_006cc8a8) == _DAT_006cc8bc);
  if ((((bVar2) && (1 < *param_1)) && (*param_1 < 4)) &&
     ((((char)param_1[3] == '\0' && (param_1[1] == param_6)) && ((char)param_1[0x74] != '\0')))) {
    FUN_0045b8a0();
  }
  return bVar2;
}

