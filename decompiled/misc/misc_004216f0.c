/* Decompiled from Speed.exe @ 004216f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0042172b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004216f0(float param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x2d0);
  uVar3 = uVar1 ^ 0x1d872b41;
  uVar2 = uVar3 >> 5 ^ uVar3;
  *(uint *)(unaff_ESI + 0x2d0) = uVar2 << 0x1b ^ uVar2 ^ uVar3;
  return (float10)(uVar1 % 0x7fffffff) * (float10)_DAT_006b5e7c * (float10)param_1;
}

