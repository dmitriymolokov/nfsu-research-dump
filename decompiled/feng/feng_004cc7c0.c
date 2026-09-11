/* Decompiled from Speed.exe @ 004cc7c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004cc7c0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_4;
  
  puVar2 = param_2;
  puVar4 = param_1;
  for (iVar1 = 0xd2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = (int)param_2 - (int)param_1;
  param_1[0xd2] = param_2[0xd2];
  puVar2 = param_1 + 0xd3;
  iVar3 = 0x100;
  do {
    *(undefined1 *)puVar2 = *(undefined1 *)(iVar1 + (int)puVar2);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x114;
  iVar3 = (int)param_2 + (0x44c - (int)(param_1 + 0x113));
  local_4 = 900;
  do {
    *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
    puVar2 = puVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  puVar2 = param_1 + 0x498;
  local_4 = 0x44;
  do {
    *puVar2 = *(undefined4 *)((int)puVar2 + iVar3);
    puVar2 = puVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined1 *)(param_1 + 0x4dc) = *(undefined1 *)(param_2 + 0x4dc);
  *(undefined1 *)((int)param_1 + 0x1371) = *(undefined1 *)((int)param_2 + 0x1371);
  param_1[0x4dd] = param_2[0x4dd];
  param_1[0x4de] = param_2[0x4de];
  param_1[0x4df] = param_2[0x4df];
  param_1[0x4e0] = param_2[0x4e0];
  *(undefined2 *)(param_1 + 0x4e1) = *(undefined2 *)(param_2 + 0x4e1);
  *(undefined1 *)((int)param_1 + 0x1386) = *(undefined1 *)((int)param_2 + 0x1386);
  *(undefined1 *)((int)param_1 + 4999) = *(undefined1 *)((int)param_2 + 4999);
  puVar2 = param_2 + 0x4e2;
  puVar4 = param_1 + 0x4e2;
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x4e9] = param_2[0x4e9];
  puVar2 = param_1 + 0x4ea;
  iVar3 = 0x1b;
  do {
    FUN_004cc970((int)puVar2 + iVar1);
    puVar2 = puVar2 + 0x115;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x2221;
  iVar3 = 0x1b;
  do {
    *(undefined1 *)puVar2 = *(undefined1 *)((int)puVar2 + iVar1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined1 *)((int)param_1 + 0x889f) = *(undefined1 *)((int)param_2 + 0x889f);
  puVar2 = param_1 + 0x2228;
  iVar3 = 0x10;
  do {
    *(undefined1 *)puVar2 = *(undefined1 *)((int)puVar2 + iVar1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x222c] = param_2[0x222c];
  return param_1;
}

