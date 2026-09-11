/* Decompiled from Speed.exe @ 004df710 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int * FUN_004df710(void)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  float local_8;
  
  local_8 = 0.0;
  piVar3 = (int *)0x0;
  piVar2 = (int *)&DAT_006fa2a8;
  do {
    fVar1 = DAT_006cc7a4;
    if (((char)piVar2[2] != '\0') && ((*piVar2 == 0 || (piVar2[1] < *piVar2)))) {
      fVar1 = (float)(int)(0xffU - piVar2[1] | piVar2[-1] << 8);
    }
    if (local_8 < fVar1) {
      piVar3 = piVar2 + -6;
      local_8 = fVar1;
    }
    piVar2 = piVar2 + 9;
  } while ((int)piVar2 < 0x6fa5c0);
  return piVar3;
}

