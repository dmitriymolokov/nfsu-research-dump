/* Decompiled from Speed.exe @ 005739c0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int __fastcall FUN_005739c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685668;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)param_1 = param_1;
  *(int *)(param_1 + 4) = param_1;
  puVar3 = (undefined4 *)(param_1 + 8);
  local_4 = 0;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  local_14 = 4;
  do {
    FUN_004010a0(puVar3,8,4,FUN_004ad8d0);
    puVar2[5] = puVar3;
    puVar2[6] = 4;
    *puVar3 = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0x43000000;
    *puVar2 = 0x43000000;
    puVar2[1] = 0x43000000;
    puVar2[2] = 0x43000000;
    puVar2[3] = 0x437f0000;
    puVar2[4] = 0x437f0000;
    *(undefined1 *)(puVar2 + 7) = 0;
    puVar3 = puVar3 + 0xb;
    puVar2 = puVar2 + 0xb;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  puVar3 = (undefined4 *)(param_1 + 0xb8);
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)puVar3 = 0;
  ExceptionList = local_c;
  return param_1;
}

