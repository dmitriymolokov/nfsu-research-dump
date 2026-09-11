/* Decompiled from Speed.exe @ 005366e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005366e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_4;
  
  puVar4 = (undefined4 *)(param_1 + 0xa8);
  local_4 = 4;
  do {
    iVar5 = 0xb;
    do {
      puVar4[1] = 0;
      puVar4[-0x1c] = 0;
      *puVar4 = 0;
      puVar4[-1] = 0;
      iVar3 = 0;
      puVar1 = puVar4 + -0xf;
      do {
        puVar1[-6] = 0;
        *puVar1 = 0;
        puVar1[-0xc] = 0;
        *(undefined1 *)((int)puVar4 + iVar3 + -0x24) = 0;
        puVar1[8] = 0;
        iVar3 = iVar3 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar3 < 6);
      *(undefined1 *)(puVar4 + 2) = 0;
      FUN_00532670(0,0,0,0);
      *(undefined4 *)(extraout_ECX + 0x74) = 0;
      puVar4[-0x29] = 0x3fe6;
      puVar4[-0x28] = 0x3fe6;
      *(undefined1 *)(puVar4 + 0x22) = 0;
      puVar4 = puVar4 + 0x4c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  puVar4 = (undefined4 *)(param_1 + 0x353c);
  iVar5 = 8;
  do {
    puVar4[1] = 0;
    puVar4[-0x1c] = 0;
    *puVar4 = 0;
    puVar4[-1] = 0;
    iVar3 = 0;
    puVar1 = puVar4 + -0xf;
    do {
      puVar1[-6] = 0;
      *puVar1 = 0;
      puVar1[-0xc] = 0;
      *(undefined1 *)((int)puVar4 + iVar3 + -0x24) = 0;
      puVar1[8] = 0;
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar3 < 6);
    *(undefined1 *)(puVar4 + 2) = 0;
    FUN_00532670(0,0,0,0);
    *(undefined4 *)(extraout_ECX_00 + 0x74) = 0;
    puVar4[-0x29] = 0x3fe6;
    puVar4[-0x28] = 0x3fe6;
    *(undefined1 *)(puVar4 + 0x22) = 0;
    puVar4 = puVar4 + 0x4c;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = param_1 + 0x3444;
  puVar4 = (undefined4 *)(param_1 + 0x3484);
  iVar3 = 4;
  do {
    iVar2 = 0;
    do {
      *(undefined1 *)(iVar5 + iVar2) = 0;
      iVar2 = iVar2 + 1;
      puVar4[-4] = 0;
      *puVar4 = 0;
    } while (iVar2 < 0xc);
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + 0xc;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

