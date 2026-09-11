/* spd-match: far pct=6.98 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004250f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 *  FUN_004250f0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00575390();
  iVar2 = DAT_00735f90;
  if ((param_2 & 1) != 0) {
    iVar1 = *(int *)(DAT_00735f90 + 0x18);
    *param_1 = *(undefined4 *)(DAT_00735f90 + 0x10);
    *(int *)(iVar2 + 0x18) = iVar1 + -1;
    *(undefined4 **)(iVar2 + 0x10) = param_1;
  }
  return param_1;
}

