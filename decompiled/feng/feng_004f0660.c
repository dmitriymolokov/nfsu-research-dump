/* Decompiled from Speed.exe @ 004f0660 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f0660(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  float fVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(param_2 + 0x2c);
  if (*(int *)(iVar1 + 0xc) != 0) {
    fVar2 = (*(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x1c)) * *(float *)(param_1 + 8) +
            (*(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x20)) * *(float *)(param_1 + 0x18) +
            (*(float *)(iVar1 + 0x18) + *(float *)(iVar1 + 0x24)) * *(float *)(param_1 + 0x28) +
            *(float *)(param_1 + 0x38);
    *(undefined2 *)(param_2 + 0x20) = param_3;
    if (fVar2 < DAT_006cc7a4 == (fVar2 == DAT_006cc7a4)) {
      *(int *)(unaff_ESI + 0x114 + *(int *)(unaff_ESI + 0x110) * 8) = param_2;
      *(float *)(unaff_ESI + 0x118 + *(int *)(unaff_ESI + 0x110) * 8) = fVar2;
      *(int *)(unaff_ESI + 0x110) = *(int *)(unaff_ESI + 0x110) + 1;
      return;
    }
  }
  return;
}

