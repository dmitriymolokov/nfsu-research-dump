/* Decompiled from Speed.exe @ 005a3670 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005a3670(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined8 uVar3;
  
  uVar3 = FUN_005a0350();
  iVar1 = (int)uVar3;
  if (((iVar1 != 8) && (iVar1 != 5)) && (iVar1 != -1)) {
    if ((int)((ulonglong)uVar3 >> 0x20) == 0) {
      return 1;
    }
    uVar2 = FUN_005a3630(extraout_ECX);
    return uVar2;
  }
  return 0;
}

