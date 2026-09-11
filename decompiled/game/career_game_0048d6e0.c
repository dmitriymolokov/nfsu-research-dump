/* Decompiled from Speed.exe @ 0048d6e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_0048d6e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 local_110 [128];
  undefined4 local_90 [35];
  
  FUN_004834e0();
  param_1[0xb] = param_2;
  bVar7 = DAT_00735f5c == 0;
  *param_1 = &PTR_FUN_006c7ce0;
  param_1[0x24] = param_3;
  if (bVar7) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
  }
  puVar2 = &DAT_006fc430;
  puVar6 = local_90;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar2 = _malloc(0x30);
  uVar4 = DAT_006b6f70;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[9] = local_90[3];
    puVar2[10] = uVar4;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x2e) = 1;
  }
  param_1[0x20] = puVar2;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(local_90[1],DAT_006b6f70);
  }
  param_1[0x21] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(local_90[2],DAT_006b6f70);
  }
  param_1[0x22] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004830f0(DAT_006b6f70);
  }
  param_1[0x23] = uVar4;
  iVar5 = FUN_0047d680();
  if (iVar5 == 0) {
    iVar5 = FUN_0047d680();
  }
  FUN_0048dd00(local_110,iVar5,&DAT_006fc430);
  param_1[0x10] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  param_1[0x1f] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  FUN_0040bb20(param_1 + 0x10,local_110);
  FUN_0040bc10();
  uVar4 = param_1[0x22];
  uVar1 = param_1[0x21];
  FUN_00483e30();
  FUN_00483ea0(uVar1,0);
  FUN_00483fb0(uVar4,0);
  puVar2 = (undefined4 *)param_1[0x20];
  *puVar2 = puVar2[2];
  puVar2[1] = puVar2[3];
  *(undefined2 *)(puVar2 + 0xb) = 0;
  puVar2 = (undefined4 *)param_1[0x21];
  *puVar2 = puVar2[2];
  puVar2[1] = puVar2[3];
  *(undefined2 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = puVar2[0xe];
  puVar2[0xd] = puVar2[0xf];
  *(undefined2 *)(puVar2 + 0x17) = 0;
  puVar2[0x18] = puVar2[0x1a];
  puVar2[0x19] = puVar2[0x1b];
  *(undefined2 *)(puVar2 + 0x23) = 0;
  puVar2 = (undefined4 *)param_1[0x22];
  *puVar2 = puVar2[2];
  puVar2[1] = puVar2[3];
  *(undefined2 *)(puVar2 + 0xb) = 0;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  puVar2[0xc] = puVar2[0xe];
  puVar2[0xd] = puVar2[0xf];
  *(undefined2 *)(puVar2 + 0x23) = 0;
  puVar2[0x18] = puVar2[0x1a];
  puVar2[0x19] = puVar2[0x1b];
  return param_1;
}

