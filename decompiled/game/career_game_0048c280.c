/* Decompiled from Speed.exe @ 0048c280 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * __fastcall FUN_0048c280(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  bool bVar5;
  
  FUN_004834e0();
  bVar5 = DAT_00735f5c == 0;
  *param_1 = &PTR_FUN_006c7ea8;
  if (bVar5) {
    *(undefined4 *)(param_1[7] + 0x280) = 0;
  }
  puVar2 = _malloc(0x30);
  uVar1 = DAT_006b6f58;
  uVar4 = DAT_006b6e24;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[9] = uVar1;
    puVar2[10] = uVar4;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x2e) = 1;
  }
  param_1[0xb] = puVar2;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(DAT_006b6f5c,DAT_006b6e24);
  }
  param_1[0xc] = uVar4;
  pvVar3 = _malloc(0x90);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0042ad10(DAT_006b6f60,DAT_006b6e24);
  }
  uVar1 = param_1[0xc];
  param_1[0xd] = uVar4;
  FUN_00483e30();
  FUN_00483ea0(uVar1,0);
  FUN_00483fb0(uVar4,0);
  return param_1;
}

