/* Decompiled from Speed.exe @ 00660820 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00660820(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_00713db6 != 0) {
    do {
      if (((undefined4 *)(&DAT_007163dc)[iVar2] != (undefined4 *)0x0) &&
         (iVar1 = FUN_00652720(*(undefined4 *)(&DAT_007163dc)[iVar2]), iVar1 == param_1)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)DAT_00713db6);
  }
  return -1;
}

