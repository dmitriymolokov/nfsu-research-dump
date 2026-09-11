/* Decompiled from Speed.exe @ 00654de0 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00654de0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_0064e520();
  iVar2 = 0;
  if (0 < DAT_00713ee8) {
    iVar1 = 0;
    do {
      FUN_00652030(*(undefined4 *)(iVar1 + DAT_00713f48));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x8c;
    } while (iVar2 < DAT_00713ee8);
  }
  FUN_0064e540();
  return;
}

