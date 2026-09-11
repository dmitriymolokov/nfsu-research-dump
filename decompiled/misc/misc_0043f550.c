/* Decompiled from Speed.exe @ 0043f550 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f550(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  int *unaff_ESI;
  float10 fVar5;
  
  iVar3 = *(int *)(*unaff_ESI + 4);
  fVar1 = _DAT_006ccb90;
  if ((unaff_ESI[9] != 0) && (unaff_ESI[9] != 0x7fffffff)) {
    fVar1 = (float)(DAT_0073ad34 - unaff_ESI[9]) * _DAT_006cca38;
  }
  if ((((*(int *)(iVar3 + 0x3cc) != 0) || (*(char *)(*(int *)(iVar3 + 0x3c) + 0x1c) != '\0')) ||
      ((*(float *)(iVar3 + 0xb8) <= _DAT_006cc95c &&
       (*(int *)(*(int *)(unaff_ESI[1] + 0x30) + 0x10) != 0)))) ||
     ((fVar1 <= _DAT_006b7838 && (*(int *)(*(int *)(unaff_ESI[1] + 0x30) + 0x10) != 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  fVar1 = *(float *)(iVar3 + 0x68);
  fVar2 = *(float *)(*(int *)(iVar3 + 0x20) + 8);
  fVar5 = (float10)FUN_00440a40(iVar3 + 0x540,iVar3 + 0x60,0,0,0);
  if (((bVar4) && ((float10)_DAT_006b7850 < (float10)(fVar1 - fVar2) - fVar5)) &&
     (*(char *)(*(int *)(unaff_ESI[1] + 0x30) + 0x14) != '\0')) {
    FUN_00436230(0x3f800000);
    return;
  }
  return;
}

