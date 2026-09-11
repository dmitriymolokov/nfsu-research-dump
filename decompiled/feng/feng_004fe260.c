/* Decompiled from Speed.exe @ 004fe260 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fe260(uint *param_1)

{
  uint uVar1;
  uint *unaff_ESI;
  
  uVar1 = *unaff_ESI;
  if (((0x1ff < uVar1) && (uVar1 < 0x205)) && (uVar1 != 0x203)) {
    _free((void *)unaff_ESI[1]);
  }
  unaff_ESI[1] = 0;
  uVar1 = *param_1;
  *unaff_ESI = uVar1;
  if (((0x1ff < uVar1) && (uVar1 < 0x205)) && (uVar1 != 0x203)) {
    FUN_004fe2e0(unaff_ESI);
    unaff_ESI[2] = param_1[2];
    return;
  }
  unaff_ESI[1] = param_1[1];
  unaff_ESI[2] = param_1[2];
  return;
}

