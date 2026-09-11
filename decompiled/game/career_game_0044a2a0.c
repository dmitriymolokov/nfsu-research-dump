/* Decompiled from Speed.exe @ 0044a2a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0044a2a0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x5c);
  if (((cVar1 != -1) && (*(short *)(param_1 + 0x5e) != -1)) && (-1 < cVar1)) {
    return (&DAT_0077af30)[cVar1];
  }
  return 0;
}

