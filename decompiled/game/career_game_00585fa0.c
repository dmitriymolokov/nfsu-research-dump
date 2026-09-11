/* Decompiled from Speed.exe @ 00585fa0 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00585fa0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int local_10;
  LARGE_INTEGER local_8;
  
  fVar1 = _DAT_006cc7b0;
  if (DAT_006f0880 == 0) {
    fVar1 = _DAT_006cc7d0;
  }
  fVar1 = (float)DAT_00734560 * fVar1;
  if (DAT_00734564 == 0) {
    return (float10)fVar1;
  }
  QueryPerformanceCounter(&local_8);
  uVar5 = DAT_007349c8;
  iVar4 = DAT_00734564;
  local_10 = __allshr();
  local_10 = local_10 - iVar4;
  if (local_10 < 0) {
    local_10 = 0;
  }
  fVar2 = (float)(1 << ((byte)uVar5 & 0x1f)) * (float)local_10 * _DAT_007301d0 * _DAT_006cc8bc;
  fVar3 = _DAT_006cc7b0;
  if (DAT_006f0880 == 0) {
    fVar3 = _DAT_006cc7d0;
  }
  if (fVar2 <= fVar3) {
    return (float10)fVar2 + (float10)fVar1;
  }
  return (float10)fVar3 + (float10)fVar1;
}

