/* Decompiled from Speed.exe @ 005d89c9 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_005d89c9(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0xd;
  *param_1 = &PTR_FUN_006a0cb4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar2 = param_1 + 8;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[4] = 3;
  return param_1;
}

