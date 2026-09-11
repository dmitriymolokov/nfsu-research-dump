/* Decompiled from Speed.exe @ 005d7899 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005d7899(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    piVar1 = &param_1;
    do {
      piVar1 = (int *)(*piVar1 + 0xc);
    } while (*piVar1 != 0);
    *piVar1 = param_2;
    param_2 = param_1;
  }
  return param_2;
}

