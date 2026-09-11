/* Decompiled from Speed.exe @ 004b9240 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_004b9240(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_2 = 0;
  puVar2 = param_2;
  for (iVar1 = 8; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  param_2[9] = 1;
  return param_2;
}

