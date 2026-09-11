/* Decompiled from Speed.exe @ 0052c3f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052c3f0(void)

{
  int iVar1;
  float fVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x234);
  *(undefined4 *)(unaff_ESI + 0x1f90) = *(undefined4 *)(iVar1 + 0x3ec);
  fVar2 = *(float *)(*(int *)(iVar1 + 0x30) + 0x1dc) * _DAT_006cc9f8;
  *(float *)(unaff_ESI + 0x1f78) = fVar2;
  if (fVar2 <= _DAT_006ccac0) {
    if (*(char *)(unaff_ESI + 0x1f10) != '\0') {
      *(undefined1 *)(unaff_ESI + 0x1f10) = 0;
      *(undefined4 *)(unaff_ESI + 0x1f14) = *(undefined4 *)(unaff_ESI + 0x240);
    }
  }
  else if (*(char *)(unaff_ESI + 0x1f10) == '\0') {
    *(undefined1 *)(unaff_ESI + 0x1f10) = 1;
    *(undefined4 *)(unaff_ESI + 0x1f18) = *(undefined4 *)(unaff_ESI + 0x240);
  }
  if (*(float *)(unaff_ESI + 0x1f90) <= *(float *)(unaff_ESI + 0x1f80)) {
    if (*(float *)(unaff_ESI + 0x1f90) < DAT_006cc7a4) {
      *(undefined4 *)(unaff_ESI + 0x1f90) = 0;
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x1f90) = *(undefined4 *)(unaff_ESI + 0x1f80);
  }
  *(float *)(unaff_ESI + 0x1f90) =
       (*(float *)(unaff_ESI + 0x1f90) / *(float *)(unaff_ESI + 0x1f80)) * _DAT_006cc9f8;
  fVar2 = DAT_007000e4;
  if (DAT_007000e4 == _DAT_006cc9f8) {
    fVar2 = *(float *)(iVar1 + 0x3e0);
  }
  *(float *)(unaff_ESI + 0x1f20) = (fVar2 / *(float *)(unaff_ESI + 0x1f24)) * _DAT_006cc94c;
  if (*(char *)(unaff_ESI + 0x12b0) != '\0') {
    fVar2 = DAT_006cc7a4;
    if (*(int *)(iVar1 + 0x28) == 1) {
      fVar2 = *(float *)(*(int *)(*(int *)(iVar1 + 0x34) + 0x48) + 0xa4);
    }
    FUN_00584270(*(float *)(unaff_ESI + 0x1278) - fVar2 / *(float *)(unaff_ESI + 0x12ac));
    if (*(int *)(*(int *)(unaff_ESI + 0x234) + 0x28) == 1) {
      *(float *)(unaff_ESI + 0x1278) =
           *(float *)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x234) + 0x34) + 0x48) + 0xa4) /
           *(float *)(unaff_ESI + 0x12ac);
      return;
    }
    *(float *)(unaff_ESI + 0x1278) = DAT_006cc7a4 / *(float *)(unaff_ESI + 0x12ac);
  }
  return;
}

