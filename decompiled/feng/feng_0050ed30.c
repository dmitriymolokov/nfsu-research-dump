/* Decompiled from Speed.exe @ 0050ed30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050ed30(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((DAT_00745e40 == 1) && (DAT_0073440c == '\0')) {
    cVar1 = FUN_0050ee90(param_1);
    if ((cVar1 == '\0') || (DAT_00735ec1 != '\0')) {
      FUN_005a1520(&DAT_0075eef8);
      uVar2 = FUN_005a08f0();
      if ((int)uVar2 <= (int)((ulonglong)uVar2 >> 0x20)) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

