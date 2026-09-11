/* spd-match: far pct=21.21 M4.0.2-CE */
/* Decompiled from Speed.exe @ 00611e41 */
/* Module: EAGL */
/* Ghidra DecompileAll */


undefined4 *  FUN_00611e41(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006137a9();
  *param_1 = (undefined4)&PTR_FUN_006a5f20;
  puVar2 = param_1 + 0x43;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x4b;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x3b] = param_2;
  return param_1;
}

