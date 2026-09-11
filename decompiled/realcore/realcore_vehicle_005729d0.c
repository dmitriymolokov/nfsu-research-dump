/* Decompiled from Speed.exe @ 005729d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


uint FUN_005729d0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xc) != 0) {
    uVar3 = DAT_006f08a4 + 1;
    *(uint *)(unaff_ESI + 0xa0) = uVar3;
    *(undefined4 *)(unaff_ESI + 0x10) = 1;
    return uVar3 & 0xffffff00;
  }
  iVar1 = *(int *)(unaff_ESI + 0x9c);
  uVar3 = FUN_00572b50("HIGHLIGHT_SNAPSHOT",iVar1);
  if (uVar3 == 0) {
    uVar4 = FUN_00572b50("LAP_SNAPSHOT",0);
    uVar3 = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)(unaff_ESI + 0xa0) = 0;
    }
    else {
      *(undefined4 *)(unaff_ESI + 0xa0) = *(undefined4 *)(unaff_ESI + 0x54);
    }
  }
  else {
    uVar2 = *(undefined4 *)(uVar3 + 0x34);
    iVar1 = iVar1 + 1;
    *(int *)(unaff_ESI + 0x9c) = iVar1;
    *(undefined4 *)(unaff_ESI + 0xa0) = uVar2;
    uVar4 = FUN_00572b50("HIGHLIGHT_SNAPSHOT",iVar1);
    if (uVar4 != 0) goto LAB_00572a5b;
  }
  *(undefined4 *)(unaff_ESI + 0x9c) = 0;
LAB_00572a5b:
  if (uVar3 == 0) {
    return uVar4 & 0xffffff00;
  }
  *(undefined4 *)(uVar3 + 0x150) = 0;
  *(undefined1 *)(uVar3 + 0x3d) = 1;
  FUN_00572d90(unaff_ESI);
  *(undefined1 *)(uVar3 + 0x3d) = 0;
  iVar1 = DAT_006f08a4;
  *(int *)(unaff_ESI + 0xa4) = DAT_006f08a4;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  return CONCAT31((int3)((uint)iVar1 >> 8),1);
}

