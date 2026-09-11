/* Decompiled from Speed.exe @ 00503330 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00503330(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0;
  }
  for (iVar1 = *(int *)(param_1 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0x1c) == unaff_ESI) goto LAB_005033b6;
  }
  puVar2 = _malloc(0x20);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    *puVar2 = &PTR_FUN_006c17b0;
    puVar2[3] = &PTR_LAB_006c2c4c;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[4] = 0;
    puVar2[7] = unaff_ESI;
  }
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 8);
    puVar2[1] = iVar1;
    if (iVar1 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar2;
    }
    puVar2[2] = 0;
    *(undefined4 **)(param_1 + 8) = puVar2;
    if (*(int *)(param_1 + 0xc) == 0) {
      *(undefined4 **)(param_1 + 0xc) = puVar2;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
LAB_005033b6:
  uVar3 = FUN_00503250();
  return uVar3;
}

