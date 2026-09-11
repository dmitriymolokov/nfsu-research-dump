/* Decompiled from Speed.exe @ 00481160 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481160(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fStack_34;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = *(int *)(param_1 + 0xcf8);
  *(undefined4 *)(iVar2 + 0x808) = 0;
  FUN_00443c90(&DAT_007372b0,param_2,0);
  local_1c = *(undefined4 *)(iVar2 + 0x804);
  local_20 = *(undefined4 *)(iVar2 + 0x800);
  local_18 = *(undefined4 *)(iVar2 + 0x68);
  uVar7 = FUN_00564db0(*(undefined4 *)(iVar2 + 0x818),*(undefined4 *)(iVar2 + 0x81c));
  fVar1 = *(float *)(iVar2 + 100);
  fVar3 = *(float *)(iVar2 + 0x60);
  FUN_00427c50(&local_20,0,uVar7);
  FUN_00443a10(&DAT_007372b0,(float *)(iVar2 + 0x60));
  (**(code **)(**(int **)(iVar2 + 0x2c) + 0x2c))(1);
  (**(code **)(**(int **)(iVar2 + 0x2c) + 0x30))();
  *(undefined4 *)(iVar2 + 0x884) = 0;
  FUN_004278d0();
  fVar5 = _DAT_006cc7bc / DAT_0073ad38;
  fVar6 = (*(float *)(iVar2 + 0x60) - fStack_34) * fVar5;
  fVar3 = (*(float *)(iVar2 + 100) - fVar3) * fVar5;
  iVar4 = *(int *)(param_1 + 0xcf8);
  fVar5 = (*(float *)(iVar2 + 0x68) - fVar1) * fVar5;
  *(float *)(iVar4 + 0x70) = fVar6;
  *(float *)(iVar4 + 0x74) = fVar3;
  *(float *)(iVar4 + 0x78) = fVar5;
  *(undefined1 *)(iVar4 + 0x460) = 0;
  *(float *)(iVar4 + 0x3d4) = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar5 * fVar5);
  return;
}

