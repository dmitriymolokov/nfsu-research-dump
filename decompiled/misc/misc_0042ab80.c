/* Decompiled from Speed.exe @ 0042ab80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0042ab80(int param_1)

{
  if ((*(int *)(param_1 + 0x3b8) != 0) && (*(int *)(param_1 + 0x3b8) != 0x7fffffff)) {
    return (float10)*(int *)(param_1 + 0x3b8) * (float10)_DAT_006cca38;
  }
  return (float10)DAT_006cc7a4;
}

