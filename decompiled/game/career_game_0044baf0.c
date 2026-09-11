/* Decompiled from Speed.exe @ 0044baf0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0044baf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  uVar3 = *(undefined4 *)(param_1 + 0x3c4);
  uVar4 = *(undefined4 *)(param_1 + 0x3c8);
  uVar5 = *(undefined4 *)(param_1 + 0x3cc);
  uVar6 = *(undefined4 *)(param_1 + 0x3d0);
  puVar1 = (undefined4 *)(param_1 + 0x3b8);
  uVar7 = *puVar1;
  uVar8 = *(undefined4 *)(param_1 + 0x3bc);
  uVar9 = *(undefined4 *)(param_1 + 0x3c0);
  iVar10 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar10 + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  cVar2 = *(char *)(iVar10 + 0x424);
  *puVar1 = param_2;
  *(undefined4 *)(param_1 + 0x3bc) = param_3;
  *(int *)(param_1 + 0x3c0) = (int)cVar2;
  if (*(int **)(param_1 + 0x3f8) == (int *)0x0) {
    FUN_0044f070();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x3f8) + 0x10))(param_1 + 0x2c);
  }
  *param_4 = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(param_1 + 0x3c4) = uVar3;
  *(undefined4 *)(param_1 + 0x3c8) = uVar4;
  *(undefined4 *)(param_1 + 0x3cc) = uVar5;
  *puVar1 = uVar7;
  *(undefined4 *)(param_1 + 0x3d0) = uVar6;
  *(undefined4 *)(param_1 + 0x3bc) = uVar8;
  *(undefined4 *)(param_1 + 0x3c0) = uVar9;
  return;
}

