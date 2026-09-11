/* Decompiled from Speed.exe @ 0057a530 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0057a530(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_00647b70();
  if (iVar1 == 6) {
    iVar1 = 0;
    iVar2 = FUN_00647b70();
    if (iVar2 == 6) {
      iVar1 = *(int *)(*(int *)(unaff_EBX + 0x1d4) + 0x90);
    }
    iVar2 = *(int *)(iVar1 + 0x24);
    if (((iVar2 == 3) || (iVar2 == 2)) || (iVar2 == 4)) {
      puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x30) + 0x10);
      puVar4 = (undefined4 *)(unaff_EBX + 0x10);
      for (iVar2 = 0x70; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    else {
      FUN_00456d50(unaff_EBX + 0x10);
    }
  }
  else {
    FUN_0045a250(unaff_EBX + 0x10);
  }
  iVar1 = FUN_00647b70();
  if (iVar1 == 4) {
    iVar1 = *(int *)(*(int *)(unaff_EBX + 0x1d4) + 0x1c);
    if (*(int *)(iVar1 + 0xe4) != 0) {
      FUN_005791c0();
    }
    FUN_00443a10(&DAT_007372b0,iVar1 + 0x40);
  }
  return;
}

