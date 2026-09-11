/* Decompiled from Speed.exe @ 00410a00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410a00(void)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_0041eff0();
  _DAT_00701088 = (float)fVar2;
  if (DAT_0071daf0 < 0x400) {
    iVar1 = FUN_00411b00();
    if (iVar1 != 0) {
      DAT_007363b5 = 1;
    }
  }
  if (_DAT_00701088 < _DAT_006cc7b4) {
    FUN_00410ed0();
    return;
  }
  DAT_00700eb4 = 1;
  DAT_00700e70 = 1;
  DAT_00700ea8 = 1;
  DAT_00700ea4 = 1;
  DAT_00700ea0 = 1;
  if (_DAT_00701088 < _DAT_006cca0c) {
    DAT_00736334 = 1;
    DAT_00700e74 = 1;
    DAT_00700e7c = 1;
    DAT_00700e90 = 1;
    DAT_00700eb0 = 1;
    DAT_00700e78 = 0;
    DAT_00700e80 = 0;
    DAT_00700e84 = 0;
    DAT_00700e88 = 0;
    DAT_00700e8c = 0;
    DAT_00700e94 = 0;
    DAT_00700e98 = 0;
    DAT_00700e9c = 0;
    DAT_00700eac = 0;
    FUN_00410ce0();
    return;
  }
  DAT_00700eac = 1;
  DAT_00700e94 = 1;
  DAT_00700e8c = 1;
  DAT_00700e88 = 1;
  DAT_00700e84 = 1;
  DAT_00700e80 = 1;
  DAT_00700e78 = 1;
  DAT_00700e90 = 2;
  DAT_00700e7c = 2;
  if (_DAT_00701088 < _DAT_006cca18) {
    DAT_00736334 = 2;
    DAT_00700e74 = 2;
    DAT_00700e98 = 0;
    DAT_00700e9c = 0;
    DAT_00700eb0 = 3;
    FUN_00410ce0();
    return;
  }
  DAT_00700e98 = 1;
  DAT_00700e9c = 1;
  DAT_00736334 = 3;
  DAT_00700e74 = 3;
  DAT_00700eb0 = 3;
  FUN_00410ce0();
  return;
}

