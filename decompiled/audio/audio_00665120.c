/* Decompiled from Speed.exe @ 00665120 */
/* Module: Audio */
/* Ghidra DecompileAll */


uint FUN_00665120(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = uVar1 - 1 & uVar1;
  *(uint *)(param_1 + 8) = uVar2;
  return uVar2 ^ uVar1;
}

