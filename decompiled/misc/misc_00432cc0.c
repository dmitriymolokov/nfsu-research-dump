/* Decompiled from Speed.exe @ 00432cc0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00432cc0(int param_1)

{
  if ((*(int *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x10) != 0x7fffffff)) {
    return (float10)((DAT_0078a314 - DAT_0073ad34) + *(int *)(param_1 + 0x10)) *
           (float10)_DAT_006cca38;
  }
  return (float10)DAT_0078a314 * (float10)_DAT_006cca38;
}

