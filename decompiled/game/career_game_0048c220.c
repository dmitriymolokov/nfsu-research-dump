/* Decompiled from Speed.exe @ 0048c220 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0048c220(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0043a2e0();
  if (((cVar1 != '\0') || (DAT_007361f0 == (int *)0x0)) ||
     ((*DAT_007361f0 != 7 && (*DAT_007361f0 != 0xb)))) {
    if (DAT_00735f5c == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) =
           *(undefined2 *)(*(int *)(param_1 + 0x20) + 0x1c8);
    }
    FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x20) + 0x1f0,DAT_0073ad38);
  }
  return;
}

