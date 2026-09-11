/* Decompiled from Speed.exe @ 0052be40 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_0052be40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x234) + 0x28) != 1) {
    puVar2 = (undefined4 *)(param_1 + 8);
    iVar3 = 4;
    do {
      puVar2[1] = *puVar2;
      *puVar2 = 0;
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    return;
  }
  iVar3 = 0x38;
  puVar2 = (undefined4 *)(param_1 + 8);
  do {
    iVar1 = *(int *)(param_1 + 4);
    FUN_00565230();
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x234) + 0x34) + iVar3);
    local_5c = *(undefined4 *)(iVar1 + 0x124);
    local_60 = *(undefined4 *)(iVar1 + 0x120);
    local_58 = *(undefined4 *)(iVar1 + 0x128);
    thunk_FUN_005abda2(&local_60,&local_60,local_50);
    puVar2[1] = *puVar2;
    *puVar2 = local_58;
    iVar3 = iVar3 + 4;
    puVar2 = puVar2 + 3;
  } while (iVar3 < 0x48);
  return;
}

