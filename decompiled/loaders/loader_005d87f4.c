/* Decompiled from Speed.exe @ 005d87f4 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_005d87f4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0xc;
  *param_1 = &PTR_FUN_006a0ca4;
  param_1[10] = 1;
  puVar2 = param_1 + 0xc;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

