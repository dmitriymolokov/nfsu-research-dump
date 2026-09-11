/* Decompiled from Speed.exe @ 00487f50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487f50(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int unaff_ESI;
  float10 fVar5;
  float local_48;
  float local_44;
  
  fVar5 = (float10)FUN_00488380(unaff_ESI,*(undefined4 *)(unaff_ESI + 0x4c),DAT_006b6d34);
  fVar1 = (float)fVar5;
  if (*(float *)(unaff_ESI + 0x4c) == fVar1) {
    local_48 = 0.0;
  }
  else {
    local_48 = ABS(*(float *)(unaff_ESI + 0x4c) - fVar1);
    if (local_48 == DAT_006cc7a4) {
      local_48 = 0.0;
    }
    else {
      local_48 = local_48 / (DAT_0073ad38 * _DAT_006b6d3c);
    }
  }
  if (*(float *)(unaff_ESI + 0x50) == DAT_006b6d38) {
    local_44 = 0.0;
  }
  else {
    local_44 = ABS(*(float *)(unaff_ESI + 0x50) - DAT_006b6d38);
    if (local_44 == DAT_006cc7a4) {
      local_44 = 0.0;
    }
    else {
      local_44 = local_44 / (_DAT_006b6d40 * DAT_0073ad38);
    }
  }
  fVar5 = (float10)FUN_00488190(unaff_ESI,_DAT_006b6d44 * DAT_0073ad38);
  fVar2 = (float)fVar5;
  fVar5 = (float10)FUN_00488190(unaff_ESI,_DAT_006b6d48 * DAT_0073ad38);
  fVar3 = (float)fVar5;
  fVar4 = local_48;
  if (local_48 < local_44) {
    fVar4 = local_44;
  }
  if (fVar4 < fVar2) {
    fVar4 = fVar2;
  }
  if (fVar4 < fVar3) {
    fVar4 = fVar3;
  }
  if (fVar4 == DAT_006cc7a4) {
    return;
  }
  fVar4 = _DAT_006cc7bc / fVar4;
  FUN_00488220(unaff_ESI,fVar1,fVar4 * local_48 * DAT_0073ad38 * _DAT_006b6d3c);
  FUN_00488220(unaff_ESI,DAT_006b6d38,fVar4 * local_44 * _DAT_006b6d40 * DAT_0073ad38);
  FUN_00488280(unaff_ESI,fVar4 * fVar2 * _DAT_006b6d44 * DAT_0073ad38);
  FUN_00488280(unaff_ESI,fVar4 * fVar3 * _DAT_006b6d48 * DAT_0073ad38);
  return;
}

