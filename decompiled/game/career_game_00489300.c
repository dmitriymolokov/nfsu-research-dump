/* Decompiled from Speed.exe @ 00489300 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00489300(void)

{
  ushort in_AX;
  ushort uVar1;
  uint uVar2;
  float10 fVar3;
  uint local_4;
  
  uVar2 = (uint)in_AX;
  if (0x7fff < in_AX) {
    uVar2 = uVar2 - 0x10000;
  }
  local_4 = uVar2;
  if ((int)uVar2 < 0) {
    local_4 = -uVar2;
  }
  uVar1 = FUN_00564db0(0x3f800000,(float)(int)local_4 * _DAT_006b6c70);
  fVar3 = -((float10)uVar1 * (float10)_DAT_006b6c74);
  if ((int)uVar2 < 0) {
    fVar3 = -fVar3;
  }
  return fVar3;
}

