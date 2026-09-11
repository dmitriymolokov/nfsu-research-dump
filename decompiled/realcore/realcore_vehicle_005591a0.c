/* Decompiled from Speed.exe @ 005591a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005591a0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char local_14 [20];
  
  pcVar3 = *(char **)(param_1 + 0x40);
  iVar2 = 0;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
LAB_005591c3:
    FUN_00495f00(0xceffd44);
  }
  else {
    do {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (pcVar3[iVar4] != '\0');
    if (iVar2 == 0) goto LAB_005591c3;
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x854bc1d8);
      }
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 2;
    FUN_0041f060(iVar2,pcVar3);
  }
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  local_14[4] = '\0';
  local_14[5] = '\0';
  local_14[6] = '\0';
  local_14[7] = '\0';
  local_14[8] = '\0';
  local_14[9] = '\0';
  local_14[10] = '\0';
  local_14[0xb] = '\0';
  local_14[0xc] = '\0';
  local_14[0xd] = '\0';
  local_14[0xe] = '\0';
  local_14[0xf] = '\0';
  local_14[0x10] = 0;
  pcVar3 = (char *)(*(int *)(param_1 + 0x40) + 0x11);
  iVar2 = 0;
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = pcVar3[iVar4];
    }
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (iVar4 == 0xf) break;
      local_14[iVar4] = '*';
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  local_14[iVar4] = '\0';
  iVar2 = 0;
  if (local_14[0] == '\0') {
LAB_0055928d:
    FUN_00495f00(0xceffd44);
  }
  else {
    do {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (local_14[iVar4] != '\0');
    if (iVar2 == 0) goto LAB_0055928d;
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x58f820ab);
      }
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 2;
    FUN_0041f060(iVar2,local_14);
  }
  pcVar3 = (char *)(*(int *)(param_1 + 0x40) + 0x22);
  local_14[0] = '\0';
  local_14[1] = '\0';
  local_14[2] = '\0';
  local_14[3] = '\0';
  local_14[4] = '\0';
  local_14[5] = '\0';
  local_14[6] = '\0';
  local_14[7] = '\0';
  local_14[8] = '\0';
  local_14[9] = '\0';
  local_14[10] = '\0';
  local_14[0xb] = '\0';
  local_14[0xc] = '\0';
  local_14[0xd] = '\0';
  local_14[0xe] = '\0';
  local_14[0xf] = '\0';
  local_14[0x10] = 0;
  iVar2 = 0;
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
      cVar1 = pcVar3[iVar4];
    }
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      if (iVar4 == 0xf) break;
      local_14[iVar4] = '*';
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  local_14[iVar4] = '\0';
  iVar2 = 0;
  if (local_14[0] == '\0') {
LAB_0055935d:
    FUN_00495f00(0xceffd44);
  }
  else {
    do {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (local_14[iVar4] != '\0');
    if (iVar2 == 0) goto LAB_0055935d;
    if (((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x917e8df9);
      }
    }
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 2;
    FUN_0041f060(iVar2,local_14);
  }
  pcVar3 = (char *)(*(int *)(param_1 + 0x40) + 0x33);
  iVar2 = 0;
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    do {
      iVar4 = iVar2 + 1;
      iVar2 = iVar2 + 1;
    } while (pcVar3[iVar4] != '\0');
    if (iVar2 != 0) {
      if (((*(int *)(param_1 + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
         (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
        if (DAT_0073578c == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_004ef050(0x43225720);
        }
      }
      *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 2;
      FUN_0041f060(iVar2,pcVar3);
      goto LAB_0055944a;
    }
  }
  FUN_00495f00(0xceffd44);
LAB_0055944a:
  if (*(char *)(*(int *)(param_1 + 0x40) + 0xcd) == '\0') {
    uVar5 = 0x61c;
  }
  else {
    uVar5 = 0xf770;
  }
  FUN_00495f00(uVar5);
  if (*(char *)(*(int *)(param_1 + 0x40) + 0xcc) == '\0') {
    FUN_00495f00(0x61c);
    return;
  }
  FUN_00495f00(0xf770);
  return;
}

