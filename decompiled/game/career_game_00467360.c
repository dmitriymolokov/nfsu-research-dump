/* Decompiled from Speed.exe @ 00467360 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint __fastcall FUN_00467360(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x15);
  if (-1 < cVar1) {
    if (cVar1 < '\x03') {
      return 1;
    }
    if (cVar1 == '\x03') {
      return ((int)*(char *)(*(int *)(param_1 + 0x60) + 10) & 2U) >> 1;
    }
  }
  return 0;
}

