/* Decompiled from Speed.exe @ 004d8440 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004d8440(void)

{
  char cVar1;
  char local_1;
  
  if (DAT_00745e40 == 1) {
    local_1 = '\x01';
  }
  else {
    local_1 = FUN_004d8270();
    cVar1 = FUN_004d82f0();
    if (cVar1 == '\0') goto LAB_004d84b0;
  }
  cVar1 = FUN_005a1550(&DAT_0075eef8,0);
  if (cVar1 != '\0') {
    return 3;
  }
  cVar1 = FUN_0059e5c0();
  if (cVar1 != '\0') {
    return 3;
  }
  if (DAT_00735e12 != '\0') {
    return 3;
  }
  if (DAT_00735e11 != '\0') {
    return 3;
  }
LAB_004d84b0:
  if (local_1 == '\0') {
    return 1;
  }
  cVar1 = FUN_0059e5c0();
  if (((cVar1 == '\0') && (cVar1 = FUN_005a1550(&DAT_0075eef8,0), cVar1 == '\0')) &&
     (DAT_00735e10 == '\0')) {
    return 1;
  }
  return 2;
}

