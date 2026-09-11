/* Decompiled from Speed.exe @ 004d7b70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_004d7b70(void)

{
  int *_Memory;
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  puVar8 = (undefined4 *)*unaff_ESI;
  while (puVar8 != unaff_ESI) {
    _Memory = (int *)*unaff_ESI;
    iVar9 = *_Memory;
    piVar1 = (int *)_Memory[1];
    *piVar1 = iVar9;
    *(int **)(iVar9 + 4) = piVar1;
    _free(_Memory);
    puVar8 = (undefined4 *)*unaff_ESI;
  }
  switch(unaff_EDI) {
  case 0:
    cVar5 = FUN_005142e0();
    cVar6 = FUN_004d82f0();
    if (cVar5 == '\0') {
      cVar7 = FUN_004d8270();
      if (cVar7 == '\0') goto LAB_004d7bf1;
LAB_004d7bbe:
      bVar4 = false;
    }
    else {
      cVar7 = FUN_004d8040();
      if (cVar7 != '\0') goto LAB_004d7bbe;
LAB_004d7bf1:
      bVar4 = true;
    }
    if (cVar5 == '\0') {
      if (cVar6 == '\0') goto LAB_004d7c01;
LAB_004d7bcf:
      bVar3 = false;
    }
    else {
      cVar5 = FUN_004d80e0();
      if (cVar5 != '\0') goto LAB_004d7bcf;
LAB_004d7c01:
      bVar3 = true;
    }
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8[2] = 0;
    }
    puVar2 = (undefined4 *)unaff_ESI[1];
    *puVar2 = puVar8;
    unaff_ESI[1] = puVar8;
    puVar8[1] = puVar2;
    *puVar8 = unaff_ESI;
    goto LAB_004d7c14;
  case 1:
    puVar8 = _malloc(0xc);
    if (puVar8 != (undefined4 *)0x0) {
      puVar8[2] = 5;
      break;
    }
    goto LAB_004d7d64;
  case 2:
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) goto LAB_004d7d64;
    puVar8[2] = 4;
    break;
  case 3:
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8[2] = 0;
    }
    puVar2 = (undefined4 *)unaff_ESI[1];
    *puVar2 = puVar8;
    unaff_ESI[1] = puVar8;
    puVar8[1] = puVar2;
    *puVar8 = unaff_ESI;
    cVar5 = FUN_005142e0();
    cVar6 = FUN_004d82f0();
    if (cVar5 == '\0') {
      cVar7 = FUN_004d8270();
      if (cVar7 == '\0') goto LAB_004d7cde;
LAB_004d7cbd:
      bVar4 = false;
    }
    else {
      cVar7 = FUN_004d8040();
      if (cVar7 != '\0') goto LAB_004d7cbd;
LAB_004d7cde:
      bVar4 = true;
    }
    if (cVar5 == '\0') {
      if (cVar6 == '\0') goto LAB_004d7cee;
LAB_004d7cce:
      bVar3 = false;
    }
    else {
      cVar5 = FUN_004d80e0();
      if (cVar5 != '\0') goto LAB_004d7cce;
LAB_004d7cee:
      bVar3 = true;
    }
LAB_004d7c14:
    if (!bVar4) {
      puVar8 = _malloc(0xc);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8[2] = 1;
      }
      puVar2 = (undefined4 *)unaff_ESI[1];
      *puVar2 = puVar8;
      unaff_ESI[1] = puVar8;
      puVar8[1] = puVar2;
      *puVar8 = unaff_ESI;
    }
    if (bVar3) goto switchD_004d7b9a_default;
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) {
LAB_004d7d64:
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8[2] = 2;
    }
    break;
  case 4:
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) goto LAB_004d7d64;
    puVar8[2] = 3;
    break;
  case 5:
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) goto LAB_004d7d64;
    puVar8[2] = 6;
    break;
  case 6:
    puVar8 = _malloc(0xc);
    if (puVar8 == (undefined4 *)0x0) goto LAB_004d7d64;
    puVar8[2] = 7;
    break;
  default:
    goto switchD_004d7b9a_default;
  }
  puVar2 = (undefined4 *)unaff_ESI[1];
  *puVar2 = puVar8;
  unaff_ESI[1] = puVar8;
  puVar8[1] = puVar2;
  *puVar8 = unaff_ESI;
switchD_004d7b9a_default:
  iVar9 = 0;
  for (puVar8 = (undefined4 *)*unaff_ESI;
      (puVar8 != unaff_ESI && (iVar9 = iVar9 + 1, puVar8 != (undefined4 *)0x0));
      puVar8 = (undefined4 *)*puVar8) {
  }
  return iVar9;
}

