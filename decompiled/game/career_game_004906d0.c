/* Decompiled from Speed.exe @ 004906d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004906d0(int param_1)

{
  undefined4 local_8;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    local_8 = 0;
    if (0 < *(int *)(param_1 + 0x10)) {
      do {
        FUN_00402bd0();
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(param_1 + 0x10));
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return;
}

