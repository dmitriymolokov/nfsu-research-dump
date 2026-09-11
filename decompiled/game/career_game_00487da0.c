/* Decompiled from Speed.exe @ 00487da0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487da0(void)

{
  float fVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x2c) != 1) {
    FUN_00487980(DAT_006b6d90,DAT_006b6d94,DAT_006b6d98,DAT_006b6d9c,DAT_006b6da0,DAT_006b6da4,
                 DAT_006b6da8,DAT_006b6dac,DAT_006b6db0,DAT_006b6db4,DAT_006b6db8);
    fVar1 = _DAT_006b6d5c * *(float *)(unaff_ESI + 400);
    *(undefined4 *)(unaff_ESI + 0x184) = 0;
    *(undefined4 *)(unaff_ESI + 0x188) = 0;
    *(float *)(unaff_ESI + 400) = fVar1;
    *(undefined4 *)(unaff_ESI + 0x2c) = 2;
  }
  return;
}

