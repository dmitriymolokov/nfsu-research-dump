/* Decompiled from Speed.exe @ 004a87b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a87b0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int unaff_EDI;
  bool bVar4;
  undefined **ppuVar5;
  
  iVar1 = *(int *)(unaff_ESI + 0x1c);
  bVar4 = iVar1 != -0x5b955158;
  uVar3 = FUN_00674898();
  if ((*(char *)(unaff_ESI + 0x21) != '\0') || (*(float *)(unaff_ESI + 0xc) < DAT_006cc7a4)) {
    FUN_004f75b0(0xff800000);
    FUN_004f75b0(0xff800000);
    if ((*(int *)(unaff_ESI + 0x10) < 2) || (!bVar4)) {
      FUN_004f68a0(&DAT_006ca778,uVar3);
    }
    else {
      FUN_004f68a0("%dx%d",uVar3,*(int *)(unaff_ESI + 0x10));
    }
LAB_004a8835:
    if ((1 < *(int *)(unaff_ESI + 0x10)) && (bVar4)) {
      FUN_004f68a0("%dx%d",uVar3,*(int *)(unaff_ESI + 0x10));
      goto LAB_004a8926;
    }
    ppuVar5 = (undefined **)&DAT_006ca778;
  }
  else {
    if (((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) && (iVar1 == -0x5b955158)) {
      FUN_004f75b0(*(undefined4 *)(param_1 + 0x50));
      FUN_004f75b0(*(undefined4 *)(param_1 + 0x50));
      goto LAB_004a8835;
    }
    FUN_004f75b0(*(undefined4 *)(param_1 + 0x4c));
    FUN_004f75b0(*(undefined4 *)(param_1 + 0x4c));
    if ((1 < *(int *)(unaff_ESI + 0x10)) && (bVar4)) {
      FUN_004f68a0("%+dx%d",uVar3,*(int *)(unaff_ESI + 0x10));
      goto LAB_004a8926;
    }
    ppuVar5 = &PTR_DAT_006c7228;
  }
  FUN_004f68a0(ppuVar5,uVar3);
LAB_004a8926:
  uVar3 = *(undefined4 *)(unaff_ESI + 0x1c);
  if (unaff_EDI != 0) {
    *(uint *)(unaff_EDI + 0x1c) = *(uint *)(unaff_EDI + 0x1c) | 0x400000;
    puVar2 = DAT_00735710;
    bVar4 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(unaff_EDI + 0x5c) = uVar3;
    if (bVar4) {
      (**(code **)*puVar2)();
    }
    *(uint *)(unaff_EDI + 0x1c) = *(uint *)(unaff_EDI + 0x1c) & 0xfffffffd | 0x400000;
  }
  if (param_2 != 0) {
    FUN_004f6970(param_2);
  }
  FUN_004f6970();
  if ((*(int *)(unaff_ESI + 0x18) == 0) || (*(int *)(unaff_ESI + 0x18) == 0x7fffffff)) {
    *(undefined1 *)(unaff_ESI + 0x20) = 1;
    *(undefined4 *)(unaff_ESI + 0x18) = DAT_0073ad34;
  }
  return;
}

