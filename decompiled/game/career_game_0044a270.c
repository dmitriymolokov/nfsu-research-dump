/* spd-match: far pct=4.88 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0044a270 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 *  FUN_0044a270(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0044a170();
  iVar2 = DAT_0073609c;
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(DAT_0073609c + 0x18);
    *param_1 = *(undefined4 *)(DAT_0073609c + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar2 + 0x10) = param_1;
  }
  return param_1;
}

