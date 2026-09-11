/* Decompiled from Speed.exe @ 0047d780 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0047d780(float param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0.0;
  local_c = 1.0;
  local_8 = 1.0;
  iVar1 = 6;
  do {
    fVar2 = (float10)FUN_0047d6c0(local_c * param_1);
    iVar1 = iVar1 + -1;
    local_4 = (float)(fVar2 * (float10)local_8 + (float10)local_4);
    local_c = local_c + local_c;
    local_8 = _DAT_006b701c * local_8;
  } while (iVar1 != 0);
  return (float10)local_4;
}

