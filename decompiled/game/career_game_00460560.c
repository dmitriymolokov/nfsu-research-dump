/* Decompiled from Speed.exe @ 00460560 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00460560(int *param_1)

{
  (**(code **)(param_1[0x94] + 0x18))();
  if ((char)param_1[0x144] != '\0') {
    (**(code **)(*param_1 + 0xc))(0xa6);
    FUN_005740b0();
    (**(code **)(*param_1 + 0xc))(0xa7);
    FUN_005740b0();
    (**(code **)(*param_1 + 0xc))(0xa8);
    FUN_005740b0();
    (**(code **)(*param_1 + 0xc))(0xa9);
    FUN_005740b0();
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  return;
}

