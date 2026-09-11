/* Decompiled from Speed.exe @ 0067c043 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067c043(void)

{
  char cVar1;
  ushort uVar2;
  int unaff_EBP;
  ushort in_FPUStatusWord;
  float10 in_ST0;
  
  *(byte *)(unaff_EBP + -0x2c8) = *(byte *)(unaff_EBP + -0x2c8) & 0xfe;
  if (DAT_00717ad0 != 0) {
    return;
  }
  *(double *)(unaff_EBP + -0x2d0) = (double)in_ST0;
  cVar1 = *(char *)(unaff_EBP + -0x90);
  if (cVar1 != '\0') {
    if (cVar1 == -1) {
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
    }
    else {
      if (cVar1 != -2) {
        if (cVar1 == '\0') {
          return;
        }
        *(int *)(unaff_EBP + -0x8e) = (int)cVar1;
        goto LAB_0067c12f;
      }
      uVar2 = *(ushort *)(unaff_EBP + -0x2ca) & 0x7ff0;
      if (uVar2 == 0) {
        *(undefined4 *)(unaff_EBP + -0x8e) = 4;
        in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_006ac928);
        if (ABS(in_ST0) < (float10)_DAT_006ac918) {
          in_ST0 = in_ST0 * (float10)_DAT_006ac938;
        }
        goto LAB_0067c12f;
      }
    }
    if (uVar2 == 0x7ff0) {
      *(undefined4 *)(unaff_EBP + -0x8e) = 3;
      in_ST0 = (float10)fscale(in_ST0,(float10)_DAT_006ac920);
      if ((float10)_DAT_006ac910 < ABS(in_ST0)) {
        in_ST0 = in_ST0 * (float10)_DAT_006ac930;
      }
      goto LAB_0067c12f;
    }
  }
  if ((*(ushort *)(unaff_EBP + -0xa4) & 0x20) != 0) {
    return;
  }
  if ((in_FPUStatusWord & 0x20) == 0) {
    return;
  }
  *(undefined4 *)(unaff_EBP + -0x8e) = 8;
LAB_0067c12f:
  *(int *)(unaff_EBP + -0x8a) = *(int *)(unaff_EBP + -0x94) + 1;
  if ((*(byte *)(unaff_EBP + -0x2c8) & 1) == 0) {
    *(undefined4 *)(unaff_EBP + -0x86) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -0x82) = *(undefined4 *)(unaff_EBP + 0xc);
    if (*(char *)(*(int *)(unaff_EBP + -0x94) + 0xd) != '\x01') {
      *(undefined4 *)(unaff_EBP + -0x7e) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x7a) = *(undefined4 *)(unaff_EBP + 0x14);
    }
  }
  *(double *)(unaff_EBP + -0x76) = (double)in_ST0;
  FUN_00681941((int)*(char *)(*(int *)(unaff_EBP + -0x94) + 0xe),unaff_EBP + -0x8e,unaff_EBP + -0xa4
              );
  return;
}

