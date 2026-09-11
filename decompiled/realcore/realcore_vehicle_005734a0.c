/* Decompiled from Speed.exe @ 005734a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005734a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  char in_AL;
  undefined4 uVar7;
  int iVar8;
  
  if (in_AL != '\0') {
    if ((*(char *)(param_1 + 8) != '\0') && (*(int *)(param_1 + 0xc) == 0)) {
      FUN_00572d20();
      FUN_00572f20("REPLAY_MANAGER_STATE");
      uVar7 = FUN_00572f20("DEMO_MODE_SNAPSHOT");
      *(undefined4 *)(param_1 + 0xc) = uVar7;
    }
    iVar8 = DAT_007345d0;
    if (((*(char *)(param_1 + 9) != '\0') &&
        (piVar1 = *(int **)(param_1 + 0x14), piVar1 != (int *)0x0)) &&
       (DAT_0073ad34 < piVar1[10] + 12000)) {
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      iVar4 = piVar1[0xb];
      iVar5 = piVar1[0xd];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      puVar6 = *(undefined4 **)(iVar8 + 0x6c);
      *puVar6 = piVar1;
      *(int **)(iVar8 + 0x6c) = piVar1;
      piVar1[1] = (int)puVar6;
      *piVar1 = iVar8 + 0x68;
      iVar8 = FUN_00572f20("DEMO_MODE_SNAPSHOT");
      *(int *)(param_1 + 0x14) = iVar8;
      if (iVar8 != 0) {
        *(int *)(iVar8 + 0x2c) = iVar4;
        *(int *)(iVar8 + 0x34) = iVar5;
      }
      FUN_00572bd0();
    }
  }
  uVar7 = DAT_006f08a4;
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 != 0) {
    *(int *)(iVar8 + 0x2c) = DAT_0073ad34;
    *(undefined4 *)(iVar8 + 0x34) = uVar7;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_005737f0();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_005735a0();
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

