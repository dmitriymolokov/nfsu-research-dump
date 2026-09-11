/* Decompiled from Speed.exe @ 00487e20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487e20(void)

{
  float fVar1;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x2c) != 1) {
    FUN_00487980(DAT_006b6dbc,DAT_006b6dc0,DAT_006b6dc4,DAT_006b6dc8,DAT_006b6dcc,DAT_006b6dd0,
                 DAT_006b6dd4,DAT_006b6dd8,DAT_006b6ddc,DAT_006b6de0,DAT_006b6de4);
    fVar1 = _DAT_006b6d60 * *(float *)(unaff_ESI + 400);
    *(undefined4 *)(unaff_ESI + 0x184) = 0;
    *(undefined4 *)(unaff_ESI + 0x188) = 0;
    *(float *)(unaff_ESI + 400) = fVar1;
    *(undefined4 *)(unaff_ESI + 0x2c) = 2;
    *(float *)(unaff_ESI + 0x18c) = fVar1;
  }
  return;
}

