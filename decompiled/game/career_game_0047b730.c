/* Decompiled from Speed.exe @ 0047b730 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047b730(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 < 0xc) {
    uVar5 = *(uint *)(param_1 + param_2 * 4);
    iVar6 = 0;
    if (0 < (int)uVar5) {
      do {
        uVar5 = *(uint *)(DAT_007361f8 + 0x2d0) % uVar5;
        uVar4 = *(uint *)(DAT_007361f8 + 0x2d0) ^ 0x1d872b41;
        uVar3 = uVar4 >> 5 ^ uVar4;
        *(uint *)(DAT_007361f8 + 0x2d0) = uVar3 << 0x1b ^ uVar3 ^ uVar4;
        iVar1 = *(int *)(param_1 + 0x30 + param_2 * 4);
        uVar2 = *(undefined4 *)(iVar1 + iVar6 * 4);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar1 + -4 + iVar6 * 4) = *(undefined4 *)(iVar1 + uVar5 * 4);
        *(undefined4 *)(*(int *)(param_1 + 0x30 + param_2 * 4) + uVar5 * 4) = uVar2;
        uVar5 = *(uint *)(param_1 + param_2 * 4);
      } while (iVar6 < (int)uVar5);
    }
  }
  return;
}

