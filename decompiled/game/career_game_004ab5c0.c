/* Decompiled from Speed.exe @ 004ab5c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


int FUN_004ab5c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar1 = DAT_0073616c;
  iVar3 = 0;
  local_4 = 0;
  iVar2 = 0;
  if (0 < DAT_0073616c) {
    do {
      iVar2 = FUN_004ab470(&DAT_00748f70);
      if (iVar2 != 0) {
        local_4 = local_4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = local_4;
    } while (iVar3 < iVar1);
  }
  return iVar2;
}

