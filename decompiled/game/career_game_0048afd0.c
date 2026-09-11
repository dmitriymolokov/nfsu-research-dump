/* Decompiled from Speed.exe @ 0048afd0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0048afd0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char param_5,undefined1 param_6,undefined1 param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_f0 [4];
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_0068602b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004834e0();
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  local_14 = 0;
  *(undefined1 *)((int)param_1 + 0x47) = param_7;
  uVar4 = DAT_006b6e28;
  param_1[0xb] = param_3;
  *(bool *)(param_1 + 0x11) = param_5 == '\0';
  param_1[0x10] = param_4;
  *param_1 = &PTR_FUN_006c7e58;
  *(undefined1 *)((int)param_1 + 0x45) = param_6;
  param_1[0x13] = DAT_0073ad34;
  *(undefined1 *)(param_1 + 0x12) = 1;
  FUN_0048ead0(uVar4);
  puVar2 = _malloc(0x30);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[9] = local_e4;
    uVar4 = DAT_006b6e24;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[10] = uVar4;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x2e) = 1;
  }
  param_1[0xc] = puVar2;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(local_ec,DAT_006b6e24);
  }
  param_1[0xd] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(local_e8,DAT_006b6e24);
  }
  param_1[0xe] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004830f0(DAT_006b6e24);
  }
  param_1[0xf] = uVar4;
  pvVar3 = _malloc(0x30);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0048eb70();
  }
  param_1[0x14] = uVar4;
  iVar5 = FUN_0047d680();
  if (iVar5 == 0) {
    iVar5 = FUN_0047d680();
  }
  FUN_0048b8c0(iVar5,local_f0);
  FUN_0040bc10();
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    local_70 = -local_70;
    local_6c = -local_6c;
    local_60 = -local_70;
    local_5c = -local_6c;
    local_50 = local_60;
    local_4c = local_5c;
    local_40 = local_60;
    local_3c = local_5c;
  }
  local_2c = param_1[0xd];
  iVar5 = param_1[0xb];
  local_24 = param_1[0xe];
  local_28 = iVar5 + 0x70;
  FUN_00483e30();
  FUN_00483ea0(local_2c,iVar5 + 0x70);
  FUN_00483fb0(local_24,local_28);
  pfVar1 = (float *)param_1[0xd];
  if (_DAT_006b6e20 <
      SQRT((*pfVar1 - pfVar1[2]) * (*pfVar1 - pfVar1[2]) +
           (pfVar1[0xc] - pfVar1[0xe]) * (pfVar1[0xc] - pfVar1[0xe]) +
           (pfVar1[0x18] - pfVar1[0x1a]) * (pfVar1[0x18] - pfVar1[0x1a]))) {
    puVar2 = (undefined4 *)param_1[0xc];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 0xb) = 0;
    puVar2 = (undefined4 *)param_1[0xd];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 0xb) = 0;
    puVar2[0xc] = puVar2[0xe];
    puVar2[0xd] = puVar2[0xf];
    *(undefined2 *)(puVar2 + 0x17) = 0;
    puVar2[0x18] = puVar2[0x1a];
    puVar2[0x19] = puVar2[0x1b];
    *(undefined2 *)(puVar2 + 0x23) = 0;
    puVar2 = (undefined4 *)param_1[0xe];
    *puVar2 = puVar2[2];
    puVar2[1] = puVar2[3];
    *(undefined2 *)(puVar2 + 0xb) = 0;
    puVar2[0xc] = puVar2[0xe];
    puVar2[0xd] = puVar2[0xf];
    *(undefined2 *)(puVar2 + 0x17) = 0;
    puVar2[0x18] = puVar2[0x1a];
    puVar2[0x19] = puVar2[0x1b];
    *(undefined2 *)(puVar2 + 0x23) = 0;
  }
  ExceptionList = local_1c;
  return param_1;
}

