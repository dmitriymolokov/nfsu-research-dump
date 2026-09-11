/* Decompiled from Speed.exe @ 00548090 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00548090(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 extraout_ST0;
  
  FUN_005488d0(0x20);
  FUN_005488d0(0x20);
  iVar3 = DAT_007354f0;
  if (0.0 < _DAT_006f3d98 == (_DAT_006f3d98 == 0.0)) {
    _DAT_006f3d98 = 0.0;
    FUN_00548000(0);
    _DAT_007354dc = FUN_00674898();
    fVar1 = (float)(extraout_ST0 + (float10)0.0) - (float)DAT_0073ad34 * _DAT_006cca38;
    FUN_00438b50();
    fVar2 = ABS(fVar1);
    if (_DAT_006cc90c < fVar2) {
      _DAT_0073ddbc = FUN_00674898();
      DAT_007354ec = 0;
      DAT_0073014c = 1;
      return;
    }
    if (fVar1 <= DAT_006cc7a4) {
      iVar3 = -1;
    }
    else {
      iVar3 = 1;
    }
    if ((iVar3 == DAT_007354f0) && (fVar2 < _DAT_006cc8bc == (fVar2 == _DAT_006cc8bc))) {
      DAT_007354ec = DAT_007354ec + 1;
      if (4 < DAT_007354ec) {
        FUN_00547a40((float)(extraout_ST0 + (float10)0.0));
        DAT_007354f0 = iVar3;
        DAT_007354ec = 0;
        DAT_007354e8 = DAT_007354e8 + 1;
        return;
      }
    }
    else {
      DAT_007354ec = 0;
    }
  }
  DAT_007354f0 = iVar3;
  return;
}

