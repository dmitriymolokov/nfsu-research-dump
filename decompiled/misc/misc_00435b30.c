/* Decompiled from Speed.exe @ 00435b30 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 FUN_00435b30(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_0043a2e0();
  if (cVar1 != '\0') {
    uVar2 = FUN_0043da90();
    return uVar2;
  }
  iVar3 = 0;
  if (0 < DAT_007361c4) {
    do {
      if (*(int *)((&DAT_007361bc)[iVar3] + 0x58) == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_007361c4);
  }
  return 1;
}

