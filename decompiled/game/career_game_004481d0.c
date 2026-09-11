/* Decompiled from Speed.exe @ 004481d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004481d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x9c) != 0) {
    if (*(int *)(unaff_ESI + 0xa0) != 0) {
      FUN_00447b10(*(int *)(unaff_ESI + 0x9c),&PTR_LAB_007008a0,0x2f,unaff_ESI + 0x18);
    }
    if (*(int *)(unaff_ESI + 0x9c) != 0) {
      FUN_00565ce0();
      *(undefined4 *)(unaff_ESI + 0x9c) = 0;
    }
    FUN_00447ee0();
    return;
  }
  return;
}

