/* Decompiled from Speed.exe @ 0043f630 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f630(void)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *extraout_EDX;
  int *unaff_ESI;
  int iVar7;
  float10 fVar8;
  
  iVar4 = *(int *)(*unaff_ESI + 4);
  fVar1 = _DAT_006ccb90;
  if ((unaff_ESI[9] != 0) && (unaff_ESI[9] != 0x7fffffff)) {
    fVar1 = (float)(DAT_0073ad34 - unaff_ESI[9]) * _DAT_006cca38;
  }
  iVar7 = *(int *)(iVar4 + 0x884);
  if ((((iVar7 != 0) && (iVar7 != 0x7fffffff)) &&
      ((float)(DAT_0073ad34 - iVar7) * _DAT_006cca38 < *(float *)(iVar4 + 0x888))) ||
     ((*(float *)(iVar4 + 0x3d4) <= _DAT_006b7864 || (fVar1 <= _DAT_006b7868)))) {
    unaff_ESI[6] = 0;
    unaff_ESI[8] = 0;
    unaff_ESI[7] = 0;
LAB_0043f8a5:
    *(undefined1 *)(unaff_ESI + 5) = 0;
  }
  else {
    if ((char)unaff_ESI[5] == '\0') {
      unaff_ESI[6] = 0;
      unaff_ESI[8] = 0;
      unaff_ESI[7] = 0;
      if (DAT_00779be0 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = DAT_00779be0 + -0x250;
      }
      iVar5 = FUN_00421970();
      while (iVar7 != iVar5) {
        iVar6 = FUN_00467300();
        if ((((iVar6 == 0) && (*(char *)(iVar7 + 0x14) == '\0')) &&
            ((*(char *)(*(int *)(iVar7 + 600) + 0x15) == '\0' &&
             (*(char *)(*(int *)(iVar7 + 0x25c) + 0x15) == '\0')))) &&
           ((((*(int *)(*(int *)(iVar7 + 600) + 0x140) == iVar4 ||
              (*(int *)(*(int *)(iVar7 + 0x25c) + 0x140) == iVar4)) &&
             (cVar3 = FUN_004280a0(), cVar3 == '\0')) &&
            ((cVar3 = FUN_004280a0(), cVar3 == '\0' && (*(float *)(iVar7 + 0x10) < _DAT_006b785c))))
           )) {
          piVar2 = *(int **)(iVar7 + 600);
          (**(code **)(*extraout_EDX + 0xc))();
          (**(code **)(*piVar2 + 0xc))();
          FUN_00424b70();
          fVar8 = (float10)FUN_00436d60();
          if ((float10)_DAT_006b7860 < fVar8) {
            unaff_ESI[6] = iVar7;
            unaff_ESI[7] = *(int *)(iVar7 + 600);
            unaff_ESI[8] = *(int *)(iVar7 + 0x25c);
            break;
          }
        }
        if (*(int *)(iVar7 + 0x250) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar7 + 0x250) + -0x250;
        }
      }
      if (unaff_ESI[6] == 0) goto LAB_0043f733;
    }
    else {
      if ((char)unaff_ESI[5] != '\x01') goto LAB_0043f733;
      iVar4 = unaff_ESI[6];
      if ((unaff_ESI[7] != *(int *)(iVar4 + 600)) || (unaff_ESI[8] != *(int *)(iVar4 + 0x25c))) {
        *(undefined1 *)(unaff_ESI + 5) = 2;
        goto LAB_0043f733;
      }
      if (*(int *)(iVar4 + 0x264) != 0) goto LAB_0043f8a5;
      fVar1 = *(float *)(iVar4 + 0x10);
      iVar4 = FUN_00467300();
      if ((iVar4 == 0) && (fVar1 <= _DAT_006b785c * _DAT_006ccc5c)) goto LAB_0043f733;
    }
    *(char *)(unaff_ESI + 5) = (char)unaff_ESI[5] + '\x01';
  }
LAB_0043f733:
  if ((char)unaff_ESI[5] == '\x02') {
    if (*(char *)(*(int *)(unaff_ESI[1] + 0x58) + 0x14) != '\0') {
      FUN_00436230(0x3f800000);
    }
    *(undefined1 *)(unaff_ESI + 5) = 0;
    unaff_ESI[6] = 0;
    unaff_ESI[8] = 0;
    unaff_ESI[7] = 0;
  }
  return;
}

