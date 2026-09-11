/* Decompiled from Speed.exe @ 005825e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005825e0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[5] = 1;
  if (param_1[3] != 0) {
    if (param_1[1] != *param_1) goto LAB_0058267b;
    if (param_1[3] != 0) {
      *param_1 = *param_1 << 1;
    }
  }
  iVar5 = *param_1;
  puVar3 = _malloc(iVar5 << 4);
  local_4 = 0;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_004010a0(puVar3,0x10,iVar5,FUN_004ad8d0);
    puVar4 = puVar3;
  }
  puVar3 = (undefined4 *)param_1[3];
  puVar6 = puVar4;
  for (iVar5 = (param_1[1] & 0xfffffffU) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    _free((void *)param_1[4]);
  }
  param_1[3] = (int)puVar4;
  param_1[4] = (int)puVar4;
LAB_0058267b:
  puVar4 = (undefined4 *)(param_1[1] * 0x10 + param_1[3]);
  param_1[1] = param_1[1] + 1;
  uVar1 = param_2[2];
  uVar2 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar2;
  puVar4[2] = uVar1;
  ExceptionList = local_c;
  return;
}

