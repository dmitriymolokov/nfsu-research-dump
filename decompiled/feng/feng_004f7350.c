/* Decompiled from Speed.exe @ 004f7350 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f7350(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  float10 fVar3;
  
  if (unaff_ESI != 0) {
    iVar1 = *(int *)(unaff_ESI + 0x2c);
    switch(*(undefined4 *)(unaff_ESI + 0x18)) {
    case 1:
    case 7:
    case 9:
      *param_1 = *(float *)(iVar1 + 0x38);
      *param_2 = *(float *)(iVar1 + 0x3c);
      return;
    case 2:
      iVar2 = FUN_004f43d0();
      if (iVar2 != 0) {
        fVar3 = (float10)FUN_004f4ea0(0);
        *param_1 = (float)(fVar3 * (float10)*(float *)(iVar1 + 0x38));
        fVar3 = (float10)FUN_004f4f10(iVar2,*(undefined4 *)(unaff_ESI + 0x60),
                                      *(undefined4 *)(unaff_ESI + 0x6c));
        *param_2 = (float)(fVar3 * (float10)*(float *)(iVar1 + 0x3c));
        return;
      }
      break;
    default:
      *param_1 = 0.0;
      *param_2 = 0.0;
    }
  }
  return;
}

