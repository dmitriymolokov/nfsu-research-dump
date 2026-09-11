/* Decompiled from Speed.exe @ 00578f80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00578f80(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684cab;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005790e0();
  puVar1 = (undefined4 *)param_1[0x38];
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    param_1[0x38] = 0;
    piVar3 = puVar1 + 0x36;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      FUN_00579090();
      *DAT_0073b0e0 = puVar1;
      puVar4 = puVar1;
      puVar1[1] = DAT_0073b0e0;
      DAT_0073b0e0 = puVar4;
      *puVar1 = &DAT_0073b0dc;
    }
  }
  local_4 = 0xffffffff;
  FUN_00579480();
  ExceptionList = local_c;
  return;
}

