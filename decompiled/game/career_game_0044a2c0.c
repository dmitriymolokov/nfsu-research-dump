/* Decompiled from Speed.exe @ 0044a2c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int __fastcall FUN_0044a2c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x5c);
  if ((cVar1 != -1) && (*(short *)(param_1 + 0x5e) != -1)) {
    if (cVar1 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (&DAT_0077af30)[cVar1];
    }
    return *(short *)(param_1 + 0x5e) * 0x88 + 0x27c + iVar2;
  }
  return 0;
}

