/* Decompiled from Speed.exe @ 00414930 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00414930(void)

{
  int iVar1;
  char cVar2;
  
  FUN_004075e0();
  iVar1 = (&DAT_0071b808)[DAT_00736344 * 3];
  if ((&DAT_0078dbd8)[iVar1 * 0x9c] != -1) {
    cVar2 = FUN_00405570();
    if (cVar2 != '\0') {
      FUN_00405e10();
      FUN_00414680();
      return;
    }
    FUN_004060a0(&DAT_0078daa8 + iVar1 * 0x270);
    FUN_00414680();
  }
  return;
}

