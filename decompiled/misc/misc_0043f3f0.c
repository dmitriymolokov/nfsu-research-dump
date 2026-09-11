/* Decompiled from Speed.exe @ 0043f3f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0043f3f0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)_DAT_006ccb90;
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x24) != 0x7fffffff)) {
    fVar1 = (float10)(DAT_0073ad34 - *(int *)(param_1 + 0x24)) * (float10)_DAT_006cca38;
  }
  return fVar1;
}

