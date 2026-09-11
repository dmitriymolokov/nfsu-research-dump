/* Decompiled from Speed.exe @ 005539a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005539a0(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 local_800 [2048];
  
  if (*(int *)(param_1 + 0x19c) == 0x20) {
    puVar4 = (undefined1 *)(param_1 + 0x24);
    iVar3 = 0x1f;
    do {
      FUN_00504020();
      *puVar4 = puVar4[0xc];
      puVar4[1] = puVar4[0xd];
      puVar4[2] = puVar4[0xe];
      puVar4 = puVar4 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(int *)(param_1 + 0x19c) = *(int *)(param_1 + 0x19c) + -1;
  }
  iVar3 = param_1 + 0x1c + *(int *)(param_1 + 0x19c) * 0xc;
  FUN_0059ff40(local_800,0x800);
  FUN_00504080();
  *(undefined1 *)(iVar3 + 9) = param_3;
  *(undefined1 *)(iVar3 + 8) = param_4;
  *(undefined1 *)(iVar3 + 10) = param_5;
  iVar3 = *(int *)(param_1 + 0x19c) + 1;
  uVar2 = iVar3 - *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x19c) = iVar3;
  uVar5 = *(uint *)(param_1 + 0x1a0);
  if ((*(int *)(param_1 + 0x18) < iVar3) &&
     (uVar1 = ((int)uVar2 < 1) - 1 & uVar2, uVar5 = uVar2, (int)uVar1 <= (int)uVar2)) {
    uVar5 = uVar1;
  }
  if (uVar5 != *(uint *)(param_1 + 0x1a0)) {
    *(uint *)(param_1 + 0x1a0) = uVar5;
  }
  FUN_00553820(param_1);
  return;
}

