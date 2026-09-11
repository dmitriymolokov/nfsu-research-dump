/* Decompiled from Speed.exe @ 005aad90 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005aad90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if ((short)*(char *)(param_2 + 4 + iVar1) == *(short *)(param_1 + 10)) {
      if (iVar1 == -1) {
        return 0;
      }
      iVar2 = (int)*(char *)((iVar1 == 0) + 4 + param_2);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (&DAT_0077af30)[iVar2];
      }
      return *(short *)(param_2 + 8 + (uint)(iVar1 == 0) * 2) * 0x88 + 0x27c + iVar2;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return 0;
}

