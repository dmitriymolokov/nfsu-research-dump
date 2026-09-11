/* Decompiled from Speed.exe @ 0054cb30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054cb30(undefined4 param_1,int param_2)

{
  if ((param_2 != 0) &&
     ((*(int *)(param_2 + 4) == 0x67637265 || (*(int *)(param_2 + 4) == 0x676a6f69)))) {
    FUN_0054cf80();
    if (*(int *)(param_2 + 8) == 0) {
      FUN_006652f0(&DAT_0073dafc,*(undefined4 *)(param_2 + 0xc));
      _DAT_0073dda4 = DAT_0073dda0;
      DAT_0073dda0 = 0x14;
      if (*(int *)(param_2 + 4) != 0x676a6f69) {
        DAT_0073d875 = 0;
        DAT_0073dd9c = 0xffffffff;
      }
      DAT_0073ddb8 = 1;
      return;
    }
    if (DAT_0073ddac != (code *)0x0) {
      (*DAT_0073ddac)();
    }
    DAT_0073dda8 = 0;
    DAT_0073ddac = (code *)0x0;
  }
  return;
}

