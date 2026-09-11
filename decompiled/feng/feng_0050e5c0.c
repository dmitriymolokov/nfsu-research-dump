/* Decompiled from Speed.exe @ 0050e5c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


bool FUN_0050e5c0(void)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = true;
  if ((DAT_00745e40 == 1) && (DAT_0073440c == '\0')) {
    FUN_005a1520(&DAT_0075eef8);
    uVar2 = FUN_005a08f0();
    bVar1 = (int)uVar2 <= (int)((ulonglong)uVar2 >> 0x20);
  }
  return bVar1;
}

