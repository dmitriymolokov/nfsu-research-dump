/* Decompiled from Speed.exe @ 0049f1b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0049f1b0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)(DAT_0073ad3c - *(int *)(param_1 + 8)) * _DAT_006cca38;
  if ((DAT_006cc7a4 < fVar1) && (fVar1 < _DAT_006b6b90)) {
    FUN_00565da0(&DAT_006b9172);
    return 0;
  }
  if ((_DAT_006b6b90 < fVar1) && (fVar1 < _DAT_006b6b94)) {
    uVar2 = FUN_00674898();
    FUN_00565da0(&DAT_006ca778,uVar2);
    return uVar2;
  }
  if ((_DAT_006b6b94 < fVar1) && (fVar1 < _DAT_006b6b98)) {
    FUN_00565da0(&DAT_006ca778,*(undefined4 *)(param_1 + 0x4c));
    return *(undefined4 *)(param_1 + 0x4c);
  }
  FUN_00565da0(&DAT_006ca778,*(undefined4 *)(param_1 + 0x4c));
  return 0;
}

