/* Decompiled from Speed.exe @ 00660ed0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00660ed0(void)

{
  float fVar1;
  uint uVar2;
  uint local_4;
  
  local_4 = 0xffffff80;
  do {
    fVar1 = (float)(int)local_4;
    uVar2 = local_4 & 0xff;
    local_4 = local_4 + 1;
    *(float *)(&DAT_00717300 + uVar2 * 4) = fVar1 * _DAT_006cc85c;
  } while ((int)local_4 < 0x80);
  return;
}

