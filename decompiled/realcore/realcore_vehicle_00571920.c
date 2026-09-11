/* Decompiled from Speed.exe @ 00571920 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00571920(char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00571ea0(0,"bRepeat");
  if (param_1 == '\0') {
    *(undefined4 *)(unaff_EDI + 0x28) = 0;
    FUN_00571c20(unaff_ESI,unaff_EDI + 0x10,4,4,1);
    FUN_00571c20(unaff_ESI,unaff_EDI + 0x24,4,4,1);
    iVar3 = 0;
    if (0 < *(int *)(unaff_EDI + 0x18)) {
      iVar2 = unaff_EDI + 0x4c;
      do {
        FUN_00571c20(unaff_ESI,iVar2 + -4,4,4,1);
        FUN_00571c20(unaff_ESI,iVar2,4,4,1);
        FUN_00571c20(unaff_ESI,iVar2 + 4,4,4,1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar3 < *(int *)(unaff_EDI + 0x18));
    }
  }
  else {
    FUN_00571c20(unaff_ESI,unaff_EDI + 8,4,4,1);
    FUN_00571c20(unaff_ESI,unaff_EDI + 0x20,4,4,1);
    iVar3 = 0;
    if (0 < *(int *)(unaff_EDI + 0x18)) {
      iVar2 = unaff_EDI + 0x40;
      do {
        FUN_00571c20(unaff_ESI,iVar2 + -4,4,4,1);
        FUN_00571c20(unaff_ESI,iVar2,4,4,1);
        FUN_00571c20(unaff_ESI,iVar2 + 4,4,4,1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x24;
      } while (iVar3 < *(int *)(unaff_EDI + 0x18));
    }
  }
  iVar3 = *(char *)(unaff_ESI + 0x40) * 0x10 + 0x4c + unaff_ESI;
  *(int *)(iVar3 + 0xc) = *(int *)(unaff_ESI + 0x150) - *(int *)(iVar3 + 0xc);
  cVar1 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar1;
  if ((int)cVar1 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

