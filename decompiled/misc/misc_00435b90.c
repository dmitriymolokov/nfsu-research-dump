/* Decompiled from Speed.exe @ 00435b90 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_00435b90(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  iVar3 = 0;
  if (0 < DAT_007361c4) {
    do {
      iVar1 = *(int *)((&DAT_007361bc)[iVar3] + 0x58);
      if ((iVar1 != 0) && (iVar4 < iVar1)) {
        iVar2 = (&DAT_007361bc)[iVar3];
        iVar4 = iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_007361c4);
  }
  return iVar2;
}

