/* Decompiled from Speed.exe @ 00659990 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00659990(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  sVar1 = *(short *)(param_1 * 0x8c + DAT_00713f48 + 0x28);
  if (sVar1 != -1) {
    iVar2 = 1;
    psVar3 = (short *)(sVar1 * 0x8c + DAT_00713f48 + 6);
    do {
      if (*psVar3 == param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      psVar3 = psVar3 + 1;
    } while (iVar2 < 6);
  }
  return 0;
}

