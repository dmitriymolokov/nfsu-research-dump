/* Decompiled from Speed.exe @ 00435570 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00435570(undefined4 param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *unaff_ESI;
  undefined4 uVar9;
  
  if ((*unaff_ESI == 3) && (iVar3 = FUN_00434d10(param_1), iVar3 == 4)) {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    if ((iVar3 != 0) && ((*(int *)(iVar3 + 0x18) != 0 && (*(int **)(iVar3 + 0x14) != (int *)0x0))))
    {
      (**(code **)(**(int **)(iVar3 + 0x14) + 8))(0xd8692111,0,0,*(int *)(iVar3 + 0x18));
    }
    FUN_00434b50(unaff_ESI,4);
  }
  if (*unaff_ESI == 4) {
    unaff_ESI[5] = DAT_0073ad34 - unaff_ESI[4];
    FUN_00586690(0x3c23d70a);
    iVar3 = FUN_00674898();
    unaff_ESI[5] = iVar3;
  }
  iVar3 = 0;
  if (0 < unaff_ESI[9]) {
    piVar6 = unaff_ESI + 0x148;
    do {
      piVar8 = (int *)*piVar6;
      if ((((short)piVar8[4] == 0) && (FUN_004338c0(), *(int *)(*(int *)(*piVar8 + 0x14) + 4) == 1))
         && (piVar8[*(char *)(DAT_0073619c + 0x53f) + 0x18] < unaff_ESI[6])) {
        unaff_ESI[6] = piVar8[*(char *)(DAT_0073619c + 0x53f) + 0x18];
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < unaff_ESI[9]);
  }
  iVar3 = unaff_ESI[0x14d];
  iVar4 = 0;
  if ((iVar3 != 0) && (unaff_ESI[10] = 0, 0 < unaff_ESI[9])) {
    piVar6 = unaff_ESI + 0x148;
    do {
      piVar8 = (int *)*piVar6;
      if ((((short)piVar8[4] == 0) && (*piVar8 != 0)) &&
         ((iVar5 = *(int *)(*piVar8 + 0x18), iVar5 != 0 &&
          (unaff_ESI[0x14e] == *(int *)(iVar5 + 0x10))))) {
        FUN_004350d0(iVar3,0,1);
        if (((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) && (iVar3 == 1)) {
          piVar8[unaff_ESI[0x14c] + 0x38] = 0x497423fe;
          *(undefined4 *)(iVar5 + 0xa08 + unaff_ESI[0x14c] * 4) = 1;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar4 < unaff_ESI[9]);
  }
  FUN_00434ed0();
  FUN_00434f80(unaff_ESI);
  if ((DAT_0078a30c == 3) && (0 < unaff_ESI[9])) {
    piVar6 = unaff_ESI + 0x148;
    iVar3 = 1;
    do {
      iVar4 = *piVar6;
      if (((*(char *)(iVar4 + 0xd) != '\0') &&
          ((int)*(char *)(iVar4 + 10) + (int)*(char *)(iVar4 + 9) == unaff_ESI[9])) &&
         (iVar4 = iVar3, piVar8 = piVar6, iVar3 < unaff_ESI[9])) {
        do {
          piVar1 = (int *)piVar8[1];
          if ((short)piVar1[4] == 0) {
            iVar5 = *piVar1;
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(iVar5 + 0x18);
            }
            FUN_004350d0(iVar4 + 1,iVar5 == 0,3);
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar4 < unaff_ESI[9]);
      }
      piVar6 = piVar6 + 1;
      bVar2 = iVar3 < unaff_ESI[9];
      iVar3 = iVar3 + 1;
    } while (bVar2);
  }
  if (((DAT_0078a344 != '\0') || (DAT_007361a8 != 0)) && (iVar3 = 0, 0 < unaff_ESI[9])) {
    piVar6 = unaff_ESI + 0x148;
    do {
      piVar8 = (int *)*piVar6;
      iVar4 = *piVar8;
      if ((*(char *)(iVar4 + 0x874) == '\0') || ((short)piVar8[4] != 0)) {
        if ((*(int *)(iVar4 + 0x28) == 1) &&
           ((*(int *)(*(int *)(*(int *)(iVar4 + 0x34) + 0x48) + 0x94) != 0 &&
            ((short)piVar8[4] == 0)))) {
          iVar4 = unaff_ESI[9];
          if (0 < iVar4) {
            piVar8 = unaff_ESI + iVar4 + 0x147;
            iVar5 = iVar4;
            do {
              if (iVar4 < iVar5) {
                iVar7 = 0;
              }
              else {
                iVar7 = *piVar8;
              }
              if (*(char *)(iVar7 + 0xc) == '\0') goto LAB_00435842;
              iVar5 = iVar5 + -1;
              piVar8 = piVar8 + -1;
            } while (0 < iVar5);
          }
          iVar5 = FUN_00435bd0(unaff_ESI);
LAB_00435842:
          uVar9 = 6;
          goto LAB_00435844;
        }
      }
      else {
        iVar4 = unaff_ESI[9];
        if (0 < iVar4) {
          piVar8 = unaff_ESI + iVar4 + 0x147;
          iVar5 = iVar4;
          do {
            if (iVar4 < iVar5) {
              iVar7 = 0;
            }
            else {
              iVar7 = *piVar8;
            }
            if (*(char *)(iVar7 + 0xc) == '\0') goto LAB_004357ee;
            iVar5 = iVar5 + -1;
            piVar8 = piVar8 + -1;
          } while (0 < iVar5);
        }
        iVar5 = FUN_00435bd0(unaff_ESI);
LAB_004357ee:
        uVar9 = 7;
LAB_00435844:
        FUN_004350d0(iVar5,0,uVar9);
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < unaff_ESI[9]);
  }
  if ((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) {
    iVar3 = *(int *)(*(int *)(DAT_007361bc + 4) + 0x1c);
    iVar4 = unaff_ESI[4];
    iVar5 = DAT_0078a314;
    if ((iVar4 != 0) && (iVar4 != 0x7fffffff)) {
      iVar5 = (iVar4 - DAT_0073ad34) + DAT_0078a314;
    }
    if (((float)iVar5 * _DAT_006cca38 < DAT_006cc7a4) && (*(short *)(iVar3 + 0x10) == 0)) {
      iVar4 = 0;
      if (0 < unaff_ESI[9]) {
        piVar6 = unaff_ESI + 0x148;
        do {
          if (iVar3 == *piVar6) {
            FUN_004350d0(1,0,8);
            break;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar4 < unaff_ESI[9]);
      }
    }
  }
  if ((DAT_0078a30c == 2) && (iVar3 = 0, 0 < unaff_ESI[9])) {
    piVar6 = unaff_ESI + 0x148;
    do {
      iVar4 = *piVar6;
      if ((((*(char *)(iVar4 + 0xd) != '\0') && (*(short *)(iVar4 + 0x10) == 0)) &&
          (iVar4 = *(int *)(iVar4 + 0x38 + *(char *)(DAT_0073619c + 0x53f) * 4), iVar4 != 0)) &&
         ((iVar4 != 0x7fffffff && (iVar4 <= DAT_0078a310)))) {
        FUN_004350d0(0,0,1);
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < unaff_ESI[9]);
  }
  if (((DAT_006cc7a4 < (float)unaff_ESI[8]) && (unaff_ESI[7] != 0)) &&
     ((unaff_ESI[7] != 0x7fffffff &&
      (((float)unaff_ESI[8] <= (float)(DAT_0073ad34 - unaff_ESI[7]) * _DAT_006cca38 &&
       (iVar3 = 0, 0 < unaff_ESI[9])))))) {
    piVar6 = unaff_ESI + 0x148;
    do {
      if (*(short *)(*piVar6 + 0x10) == 0) {
        iVar4 = unaff_ESI[9];
        if (0 < iVar4) {
          piVar8 = unaff_ESI + iVar4 + 0x147;
          iVar5 = iVar4;
          do {
            if (iVar4 < iVar5) {
              iVar7 = 0;
            }
            else {
              iVar7 = *piVar8;
            }
            if (*(char *)(iVar7 + 0xc) == '\0') goto LAB_004359fe;
            iVar5 = iVar5 + -1;
            piVar8 = piVar8 + -1;
          } while (0 < iVar5);
        }
        iVar5 = FUN_00435bd0(unaff_ESI);
LAB_004359fe:
        FUN_004350d0(iVar5,0,9);
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < unaff_ESI[9]);
  }
  if ((unaff_ESI[0x14c] != 0) && (iVar3 = 0, 0 < unaff_ESI[9])) {
    piVar6 = unaff_ESI + 0x148;
    do {
      if ((*(short *)(*piVar6 + 0x10) == 0) && ((int)*(char *)(*piVar6 + 9) == unaff_ESI[0x14c])) {
        FUN_004350d0(0,0,1);
      }
      iVar3 = iVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar3 < unaff_ESI[9]);
  }
  return;
}

