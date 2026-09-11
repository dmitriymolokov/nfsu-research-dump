/* Decompiled from Speed.exe @ 004af540 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_004af540(void)

{
  int iVar1;
  
  iVar1 = FUN_004af420();
  if (*(int *)(iVar1 + 0x1c9c) == 0) {
    iVar1 = FUN_004af420();
    if (*(int *)(iVar1 + 0x1ca0) == 0) {
      iVar1 = FUN_004af420();
      if (*(int *)(iVar1 + 0x1c9c) == 0) {
        iVar1 = FUN_004af420();
        if (*(int *)(iVar1 + 0x1ca0) == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

