/* Decompiled from Speed.exe @ 00650cb0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00650cb0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  iVar1 = FUN_00650020(param_1);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  if (0x4000 < param_2) {
    param_2 = 0x4000;
  }
  *(short *)(iVar1 + 0x11c) = (short)param_2;
  FUN_006520a0(*(undefined4 *)(iVar1 + 4),param_2);
  return 0;
}

