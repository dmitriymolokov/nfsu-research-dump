/* Decompiled from Speed.exe @ 004dfdc0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004dfdc0(void)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  puVar4 = &DAT_006fa2b0;
  do {
    *puVar4 = 0;
    iVar7 = DAT_007677a8;
    puVar4 = puVar4 + 0x24;
  } while ((int)puVar4 < 0x6fa5c8);
  if ((DAT_00777b4c == 1) && (cVar3 = FUN_005a2f10(DAT_007677a8,0), cVar3 != '\0')) {
    iVar1 = *(int *)(iVar7 + 0x58a4);
    iVar5 = 0;
    bVar2 = false;
    if (0 < *(int *)(iVar7 + 0x5914)) {
      piVar6 = (int *)(iVar7 + 0x58d8);
      do {
        if (*piVar6 == 2) {
          bVar2 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 3;
        bVar2 = false;
      } while (iVar5 < *(int *)(iVar7 + 0x5914));
    }
    if (*(int *)(iVar7 + 0x58a0) == 0) {
      iVar7 = 0;
      piVar6 = &DAT_006fa294;
      do {
        if (*piVar6 == 10) {
          if (iVar7 * 0x24 != -0x6fa290) {
            (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
          }
          break;
        }
        piVar6 = piVar6 + 9;
        iVar7 = iVar7 + 1;
      } while ((int)piVar6 < 0x6fa5ac);
    }
    if ((iVar1 == 2) || (iVar1 == 3)) {
      iVar7 = 0;
      piVar6 = &DAT_006fa294;
      do {
        if (*piVar6 == 0xd) {
          if (iVar7 * 0x24 != -0x6fa290) {
            (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
          }
          break;
        }
        piVar6 = piVar6 + 9;
        iVar7 = iVar7 + 1;
      } while ((int)piVar6 < 0x6fa5ac);
    }
    if (bVar2) {
      iVar7 = 0;
      piVar6 = &DAT_006fa294;
      do {
        if (*piVar6 == 0xc) {
          if (iVar7 * 0x24 != -0x6fa290) {
            (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
          }
          break;
        }
        piVar6 = piVar6 + 9;
        iVar7 = iVar7 + 1;
      } while ((int)piVar6 < 0x6fa5ac);
    }
  }
  iVar7 = 0;
  piVar6 = &DAT_006fa294;
  do {
    if (*piVar6 == 0xe) {
      if (iVar7 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
      }
      break;
    }
    piVar6 = piVar6 + 9;
    iVar7 = iVar7 + 1;
  } while ((int)piVar6 < 0x6fa5ac);
  iVar7 = 0;
  piVar6 = &DAT_006fa294;
  do {
    if (*piVar6 == 0xf) {
      if (iVar7 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
      }
      break;
    }
    piVar6 = piVar6 + 9;
    iVar7 = iVar7 + 1;
  } while ((int)piVar6 < 0x6fa5ac);
  iVar7 = 0;
  piVar6 = &DAT_006fa294;
  do {
    if (*piVar6 == 0x10) {
      if (iVar7 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
      }
      break;
    }
    piVar6 = piVar6 + 9;
    iVar7 = iVar7 + 1;
  } while ((int)piVar6 < 0x6fa5ac);
  iVar7 = 0;
  piVar6 = &DAT_006fa294;
  do {
    if (*piVar6 == 0x11) {
      if (iVar7 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
      }
      break;
    }
    piVar6 = piVar6 + 9;
    iVar7 = iVar7 + 1;
  } while ((int)piVar6 < 0x6fa5ac);
  iVar7 = 0;
  piVar6 = &DAT_006fa294;
  do {
    if (*piVar6 == 0x12) {
      if (iVar7 * 0x24 != -0x6fa290) {
        (&DAT_006fa2b0)[iVar7 * 0x24] = 1;
      }
      return;
    }
    piVar6 = piVar6 + 9;
    iVar7 = iVar7 + 1;
  } while ((int)piVar6 < 0x6fa5ac);
  return;
}

