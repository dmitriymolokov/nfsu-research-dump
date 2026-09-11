/* Decompiled from Speed.exe @ 0050bbc0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0050bbc0(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (DAT_00745e40 == 1) {
    uVar3 = FUN_005a0350();
    iVar2 = (int)uVar3;
    if (((iVar2 == 8) || (iVar2 == 5)) || (iVar2 == -1)) {
      return 1;
    }
    if (((int)((ulonglong)uVar3 >> 0x20) != 0) &&
       (cVar1 = FUN_005a3630(&DAT_0075f344), cVar1 == '\0')) {
      return 1;
    }
  }
  return 0;
}

