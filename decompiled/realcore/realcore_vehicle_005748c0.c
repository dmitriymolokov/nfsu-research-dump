/* Decompiled from Speed.exe @ 005748c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_005748c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = 0;
  if (0 < DAT_007041c0) {
    piVar2 = &DAT_00704148;
    do {
      if (*piVar2 == unaff_ESI) {
        iVar1 = 0;
        if (((char)piVar2[1] != '\0') && (0 < param_1)) {
          *unaff_EDI = (int)(char)piVar2[1];
          iVar1 = 1;
        }
        if ((*(char *)((int)piVar2 + 5) != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 5);
          iVar1 = iVar1 + 1;
        }
        if ((*(char *)((int)piVar2 + 6) != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 6);
          iVar1 = iVar1 + 1;
        }
        if ((*(char *)((int)piVar2 + 7) != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 7);
          iVar1 = iVar1 + 1;
        }
        if (((char)piVar2[2] != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)(char)piVar2[2];
          iVar1 = iVar1 + 1;
        }
        if ((*(char *)((int)piVar2 + 9) != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 9);
          iVar1 = iVar1 + 1;
        }
        if ((*(char *)((int)piVar2 + 10) != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 10);
          iVar1 = iVar1 + 1;
        }
        if ((*(char *)((int)piVar2 + 0xb) != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 0xb);
          iVar1 = iVar1 + 1;
        }
        if (((char)piVar2[3] != '\0') && (iVar1 < param_1)) {
          unaff_EDI[iVar1] = (int)(char)piVar2[3];
          iVar1 = iVar1 + 1;
        }
        if (*(char *)((int)piVar2 + 0xd) == '\0') {
          return iVar1;
        }
        if (param_1 <= iVar1) {
          return iVar1;
        }
        unaff_EDI[iVar1] = (int)*(char *)((int)piVar2 + 0xd);
        return iVar1 + 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar1 < DAT_007041c0);
  }
  return 0;
}

