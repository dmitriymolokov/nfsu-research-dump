/* Decompiled from Speed.exe @ 0064f4b0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0064f4b0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (DAT_00713ce4 == 0) {
    DAT_00713d98 = 0x10;
    DAT_00713dbb = 0x5a;
    DAT_00713dac = 1;
    DAT_00713da8 = 0;
    _DAT_00713da4 = DAT_006aa9bc;
    puVar3 = &DAT_00713d90;
    puVar4 = &DAT_00713e44;
    for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = FUN_00651a40();
    if (iVar2 != 1) {
      DAT_00713ce8 = FUN_00651c40();
    }
    DAT_00713ce4 = 1;
  }
  uVar1 = DAT_00713ce8;
  puVar3 = (undefined4 *)&DAT_00713d70;
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

