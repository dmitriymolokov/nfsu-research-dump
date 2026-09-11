/* Decompiled from Speed.exe @ 00652f40 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00652f40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_00650020(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  *(short *)(iVar1 + 0x126) = (short)param_2;
  FUN_00658f70(*(undefined4 *)(iVar1 + 4),param_2);
  return 0;
}

