/* Decompiled from Speed.exe @ 004bb0d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004bb0d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0xa6) == '\0') {
    uVar1 = *(uint *)(unaff_EDI + 0xa8);
    iVar3 = *(int *)(unaff_EDI + 0xc);
    *(undefined1 *)(unaff_EDI + 0xa6) = 1;
    uVar2 = FUN_004fd230();
    if ((((iVar3 == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
        (iVar3 = FUN_004ffb70(), iVar3 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(uVar2);
    }
    FUN_004f75b0(uVar1 >> 1);
    *(undefined4 *)(unaff_EDI + 0xac) = DAT_0073ad3c;
    return;
  }
  *(undefined4 *)(unaff_EDI + 0xac) = DAT_0073ad3c;
  return;
}

