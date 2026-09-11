/* Decompiled from Speed.exe @ 00411ab0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00411ab0(void)

{
  char cVar1;
  
  if (DAT_007070bc != 0) {
    FUN_004119d0();
    DAT_007070bc = 1;
    return;
  }
  cVar1 = FUN_00411910(DAT_0070108f);
  if (cVar1 == '\0') {
    DAT_007070bc = 1;
    return;
  }
  DAT_007070bc = 0;
  return;
}

