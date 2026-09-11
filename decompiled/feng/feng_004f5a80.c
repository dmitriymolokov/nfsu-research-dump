/* Decompiled from Speed.exe @ 004f5a80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


uint FUN_004f5a80(void)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = &DAT_006f923c;
  do {
    uVar1 = 0;
    piVar2 = piVar3;
    do {
      if (*piVar2 != 0) {
        return CONCAT31((int3)(uVar1 >> 8),1);
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < 4);
    piVar3 = piVar3 + 7;
  } while ((int)piVar3 < 0x6f9488);
  return uVar1 & 0xffffff00;
}

