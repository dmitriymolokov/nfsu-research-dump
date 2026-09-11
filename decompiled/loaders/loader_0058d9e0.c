/* Decompiled from Speed.exe @ 0058d9e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0058d9e0(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float *pfVar6;
  float *pfVar7;
  
  uVar4 = 0;
  bVar2 = 0;
  pcVar5 = (char *)(param_1 + 0xe8);
  pfVar7 = (float *)&DAT_006f0414;
  do {
    if (-1 < *pcVar5) {
      fVar1 = DAT_006cc7a4;
      if (DAT_0078a336 != '\0') {
        fVar1 = (float)*(byte *)(*pcVar5 + 0x14 + param_1) * _DAT_006cc7cc;
      }
      iVar3 = 3;
      pfVar6 = pfVar7;
      do {
        if (*pfVar6 <= fVar1) break;
        iVar3 = iVar3 + -1;
        pfVar6 = pfVar6 + -1;
      } while (0 < iVar3);
      uVar4 = uVar4 | iVar3 << (bVar2 & 0x1f);
    }
    pfVar7 = pfVar7 + 9;
    pcVar5 = pcVar5 + 1;
    bVar2 = bVar2 + 2;
    if (0x6f062f < (int)pfVar7) {
      return uVar4;
    }
  } while( true );
}

