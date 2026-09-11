/* Decompiled from Speed.exe @ 0051b720 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0051b720(void)

{
  byte *pbVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  
  cVar2 = FUN_0043a2e0();
  if ((cVar2 == '\0') || (cVar2 = FUN_00438a60(), cVar2 == '\0')) {
    return 0;
  }
  FUN_00647b70();
  uVar8 = 0;
  cVar2 = FUN_00438a40(0);
  uVar3 = FUN_0043d8c0((int)cVar2,uVar8);
  uVar8 = 0;
  if ((499 < uVar3) && (DAT_007677a4 == '\0')) {
    pcVar7 = "MAGAZINE_TASK_1";
    uVar4 = 0x4d;
    iVar6 = -1;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar5 = 0;
    do {
      if ((&DAT_00744ab0)[iVar5 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar5 * 8);
        goto LAB_0051b7b7;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1b);
    iVar6 = 0;
LAB_0051b7b7:
    iVar6 = (iVar6 + 0xc) * 0x454;
    (&DAT_007602a1)[iVar6] = 1;
    uVar8 = FUN_004f42f0("MAGAZINE_TASK_%d",0xd,&DAT_007602a0 + iVar6);
    FUN_0051ad30(uVar8);
    uVar8 = 1;
  }
  if ((999 < uVar3) && (DAT_007677a5 == '\0')) {
    pcVar7 = "MAGAZINE_TASK_1";
    iVar6 = -1;
    uVar4 = 0x4d;
    do {
      iVar6 = iVar6 * 0x21 + uVar4;
      pbVar1 = (byte *)(pcVar7 + 1);
      uVar4 = (uint)*pbVar1;
      pcVar7 = pcVar7 + 1;
    } while (*pbVar1 != 0);
    iVar5 = 0;
    do {
      if ((&DAT_00744ab0)[iVar5 * 2] == iVar6) {
        iVar6 = *(int *)(&DAT_00744ab4 + iVar5 * 8);
        goto LAB_0051b837;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1b);
    iVar6 = 0;
LAB_0051b837:
    iVar6 = (iVar6 + 0xd) * 0x454;
    (&DAT_007602a1)[iVar6] = 1;
    uVar8 = FUN_004f42f0("MAGAZINE_TASK_%d",0xe,&DAT_007602a0 + iVar6);
    FUN_0051ad30(uVar8);
    uVar8 = 1;
  }
  if ((0x9c3 < uVar3) && (DAT_007677a6 == '\0')) {
    FUN_005a0b40(&DAT_0075eef8);
    uVar8 = 1;
  }
  if (uVar3 < 5000) {
    return uVar8;
  }
  if (DAT_007677a7 != '\0') {
    return uVar8;
  }
  FUN_005a0b40(&DAT_0075eef8);
  return 1;
}

