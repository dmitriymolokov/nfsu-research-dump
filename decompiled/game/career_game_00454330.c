/* Decompiled from Speed.exe @ 00454330 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0045438d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00454330(void)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_8;
  
  local_8 = -1.0;
  cVar3 = FUN_00454240();
  if (cVar3 != '\0') {
    local_8 = -0.66999996;
  }
  uVar1 = *(uint *)(DAT_007361f8 + 0x2d0);
  uVar6 = uVar1 ^ 0x1d872b41;
  uVar4 = uVar6 >> 5 ^ uVar6;
  *(uint *)(DAT_007361f8 + 0x2d0) = uVar4 << 0x1b ^ uVar4 ^ uVar6;
  fVar2 = (float)(uVar1 % 0x7fffffff) * _DAT_006b5e7c;
  if (_DAT_006cc8a8 <= fVar2) {
    uVar5 = 3;
    if (local_8 <= fVar2) {
      uVar5 = 1;
    }
    return uVar5;
  }
  return 2;
}

