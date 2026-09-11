/* Decompiled from Speed.exe @ 004dfd70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dfd70(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = &DAT_006fa2b0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x24;
  } while ((int)puVar1 < 0x6fa5c8);
  iVar3 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 2) {
      if (iVar3 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
      }
      return;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  return;
}

