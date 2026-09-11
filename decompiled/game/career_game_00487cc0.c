/* Decompiled from Speed.exe @ 00487cc0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487cc0(void)

{
  float fVar1;
  int unaff_ESI;
  undefined4 local_4;
  
  if (*(int *)(unaff_ESI + 0x2c) != 1) {
    local_4 = DAT_006b6d64;
    if (DAT_006b6d64 < *(float *)(unaff_ESI + 0x40)) {
      local_4 = *(float *)(unaff_ESI + 0x40);
    }
    FUN_00487980(local_4,DAT_006b6d68,DAT_006b6d6c,DAT_006b6d70,DAT_006b6d74,DAT_006b6d78,
                 DAT_006b6d7c,DAT_006b6d80,DAT_006b6d84,DAT_006b6d88,DAT_006b6d8c);
    fVar1 = _DAT_006b6d58 * *(float *)(unaff_ESI + 400);
    *(undefined4 *)(unaff_ESI + 0x184) = 0;
    *(undefined4 *)(unaff_ESI + 0x188) = 0;
    *(float *)(unaff_ESI + 400) = fVar1;
    *(undefined4 *)(unaff_ESI + 0x2c) = 2;
  }
  return;
}

