/* Decompiled from Speed.exe @ 00481850 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


undefined2 FUN_00481850(void)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int unaff_EDI;
  undefined1 local_8;
  undefined1 local_7;
  undefined2 local_6;
  undefined4 local_4;
  
  iVar4 = 0;
  iVar1 = 0;
  pfVar2 = (float *)(*(int *)(unaff_EDI + 0x4c) + 8);
  pfVar3 = (float *)(unaff_EDI + 0x124);
  do {
    if (pfVar2[-2] != pfVar3[-0x13]) {
      iVar4 = iVar4 + 1;
    }
    if (pfVar2[-1] != *pfVar3) {
      iVar4 = iVar4 + 1;
    }
    if (*pfVar2 != pfVar3[0x13]) {
      iVar4 = iVar4 + 1;
    }
    if (pfVar2[1] != pfVar3[0x26]) {
      iVar4 = iVar4 + 1;
    }
    iVar1 = iVar1 + 4;
    pfVar2 = pfVar2 + 4;
    pfVar3 = pfVar3 + 0x4c;
  } while (iVar1 < 0x25);
  if (iVar1 < 0x28) {
    pfVar2 = (float *)(*(int *)(unaff_EDI + 0x4c) + iVar1 * 4);
    pfVar3 = (float *)(iVar1 * 0x4c + 0xd8 + unaff_EDI);
    iVar1 = 0x28 - iVar1;
    do {
      if (*pfVar2 != *pfVar3) {
        iVar4 = iVar4 + 1;
      }
      pfVar2 = pfVar2 + 1;
      pfVar3 = pfVar3 + 0x13;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (iVar4 != 0) {
    iVar4 = iVar4 * 8;
    iVar1 = 0;
    pfVar2 = (float *)(unaff_EDI + 0xd8);
    do {
      if (*(float *)(*(int *)(unaff_EDI + 0x4c) + iVar1 * 4) != *pfVar2) {
        local_8 = 4;
        local_7 = (undefined1)iVar1;
        local_6 = (undefined2)iVar4;
        FUN_00481720(&local_8,4);
        local_4 = *(undefined4 *)(*(int *)(unaff_EDI + 0x4c) + iVar1 * 4);
        FUN_00481720(&local_4,4);
        iVar4 = iVar4 + -8;
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 0x13;
    } while (iVar1 < 0x28);
    return 1;
  }
  return 0;
}

