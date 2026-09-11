/* Decompiled from Speed.exe @ 004c5c60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c5c60(undefined4 param_1,int param_2)

{
  if ((*(char *)(param_2 + 0x44) == '\0') || (*(int *)(param_2 + 0x48) != 1)) {
    if (DAT_0075f240 == 0) {
      if (DAT_0073578c != 0) {
        FUN_004f5ed0(DAT_0073578c);
      }
    }
    else if ((DAT_0075f240 == 1) || (DAT_0075f240 != 2)) {
      if (DAT_0073578c != 0) {
        FUN_004f5ed0(DAT_0073578c);
        return;
      }
    }
    else if (DAT_0073578c != 0) {
      FUN_004f5ed0(DAT_0073578c);
      return;
    }
  }
  else if (DAT_0073578c != 0) {
    FUN_004f5ed0(DAT_0073578c);
    return;
  }
  return;
}

