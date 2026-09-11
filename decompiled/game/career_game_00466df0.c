/* spd-match: far pct=11.90 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00466df0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 *  FUN_00466df0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00466e20(param_1);
  iVar2 = DAT_0072cc00;
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(DAT_0072cc00 + 0x18);
    *param_1 = *(undefined4 *)(DAT_0072cc00 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar2 + 0x10) = param_1;
  }
  return param_1;
}

