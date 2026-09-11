/* Decompiled from Speed.exe @ 00436ba0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


float10 FUN_00436ba0(void)

{
  char in_AL;
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int *piVar3;
  
  if (in_AL != '\0') {
    iVar2 = 0;
    *(undefined4 *)(unaff_ESI + 0x7c) = 0;
    piVar3 = (int *)(unaff_ESI + 8);
    do {
      if ((*(char *)(piVar3[-2] + 0x14) != '\0') && (*(char *)(piVar3[-2] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(piVar3[-1] + 0x14) != '\0') && (*(char *)(piVar3[-1] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(*piVar3 + 0x14) != '\0') && (*(char *)(*piVar3 + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(piVar3[1] + 0x14) != '\0') && (*(char *)(piVar3[1] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(piVar3[2] + 0x14) != '\0') && (*(char *)(piVar3[2] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(piVar3[3] + 0x14) != '\0') && (*(char *)(piVar3[3] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(piVar3[4] + 0x14) != '\0') && (*(char *)(piVar3[4] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      if ((*(char *)(piVar3[5] + 0x14) != '\0') && (*(char *)(piVar3[5] + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
      iVar2 = iVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (iVar2 < 0x18);
    for (; iVar2 < 0x1f; iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(unaff_ESI + iVar2 * 4);
      if ((*(char *)(iVar1 + 0x14) != '\0') && (*(char *)(iVar1 + 0x15) != '\0')) {
        iVar1 = FUN_00674898();
        *(float *)(unaff_ESI + 0x7c) = (float)iVar1 + *(float *)(unaff_ESI + 0x7c);
      }
    }
  }
  return (float10)*(float *)(unaff_ESI + 0x7c);
}

