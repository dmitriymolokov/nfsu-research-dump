/* Decompiled from Speed.exe @ 00430650 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00430650(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_006cc8a8;
  if ((((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) && (*(int *)(param_1 + 0x114) != 0)) &&
     (*(int *)(param_1 + 0x114) != 0x7fffffff)) {
    fVar1 = (float10)DAT_00700b64 -
            (float10)(DAT_0073ad34 - *(int *)(param_1 + 0x114)) * (float10)_DAT_006cca38;
    if (fVar1 <= (float10)DAT_006cc7a4) {
      fVar1 = (float10)DAT_006cc7a4;
    }
  }
  return fVar1;
}

