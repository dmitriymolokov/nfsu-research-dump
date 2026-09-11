/* Decompiled from Speed.exe @ 005f70ba */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_005f70ba(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_006a3da8;
  param_1[1] = 1;
  puVar2 = param_1 + 4;
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

