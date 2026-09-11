/* Decompiled from Speed.exe @ 0044c9c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0044c9c0(int param_1)

{
  char in_AL;
  undefined4 *puVar1;
  
  if (((in_AL != '\0') && (*(char *)(param_1 + 0x410) == '\0')) &&
     (puVar1 = DAT_0077af20, (undefined4 **)DAT_0077af20 != &DAT_0077af20)) {
    do {
      if (puVar1 == (undefined4 *)0x0) break;
      puVar1 = (undefined4 *)*puVar1;
    } while ((undefined4 **)puVar1 != &DAT_0077af20);
  }
  FUN_0044bcb0();
  (**(code **)(**(int **)(param_1 + 8) + 0x38))(0,0,0,1);
  *(undefined1 *)(param_1 + 0x410) = 1;
  return;
}

