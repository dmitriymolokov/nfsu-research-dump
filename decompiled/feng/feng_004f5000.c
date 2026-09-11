/* Decompiled from Speed.exe @ 004f5000 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004f5000(undefined4 param_1,byte param_2,float param_3)

{
  if ((param_2 & 1) != 0) {
    return (float10)param_3 * (float10)_DAT_006cc920;
  }
  if ((param_2 & 2) != 0) {
    return -(float10)param_3;
  }
  return (float10)DAT_006cc7a4;
}

