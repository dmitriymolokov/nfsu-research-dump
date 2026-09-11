/* Decompiled from Speed.exe @ 004df790 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004df790(void)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  puVar1 = &DAT_006fa2b0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0x24;
  } while ((int)puVar1 < 0x6fa5c8);
  if (unaff_EDI == 6) {
    iVar3 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 3) {
        if (iVar3 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
    iVar3 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 0x14) goto LAB_004df862;
      piVar2 = piVar2 + 9;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  else if (unaff_EDI == 5) {
    iVar3 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 4) {
        if (iVar3 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
    iVar3 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 0x14) goto LAB_004df862;
      piVar2 = piVar2 + 9;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  else if (unaff_EDI == 2) {
    iVar3 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 7) goto LAB_004df862;
      piVar2 = piVar2 + 9;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
LAB_004df873:
  iVar3 = DAT_00758c2c;
  if (DAT_00777b4c != 8) {
    iVar3 = DAT_00758c28;
  }
  piVar2 = &DAT_0075afa4;
  do {
    if (iVar3 == *piVar2) {
      iVar3 = FUN_004ac060();
      iVar3 = *(int *)(iVar3 + 0x2f0);
      if (DAT_0078eb08 < iVar3) {
        iVar4 = 0;
        piVar2 = &DAT_006fa294;
        goto LAB_004df8c8;
      }
      break;
    }
    piVar2 = piVar2 + 0xd2;
  } while ((int)piVar2 < 0x75f144);
LAB_004df8eb:
  if (unaff_EDI == 4) {
    iVar3 = 0;
    piVar2 = &DAT_006fa294;
    do {
      if (*piVar2 == 9) {
        if (iVar3 * 0x24 != -0x6fa290) {
          (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
        }
        break;
      }
      piVar2 = piVar2 + 9;
      iVar3 = iVar3 + 1;
    } while ((int)piVar2 < 0x6fa5ac);
  }
  iVar3 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0xe) {
      if (iVar3 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar3 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0xf) {
      if (iVar3 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar3 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0x10) {
      if (iVar3 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar3 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0x11) {
      if (iVar3 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
      }
      break;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  iVar3 = 0;
  piVar2 = &DAT_006fa294;
  do {
    if (*piVar2 == 0x12) {
      if (iVar3 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
      }
      return;
    }
    piVar2 = piVar2 + 9;
    iVar3 = iVar3 + 1;
  } while ((int)piVar2 < 0x6fa5ac);
  return;
LAB_004df862:
  if (iVar3 * 0x24 != -0x6fa290) {
    (&DAT_006fa2b0)[iVar3 * 0x24] = 1;
  }
  goto LAB_004df873;
  while( true ) {
    piVar2 = piVar2 + 9;
    iVar4 = iVar4 + 1;
    if (0x6fa5ab < (int)piVar2) break;
LAB_004df8c8:
    DAT_0078eb08 = iVar3;
    if (*piVar2 == 8) {
      if (iVar4 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar4 * 0x24] = 1;
      }
      break;
    }
  }
  goto LAB_004df8eb;
}

