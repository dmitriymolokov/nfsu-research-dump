/* spd-match: far pct=6.98 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0046d4e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 *  FUN_0046d4e0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00584950();
  iVar2 = DAT_00735f7c;
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(DAT_00735f7c + 0x18);
    *param_1 = *(undefined4 *)(DAT_00735f7c + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar2 + 0x10) = param_1;
  }
  return param_1;
}

