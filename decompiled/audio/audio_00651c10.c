/* Decompiled from Speed.exe @ 00651c10 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00651c10(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  uVar1 = FUN_00651a50(param_2);
  return uVar1 & (-1 < (int)uVar1) - 1;
}

