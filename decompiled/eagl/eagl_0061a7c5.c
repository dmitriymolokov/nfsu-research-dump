/* Decompiled from Speed.exe @ 0061a7c5 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_0061a7c5(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = *(uint **)(param_1 + 0x98);
  uVar2 = puVar1[2];
  uVar3 = *puVar1 & 0xffffff;
  FUN_0061a3fb(0x5a,puVar1[4],puVar1[3],uVar2,uVar2 + uVar3 * 4,uVar2 + uVar3 * 8,uVar3,0,0,0);
  return;
}

