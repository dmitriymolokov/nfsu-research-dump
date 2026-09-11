/* Decompiled from Speed.exe @ 004f5d80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f5d80(int param_1,int param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  float fVar2;
  int *unaff_ESI;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  if (*(int *)(iVar1 + 0xc) != 0) {
    fVar2 = (*(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x20)) * *(float *)(param_1 + 0x18) +
            (*(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x1c)) * *(float *)(param_1 + 8) +
            (*(float *)(iVar1 + 0x18) + *(float *)(iVar1 + 0x24)) * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x38);
    *(undefined2 *)(param_2 + 0x20) = param_4;
    if (fVar2 < DAT_006cc7a4 == (fVar2 == DAT_006cc7a4)) {
      unaff_ESI[*unaff_ESI * 2 + 1] = param_2;
      unaff_ESI[*unaff_ESI * 2 + 2] = (int)fVar2;
      *unaff_ESI = *unaff_ESI + 1;
      return;
    }
  }
  return;
}

