/* Decompiled from Speed.exe @ 0054cf40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054cf40(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == 0x61757869)) {
    FUN_0054cf80();
    if (*(int *)(param_2 + 8) == 0) {
      _DAT_0073dda4 = DAT_0073dda0;
      DAT_0073dda0 = 10;
    }
  }
  return;
}

