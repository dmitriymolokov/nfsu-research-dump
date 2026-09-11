/* Decompiled from Speed.exe @ 00508510 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00508510(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_00745e40 == 1) {
    cVar1 = FUN_00507e10(param_1);
    if (cVar1 != '\0') {
      return 0;
    }
    if (DAT_0073440c == '\0') {
      FUN_005a1520(&DAT_0075eef8);
      uVar2 = FUN_005a08f0();
      if ((int)((ulonglong)uVar2 >> 0x20) < (int)uVar2) {
        return 0;
      }
    }
  }
  return 1;
}

