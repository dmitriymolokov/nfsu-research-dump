/* Decompiled from Speed.exe @ 00550570 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00550570(void)

{
  int iVar1;
  int unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_ESI == 0) {
LAB_0055058f:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xeb769347);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_0055058f;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_0055058f;
  }
  *unaff_EDI = iVar1;
  if (unaff_ESI == 0) {
LAB_005505cc:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xc55d996e);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_005505cc;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_005505cc;
  }
  unaff_EDI[1] = iVar1;
  if (unaff_ESI == 0) {
LAB_0055060a:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x31dfedb7);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_0055060a;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_0055060a;
  }
  unaff_EDI[2] = iVar1;
  if (unaff_ESI == 0) {
LAB_00550648:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x6a9f4e1d);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_00550648;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_00550648;
  }
  unaff_EDI[3] = iVar1;
  if (unaff_ESI == 0) {
LAB_00550686:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x22b29770);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_00550686;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_00550686;
  }
  unaff_EDI[4] = iVar1;
  if (unaff_ESI == 0) {
LAB_005506c4:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xf76c2f69);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_005506c4;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_005506c4;
  }
  unaff_EDI[5] = iVar1;
  if (unaff_ESI != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_00550722;
    }
  }
  if (DAT_0073578c != 0) {
    iVar1 = FUN_004ef050(0x67779163);
    unaff_EDI[6] = iVar1;
    return;
  }
  iVar1 = 0;
LAB_00550722:
  unaff_EDI[6] = iVar1;
  return;
}

