/* Decompiled from Speed.exe @ 00652c00 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00652c00(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x1000;
  if (0x4af < (int)param_1) {
    uVar1 = param_1 / 0x4b0;
    param_1 = param_1 % 0x4b0;
    do {
      iVar3 = iVar3 << 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  if ((int)param_1 < -0x4af) {
    iVar2 = (-param_1 - 0x4b0) / 0x4b0 + 1;
    param_1 = param_1 + iVar2 * 0x4b0;
    do {
      iVar3 = iVar3 >> 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = (int)(param_1 * 0x369d) >> 0x10;
  if (iVar2 < -0xff) {
    iVar2 = -0xff;
  }
  else if (-1 < iVar2) {
    return (int)(((byte)(&DAT_006e9ef0)[iVar2] + 0x100) * iVar3) >> 8;
  }
  return (int)(((byte)(&DAT_006e9ff0)[iVar2] + 0x100) * iVar3) >> 9;
}

