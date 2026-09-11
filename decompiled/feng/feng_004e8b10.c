/* Decompiled from Speed.exe @ 004e8b10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e8b10(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI == 0) {
LAB_004e8b2f:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c7e);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8b2f;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8b2f;
  }
  if (unaff_EDI == 0) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI == 0) {
LAB_004e8b7e:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c7f);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8b7e;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8b7e;
  }
  if (unaff_EDI == 1) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI == 0) {
LAB_004e8bce:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c80);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8bce;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8bce;
  }
  if (unaff_EDI == 2) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI == 0) {
LAB_004e8c1e:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c81);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8c1e;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8c1e;
  }
  if (unaff_EDI == 3) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI == 0) {
LAB_004e8c6e:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c82);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8c6e;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8c6e;
  }
  if (unaff_EDI == 4) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI == 0) {
LAB_004e8cbe:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c83);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8cbe;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8cbe;
  }
  if (unaff_EDI == 5) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI == 0) {
LAB_004e8d0e:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xb5261c84);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004e8d0e;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004e8d0e;
  }
  if (unaff_EDI == 6) {
    FUN_004f6970();
  }
  else {
    FUN_004f6910(iVar1);
  }
  if (unaff_ESI != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004e8d7a;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0xb5261c85);
  }
LAB_004e8d7a:
  if (unaff_EDI == 7) {
    FUN_004f6970();
    return;
  }
  FUN_004f6910(iVar1);
  return;
}

