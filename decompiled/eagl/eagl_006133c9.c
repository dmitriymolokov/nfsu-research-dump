/* Decompiled from Speed.exe @ 006133c9 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_006133c9(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005d77e9(0x11);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *param_1 = &PTR_FUN_006a6120;
  puVar2 = param_1 + 4;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}

