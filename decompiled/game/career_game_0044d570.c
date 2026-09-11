/* Decompiled from Speed.exe @ 0044d570 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int __fastcall FUN_0044d570(int param_1)

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
    return (*(uint *)(*(short *)(param_1 + 0x5e) * 0x88 + iVar2 + 0x300) >> 0x14 & 0x1f) * 0x170 +
           DAT_00736158;
  }
  return 0;
}

