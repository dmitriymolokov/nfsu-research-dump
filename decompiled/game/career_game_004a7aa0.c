/* Decompiled from Speed.exe @ 004a7aa0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a7aa0(int param_1)

{
  if (*(char *)(param_1 + 0xad) == '\0') {
    FUN_004f6910(*(undefined4 *)(param_1 + 0x88),param_1);
  }
  else if (_DAT_006ccc00 < (float)(DAT_0073ad34 - *(int *)(param_1 + 0xb0)) * _DAT_006cca38) {
    FUN_004f6910(*(undefined4 *)(param_1 + 0x88));
    return;
  }
  return;
}

