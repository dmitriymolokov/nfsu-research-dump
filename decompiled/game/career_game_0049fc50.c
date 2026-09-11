/* Decompiled from Speed.exe @ 0049fc50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0049fc50(int param_1)

{
  if ((*(int *)(param_1 + 0x114) != 0) && (*(int *)(param_1 + 0x114) != 0x7fffffff)) {
    return (float10)(DAT_0073ad34 - *(int *)(param_1 + 0x114)) * (float10)_DAT_006cca38;
  }
  return (float10)_DAT_006cc8a8;
}

