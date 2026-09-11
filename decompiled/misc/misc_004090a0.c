/* Decompiled from Speed.exe @ 004090a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x00409131) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004090a0(void)

{
  float fVar1;
  float *unaff_ESI;
  
  FUN_00588f40(0);
  fVar1 = (_DAT_006cc7bc - _DAT_00737bf0) * _DAT_00737c00;
  fVar1 = fVar1 + fVar1;
  if (fVar1 <= _DAT_006ccb7c) {
    unaff_ESI[2] = 0.0;
    return;
  }
  fVar1 = _DAT_006cc7bc / fVar1;
  *unaff_ESI = _DAT_006b7c84 * fVar1;
  unaff_ESI[1] = fVar1 * _DAT_006b7c88;
  unaff_ESI[2] = (float)(DAT_00737c04 >> 0x18) * _DAT_006b7c90 * _DAT_006cc970;
  unaff_ESI[3] = _DAT_006b7c8c * _DAT_00737bf8;
  unaff_ESI[6] = (float)(DAT_00737c04 & 0xff) * _DAT_006cc970;
  unaff_ESI[5] = (float)(DAT_00737c04 >> 8 & 0xff) * _DAT_006cc970;
  unaff_ESI[4] = (float)(DAT_00737c04 >> 0x10 & 0xff) * _DAT_006cc970;
  return;
}

