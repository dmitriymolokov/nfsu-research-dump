/* Decompiled from Speed.exe @ 006831f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_006831f0(void)

{
  uint *puVar1;
  uint *unaff_ESI;
  
  if ((unaff_ESI[4] != 0) && (1 < unaff_ESI[5])) {
    (*DAT_006e75f0)(unaff_ESI[5]);
  }
  *unaff_ESI = *unaff_ESI & 0xff;
  unaff_ESI[7] = 0;
  FUN_0063f190(&DAT_00717f18);
  puVar1 = unaff_ESI;
  if (DAT_00717f38 != (uint *)0x0) {
    *(uint **)((int)DAT_00717f3c + 4) = unaff_ESI;
    puVar1 = DAT_00717f38;
  }
  DAT_00717f38 = puVar1;
  DAT_00717f3c = unaff_ESI;
  unaff_ESI[1] = 0;
  FUN_0063f1a0(&DAT_00717f18);
  return;
}

