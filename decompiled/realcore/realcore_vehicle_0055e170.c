/* Decompiled from Speed.exe @ 0055e170 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_0055e170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int local_4;
  
  iVar4 = 0;
  if (0 < DAT_0073616c) {
    local_4 = 0;
    do {
      if (((DAT_00736168 == 0) || (local_4 < 0)) || (DAT_0073616c <= iVar4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = local_4 + DAT_00736168;
      }
      iVar1 = FUN_004ab470(&DAT_00748f70);
      if (iVar1 != 0) {
        FUN_0055e0d0(iVar3,0);
      }
      iVar4 = iVar4 + 1;
      local_4 = local_4 + 0xfc;
    } while (iVar4 < DAT_0073616c);
  }
  if (DAT_00777cb4 != 2) {
    iVar4 = 0;
    local_4 = 0;
    if (0 < DAT_0073616c) {
      do {
        if (((DAT_00736168 == 0) || (iVar4 < 0)) || (DAT_0073616c <= local_4)) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_00736168 + iVar4;
        }
        iVar1 = FUN_004ab470(&DAT_00748f70);
        if (iVar1 != 0) {
          FUN_0055e0d0(iVar3,1);
        }
        local_4 = local_4 + 1;
        iVar4 = iVar4 + 0xfc;
      } while (local_4 < DAT_0073616c);
    }
  }
  puVar5 = (undefined *)0x0;
  switch(DAT_00777cc8) {
  case 0:
    puVar5 = &DAT_00758980;
    break;
  case 1:
    puVar5 = &DAT_007589a0;
    break;
  case 2:
    puVar5 = &DAT_007589c0;
    break;
  case 3:
    puVar5 = &DAT_007589e0;
    break;
  case 4:
    puVar5 = &DAT_00758a04;
    break;
  case 5:
    puVar5 = &DAT_00758a88;
    break;
  case 6:
    puVar5 = &DAT_00758ab4;
  }
  if (*(int *)(puVar5 + 8) != -1) {
    iVar4 = FUN_0055e350(*(int *)(puVar5 + 8));
    *(int *)(param_1 + 0x70) = iVar4;
    if (iVar4 == 0) {
      uVar2 = FUN_00556770();
      *(undefined4 *)(param_1 + 0x70) = uVar2;
    }
    return;
  }
  iVar4 = FUN_00556770();
  *(int *)(param_1 + 0x70) = iVar4;
  *(int *)(puVar5 + 8) = (int)*(short *)(*(int *)(iVar4 + 0xc) + 0x6c);
  *(undefined4 *)(puVar5 + 0xc) = 0;
  return;
}

