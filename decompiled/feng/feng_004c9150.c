/* Decompiled from Speed.exe @ 004c9150 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c9150(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 0x88) = 0;
  if (*(int *)(unaff_EDI + 0xc) == 0) {
LAB_004c917a:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x3e3934ad);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004c917a;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004c917a;
  }
  FUN_004f6910(iVar1);
  if (*(int *)(unaff_EDI + 0xc) == 0) {
LAB_004c91c1:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xe65a5489);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004c91c1;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004c91c1;
  }
  FUN_004f6910(iVar1);
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004c922d;
    }
  }
  if (DAT_0073578c != 0) {
    uVar2 = FUN_004ef050(0x532bdf3b);
    FUN_004f6910(uVar2);
    return;
  }
  iVar1 = 0;
LAB_004c922d:
  FUN_004f6910(iVar1);
  return;
}

