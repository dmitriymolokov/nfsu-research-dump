/* Decompiled from Speed.exe @ 004ebf20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ebf20(int *param_1)

{
  char *pcVar1;
  int iVar2;
  int unaff_EBX;
  
  *(int **)(unaff_EBX + 0x40) = param_1;
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x43225720);
    }
  }
  FUN_004f6910(iVar2);
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x203c4ad7);
    }
  }
  FUN_004f6970(iVar2);
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x203c4ad8);
    }
  }
  FUN_004f6970(iVar2);
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x203c4ad9);
    }
  }
  FUN_004f6970(iVar2);
  if (param_1[3] == 0) {
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x5caf80ed);
      }
    }
    FUN_004f6910(iVar2);
  }
  else {
    FUN_00495f00(param_1[3]);
  }
  if (param_1[4] == 0) {
    iVar2 = 0;
    if (DAT_00735ba8 != '\0') {
      do {
        pcVar1 = &DAT_00735ba9 + iVar2;
        iVar2 = iVar2 + 1;
      } while (*pcVar1 != '\0');
      if (0 < iVar2) {
        FUN_004f6850(&DAT_00735ba8);
        goto LAB_004ec103;
      }
    }
    FUN_00495f70();
  }
  else {
    FUN_00495f00(param_1[4]);
  }
LAB_004ec103:
  if (param_1[5] == 0) {
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x749cbecd);
      }
    }
    FUN_004f6910(iVar2);
  }
  else {
    FUN_00495f00(param_1[5]);
  }
  if (*param_1 == 0) {
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0xed77e685);
      }
    }
    FUN_004f6910(iVar2);
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
    }
    if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0xd08f7531);
      }
    }
    FUN_004f6910(iVar2);
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
    }
    if (DAT_00735d9c == '\0') {
      if ((DAT_0073578c != 0) && (FUN_004f5f80(DAT_0073578c,1), DAT_0073578c != 0)) {
        FUN_004f5ed0(DAT_0073578c);
      }
      FUN_00495f00(param_1[6]);
      return;
    }
    FUN_00495f70();
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
    }
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
    return;
  }
  if (*param_1 == 1) {
    FUN_00495f70();
    FUN_00495fc0();
    FUN_00495fc0();
    if ((((DAT_0073578c != 0) && (FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0)) &&
        (FUN_004f5f80(DAT_0073578c,1), DAT_0073578c != 0)) &&
       (FUN_004f5f80(DAT_0073578c,1), DAT_0073578c != 0)) {
      FUN_004f5ed0(DAT_0073578c);
    }
    FUN_00495f00(param_1[6]);
    FUN_00495f00(param_1[7]);
    FUN_00495f70();
    FUN_004f6c30("UnhighLight",1);
    FUN_004f6c30("Highlight",1);
  }
  return;
}

