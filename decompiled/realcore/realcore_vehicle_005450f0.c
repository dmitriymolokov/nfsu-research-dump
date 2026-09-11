/* Decompiled from Speed.exe @ 005450f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_005450f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = param_1 + 0x11;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  puVar3 = param_1;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  param_1[6] = 0x3f800000;
  param_1[1] = (int)(param_1 + -0x1d0118) / 0x60;
  *param_1 = &DAT_0078aa40 + ((int)(param_1 + -0x1d0118) / 0x60) * 0x120;
  return param_1;
}

