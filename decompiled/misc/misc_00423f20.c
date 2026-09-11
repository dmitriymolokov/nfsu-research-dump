/* Decompiled from Speed.exe @ 00423f20 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00423f20(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  int *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00689713;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00435a70();
  iVar8 = DAT_0073619c;
  *(undefined4 *)(DAT_0073619c + 0x20) = 0;
  *(undefined4 *)(iVar8 + 0x1c) = 0;
  FUN_004ab900(iVar8);
  cVar3 = FUN_0043a2e0();
  iVar8 = DAT_0077b244;
  if ((cVar3 != '\0') && (DAT_0077b244 != 0)) {
    iVar4 = FUN_004390f0();
    if (*(short *)(iVar4 + 0x10) != 10) {
      iVar4 = FUN_00439930(4);
      if (*(int *)(iVar8 + 0x18c + iVar4 * 4) < 1) goto LAB_0042406f;
    }
    DAT_00735790 = FUN_004ab670(&DAT_00748f70);
    iVar8 = *unaff_EDI;
    piVar5 = (int *)FUN_00567160();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[2] = 2;
      piVar5[3] = iVar8;
    }
    puVar6 = (undefined4 *)unaff_EDI[3];
    piVar1 = unaff_EDI + 2;
    *puVar6 = piVar5;
    unaff_EDI[3] = (int)piVar5;
    piVar5[1] = (int)puVar6;
    *piVar5 = (int)piVar1;
    if (unaff_EDI[4] == 0) {
      FUN_00421b10(unaff_EDI);
    }
    puVar6 = (undefined4 *)FUN_00567160();
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[2] = 1;
      puVar6[3] = 0;
    }
    puVar2 = (undefined4 *)unaff_EDI[3];
    *puVar2 = puVar6;
    unaff_EDI[3] = (int)puVar6;
    puVar6[1] = puVar2;
    *puVar6 = piVar1;
    if (unaff_EDI[4] == 0) {
      FUN_00421b10(unaff_EDI);
    }
    puVar6 = (undefined4 *)FUN_00567160();
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6[2] = 3;
      puVar6[3] = 0;
    }
    puVar2 = (undefined4 *)unaff_EDI[3];
    *puVar2 = puVar6;
    unaff_EDI[3] = (int)puVar6;
    puVar6[1] = puVar2;
    *puVar6 = piVar1;
    if (unaff_EDI[4] == 0) {
      FUN_00421b10(unaff_EDI);
    }
    FUN_00421bc0(10,0);
    ExceptionList = local_c;
    return;
  }
LAB_0042406f:
  pvVar7 = _malloc(1);
  local_4 = 0;
  if (pvVar7 == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_0049e390();
  }
  iVar4 = *unaff_EDI;
  unaff_EDI[0x12] = iVar8;
  local_4 = 0xffffffff;
  unaff_EDI[5] = 8;
  unaff_EDI[6] = 0;
  puVar6 = (undefined4 *)FUN_00567160();
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[2] = 2;
    puVar6[3] = iVar4;
  }
  puVar2 = (undefined4 *)unaff_EDI[3];
  piVar5 = unaff_EDI + 2;
  *puVar2 = puVar6;
  unaff_EDI[3] = (int)puVar6;
  puVar6[1] = puVar2;
  *puVar6 = piVar5;
  if (unaff_EDI[4] == 0) {
    FUN_00421b10(unaff_EDI);
  }
  puVar6 = (undefined4 *)FUN_00567160();
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[2] = 1;
    puVar6[3] = 1;
  }
  puVar2 = (undefined4 *)unaff_EDI[3];
  *puVar2 = puVar6;
  unaff_EDI[3] = (int)puVar6;
  puVar6[1] = puVar2;
  *puVar6 = piVar5;
  if (unaff_EDI[4] == 0) {
    FUN_00421b10(unaff_EDI);
  }
  puVar6 = (undefined4 *)FUN_00567160();
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6[2] = 3;
    puVar6[3] = 0;
  }
  puVar2 = (undefined4 *)unaff_EDI[3];
  *puVar2 = puVar6;
  unaff_EDI[3] = (int)puVar6;
  puVar6[1] = puVar2;
  *puVar6 = piVar5;
  if (unaff_EDI[4] == 0) {
    FUN_00421b10(unaff_EDI);
  }
  ExceptionList = local_c;
  return;
}

