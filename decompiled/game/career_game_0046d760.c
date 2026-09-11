/* Decompiled from Speed.exe @ 0046d760 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0046d7af) */
/* WARNING: Removing unreachable block (ram,0x0046d80d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0046d760(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar4 = DAT_007361f8;
  fVar1 = *(float *)(param_1 + 0xcc);
  fVar2 = *(float *)(param_1 + 200);
  uVar3 = *(uint *)(DAT_007361f8 + 0x2d0);
  uVar6 = uVar3 ^ 0x1d872b41;
  uVar5 = uVar6 >> 5 ^ uVar6;
  *(uint *)(DAT_007361f8 + 0x2d0) = uVar5 << 0x1b ^ uVar5 ^ uVar6;
  *(float *)(param_1 + 0x78) =
       (float)(uVar3 % 0x7fffffff) * _DAT_006b5e7c * (fVar1 - fVar2) + *(float *)(param_1 + 200);
  uVar3 = *(uint *)(iVar4 + 0x2d0);
  fVar1 = *(float *)(param_1 + 0xd4);
  fVar2 = *(float *)(param_1 + 0xd0);
  uVar6 = uVar3 ^ 0x1d872b41;
  uVar5 = uVar6 >> 5 ^ uVar6;
  *(uint *)(iVar4 + 0x2d0) = uVar5 << 0x1b ^ uVar5 ^ uVar6;
  *(float *)(param_1 + 0x7c) =
       (float)(uVar3 % 0x7fffffff) * _DAT_006b5e7c * (fVar1 - fVar2) + *(float *)(param_1 + 0xd0);
  return;
}

