/* Decompiled from Speed.exe @ 00652f90 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00652f90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_00650020(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  *(char *)(iVar1 + 0x114) = (char)param_2;
  FUN_00658fe0(*(undefined4 *)(iVar1 + 4),param_2);
  return 0;
}

