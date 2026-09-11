/* Decompiled from Speed.exe @ 005603e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005603e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  char extraout_CL;
  int unaff_ESI;
  
  if (*(char *)(unaff_ESI + 0x94) != '\0') {
    return;
  }
  if ((((DAT_0073d8d0 != 0) && (DAT_0073d8a8 != 0)) &&
      (iVar1 = FUN_00664d00(DAT_0073d8d0,6,&DAT_00734718), iVar1 != 0)) &&
     (iVar1 = FUN_00666ea0(DAT_0073d8a8,iVar1), iVar1 != 0)) {
    FUN_0054a2a0();
    *(undefined1 *)(unaff_ESI + 0x94) = 1;
    *(undefined1 *)(unaff_ESI + 0x135) = 1;
  }
  cVar4 = '\x01';
  if (((*(char *)(unaff_ESI + 0x94) != '\0') ||
      (*(int *)(unaff_ESI + 300) != *(int *)(unaff_ESI + 0x130))) ||
     (*(char *)(unaff_ESI + 0x134) != '\x01')) goto LAB_0056057d;
  iVar1 = *(int *)(unaff_ESI + 0x78);
  if (iVar1 == 0) {
    iVar1 = *(int *)(unaff_ESI + 0xa8) + *(int *)(unaff_ESI + 0xa4);
    uVar2 = *(undefined4 *)(unaff_ESI + 0xac);
LAB_0056053c:
    FUN_005605d0(unaff_ESI,uVar2,iVar1);
    cVar4 = extraout_CL;
  }
  else {
    if (iVar1 == 1) {
      iVar1 = *(int *)(unaff_ESI + 0xc4) + *(int *)(unaff_ESI + 0xc0);
      uVar2 = *(undefined4 *)(unaff_ESI + 200);
      goto LAB_0056053c;
    }
    if (iVar1 == 2) {
      iVar1 = *(int *)(unaff_ESI + 0xe0) + *(int *)(unaff_ESI + 0xdc);
      uVar2 = *(undefined4 *)(unaff_ESI + 0xe4);
      goto LAB_0056053c;
    }
    if (iVar1 == 3) {
      iVar1 = *(int *)(unaff_ESI + 0xfc) + *(int *)(unaff_ESI + 0xf8);
      uVar2 = *(undefined4 *)(unaff_ESI + 0x100);
      goto LAB_0056053c;
    }
    cVar4 = '\x01';
    if (iVar1 == 4) {
      iVar1 = *(int *)(unaff_ESI + 0x118) + *(int *)(unaff_ESI + 0x114);
      uVar2 = *(undefined4 *)(unaff_ESI + 0x11c);
      goto LAB_0056053c;
    }
  }
  *(undefined1 *)(unaff_ESI + 0x135) = 0;
  *(char *)(unaff_ESI + 0x94) = cVar4;
LAB_0056057d:
  if (*(char *)(unaff_ESI + 0x94) == cVar4) {
    iVar1 = *(int *)(unaff_ESI + 0x80);
    iVar3 = FUN_00674898();
    iVar1 = *(int *)(unaff_ESI + 0x7c) - iVar1;
    *(int *)(unaff_ESI + 0x90) = iVar3;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
    *(int *)(unaff_ESI + 0x90) = iVar3;
  }
  return;
}

