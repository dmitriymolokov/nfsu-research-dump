/* Decompiled from Speed.exe @ 005e739b */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005e739b(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  piVar1 = (int *)(param_1 + 0x10);
  while( true ) {
    iVar2 = FUN_005c7bd2(piVar1);
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(undefined4 *)(param_1 + 0x50) = 1;
      return -1;
    }
    iVar2 = *piVar1;
    if (iVar2 < 10) break;
    if (iVar2 == 10) {
      return 0x110;
    }
    if (iVar2 != 0xc) {
      if (iVar2 != 0xd) {
        return 0x110;
      }
      return -1;
    }
  }
  if (iVar2 != 9) {
    if (iVar2 == 0) {
      return 0x110;
    }
    if (iVar2 == 1) {
      if (*(char *)(param_1 + 0x19) != '\0') {
        return 0x110;
      }
      return (int)*(char *)(param_1 + 0x18);
    }
    if (iVar2 < 2) {
      return 0x110;
    }
    if (4 < iVar2) {
      if (8 < iVar2) {
        return 0x110;
      }
      return 0x10f;
    }
    return 0x10e;
  }
  pcVar4 = *(char **)(param_1 + 0x18);
  iVar2 = 0xb;
  bVar6 = true;
  pcVar3 = pcVar4;
  pcVar5 = "entrypoint";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pcVar3 == *pcVar5;
    pcVar3 = pcVar3 + 1;
    pcVar5 = pcVar5 + 1;
  } while (bVar6);
  if (bVar6) {
    iVar2 = 0x101;
  }
  else {
    iVar2 = 5;
    bVar6 = true;
    pcVar3 = pcVar4;
    pcVar5 = "true";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar6 = *pcVar3 == *pcVar5;
      pcVar3 = pcVar3 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar2 = 0x111;
    }
    else {
      iVar2 = 6;
      bVar6 = true;
      pcVar3 = "false";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *pcVar4 == *pcVar3;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar6);
      if (bVar6) {
        iVar2 = 0x112;
      }
      else if (*(int *)(param_1 + 0x38) == -1) {
        iVar2 = 0x10d;
      }
      else {
        iVar2 = FUN_005e56ca(piVar1);
      }
    }
  }
  return iVar2;
}

