/* Decompiled from Speed.exe @ 004d6b80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004d6b80(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int unaff_EDI;
  char local_100 [256];
  
  pcVar6 = local_100;
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  iVar7 = 0x100;
  do {
    cVar2 = pcVar6[iVar3 - (int)local_100];
    iVar7 = iVar7 + -1;
    *pcVar6 = cVar2;
    if (cVar2 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while (iVar7 != 0);
  if (local_100[0] == '$') {
    iVar3 = 0;
    do {
      iVar7 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    } while ("$HEADERBIG$"[iVar7] != '\0');
    iVar7 = FUN_00567d50();
    iVar3 = 0;
    if (iVar7 == 0) {
      do {
        iVar7 = iVar3;
        iVar3 = iVar7 + 1;
      } while ("$HEADERBIG$"[iVar7 + 1] != '\0');
      pcVar6 = "CONDUITMDITC_TT21I";
      iVar3 = -1;
      uVar4 = 0x43;
      do {
        iVar3 = iVar3 * 0x21 + uVar4;
        pbVar1 = (byte *)(pcVar6 + 1);
        uVar4 = (uint)*pbVar1;
        pcVar6 = pcVar6 + 1;
      } while (*pbVar1 != 0);
      iVar5 = *(int *)(unaff_EDI + 8);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x24) != iVar3)) {
        *(int *)(iVar5 + 0x24) = iVar3;
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x400000;
      }
      FUN_004f75b0(0xa0cfe9f2);
      FUN_004f68a0(&DAT_006cc568,local_100 + iVar7 + 1);
      iVar3 = *(int *)(unaff_EDI + 8);
      if (iVar3 != 0) {
        iVar7 = *(int *)(iVar3 + 0x18);
        iVar5 = *(int *)(iVar3 + 0x2c);
        if (((iVar7 == 1) || (iVar7 == 7)) || (iVar7 == 9)) {
          *(undefined4 *)(iVar5 + 0x38) = 0x3f933333;
          *(undefined4 *)(iVar5 + 0x3c) = 0x3f933333;
        }
        *(undefined4 *)(iVar5 + 0x38) = 0x3f933333;
        *(undefined4 *)(iVar5 + 0x3c) = 0x3f933333;
        *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
      }
      return 1;
    }
    iVar3 = 0;
    do {
      iVar7 = iVar3 + 1;
      iVar3 = iVar3 + 1;
    } while ("$HEADERSMALL$"[iVar7] != '\0');
    iVar7 = FUN_00567d50();
    iVar3 = 0;
    if (iVar7 == 0) {
      do {
        iVar7 = iVar3;
        iVar3 = iVar7 + 1;
      } while ("$HEADERSMALL$"[iVar7 + 1] != '\0');
      iVar5 = FUN_00567c70();
      iVar3 = *(int *)(unaff_EDI + 8);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) != iVar5)) {
        *(int *)(iVar3 + 0x24) = iVar5;
        *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
      }
      FUN_004f75b0(0xa0cfe9f2);
      FUN_004f68a0(&DAT_006cc568,local_100 + iVar7 + 1);
      FUN_004f73f0(0x3f733333,0x3f733333);
      return 1;
    }
  }
  pcVar6 = "CONDUITMDITC_TT21I";
  iVar3 = -1;
  uVar4 = 0x43;
  do {
    iVar3 = iVar3 * 0x21 + uVar4;
    pbVar1 = (byte *)(pcVar6 + 1);
    uVar4 = (uint)*pbVar1;
    pcVar6 = pcVar6 + 1;
  } while (*pbVar1 != 0);
  iVar7 = *(int *)(unaff_EDI + 8);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x24) != iVar3)) {
    *(int *)(iVar7 + 0x24) = iVar3;
    *(uint *)(iVar7 + 0x1c) = *(uint *)(iVar7 + 0x1c) | 0x400000;
  }
  FUN_004f75b0(0xc8549ab4);
  iVar3 = *(int *)(unaff_EDI + 8);
  if (iVar3 != 0) {
    iVar7 = *(int *)(iVar3 + 0x18);
    iVar5 = *(int *)(iVar3 + 0x2c);
    if (((iVar7 == 1) || (iVar7 == 7)) || (iVar7 == 9)) {
      *(undefined4 *)(iVar5 + 0x38) = 0x3f3ae148;
      *(undefined4 *)(iVar5 + 0x3c) = 0x3f3ae148;
    }
    *(undefined4 *)(iVar5 + 0x38) = 0x3f3ae148;
    *(undefined4 *)(iVar5 + 0x3c) = 0x3f3ae148;
    *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 0x400000;
  }
  return 0;
}

