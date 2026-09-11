/* Decompiled from Speed.exe @ 004f6d10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f6d10(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  
  if (unaff_ESI != 0) {
    iVar3 = *(int *)(unaff_ESI + 0x2c);
    switch(*(undefined4 *)(unaff_ESI + 0x18)) {
    case 1:
    case 7:
    case 9:
      *param_1 = *(float *)(iVar3 + 0x1c) - *(float *)(iVar3 + 0x38) * _DAT_006cc7dc;
      *param_2 = *(float *)(iVar3 + 0x20) - *(float *)(iVar3 + 0x3c) * _DAT_006cc7dc;
      return;
    case 2:
      iVar4 = FUN_004f43d0();
      if (iVar4 != 0) {
        fVar5 = (float10)FUN_004f4ea0(0);
        fVar1 = *(float *)(iVar3 + 0x38);
        fVar6 = (float10)FUN_004f4f10(iVar4,*(undefined4 *)(unaff_ESI + 0x60),
                                      *(undefined4 *)(unaff_ESI + 0x6c));
        fVar2 = *(float *)(iVar3 + 0x3c);
        fVar5 = (float10)FUN_004f5000(iVar4,*(undefined4 *)(unaff_ESI + 0x68),
                                      (float)(fVar5 * (float10)fVar1));
        *param_1 = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x1c));
        fVar5 = (float10)FUN_004f5030(iVar4,*(undefined4 *)(unaff_ESI + 0x68),
                                      (float)(fVar6 * (float10)fVar2));
        *param_2 = (float)(fVar5 + (float10)*(float *)(iVar3 + 0x20));
        return;
      }
      break;
    default:
      *param_1 = *(float *)(iVar3 + 0x1c);
      *param_2 = *(float *)(iVar3 + 0x20);
      break;
    case 5:
      break;
    }
  }
  return;
}

