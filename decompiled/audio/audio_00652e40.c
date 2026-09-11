/* Decompiled from Speed.exe @ 00652e40 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00652e40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_00650020(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  *(short *)(iVar1 + 0x118) = (short)param_2;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  *(short *)(iVar1 + 0x11a) = (short)param_3;
  *(undefined1 *)(iVar1 + 0x12) = 1;
  FUN_00658d80(*(undefined4 *)(iVar1 + 4),param_2,param_3);
  return 0;
}

