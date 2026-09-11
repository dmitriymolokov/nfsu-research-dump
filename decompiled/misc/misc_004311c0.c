/* Decompiled from Speed.exe @ 004311c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_004311c0(void)

{
  int iVar1;
  
  iVar1 = 0;
  DAT_007361c8 = 0;
  if (0 < DAT_007361c4) {
    do {
      FUN_00430b90();
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_007361c4);
  }
  iVar1 = DAT_007361c4;
  if (((DAT_0073612c != 0) && (0 < DAT_007361c4)) &&
     (iVar1 = DAT_00734574 / 10, DAT_00734574 % 10 == 0)) {
    iVar1 = FUN_00430b90();
    return iVar1;
  }
  return iVar1;
}

