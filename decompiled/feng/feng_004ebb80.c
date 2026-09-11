/* Decompiled from Speed.exe @ 004ebb80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ebb80(void)

{
  int iVar1;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) == 0) {
LAB_004ebba3:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x43225720);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004ebba3;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004ebba3;
  }
  FUN_004f6970(iVar1);
  if (*(int *)(unaff_EDI + 0xc) == 0) {
LAB_004ebbea:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x13bba3b);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004ebbea;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004ebbea;
  }
  FUN_004f6970(iVar1);
  if (*(int *)(unaff_EDI + 0xc) == 0) {
LAB_004ebc31:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x13bba3c);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004ebc31;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004ebc31;
  }
  FUN_004f6970(iVar1);
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004ebc94;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0xe5dbc6d6);
  }
LAB_004ebc94:
  FUN_004f6970(iVar1);
  DAT_0070108e = 0;
  FUN_0041f4d0();
  return;
}

