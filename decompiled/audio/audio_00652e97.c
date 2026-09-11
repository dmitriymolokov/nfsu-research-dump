/* Decompiled from Speed.exe @ 00652e97 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 fn_00652e97(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_00650020(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  *(char *)(iVar1 + 0x115) = (char)param_3;
  FUN_00658e60(*(undefined4 *)(iVar1 + 4),param_2,param_3);
  return 0;
}

