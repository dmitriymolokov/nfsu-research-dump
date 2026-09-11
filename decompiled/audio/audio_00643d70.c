/* Decompiled from Speed.exe @ 00643d70 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00643d70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == param_3) {
    puVar2 = &DAT_0070ffa0;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  FUN_00643ecc();
  FUN_00643ecc();
  FUN_00643ecc();
  FUN_00643ecc();
  return;
}

