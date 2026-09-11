/* Decompiled from Speed.exe @ 005566a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005566a0(int param_1)

{
  float10 fVar1;
  
  if (param_1 == 0) {
    FUN_004134c0(0x911ab364,0);
    FUN_004ee3a0();
  }
  else if (param_1 == 1) {
    *(undefined1 *)(DAT_00734f60 + 0x149) = 0;
    FUN_004134c0(0);
    FUN_004f6340();
    FUN_004134c0();
    FUN_004ebcb0();
    fVar1 = (float10)FUN_0040ed00();
    FUN_00424cd0(DAT_00734f60 + 0x154,(float)(fVar1 + (float10)_DAT_006ccb8c));
  }
  return;
}

