/* Decompiled from Speed.exe @ 004323f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 * FUN_004323f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_2 + 5);
  *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)((int)param_2 + 6);
  *(undefined1 *)((int)param_1 + 7) = *(undefined1 *)((int)param_2 + 7);
  puVar3 = param_2 + 2;
  puVar4 = param_1 + 2;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00432540(param_1 + 0x18,param_2 + 0x18);
  FUN_00431d60();
  *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_2 + 0x109);
  *(undefined1 *)((int)param_1 + 0x425) = *(undefined1 *)((int)param_2 + 0x425);
  *(undefined1 *)((int)param_1 + 0x426) = *(undefined1 *)((int)param_2 + 0x426);
  *(undefined1 *)((int)param_1 + 0x427) = *(undefined1 *)((int)param_2 + 0x427);
  param_1[0x10a] = param_2[0x10a];
  param_1[0x10b] = param_2[0x10b];
  param_1[0x10c] = param_2[0x10c];
  param_1[0x10d] = param_2[0x10d];
  param_1[0x10e] = param_2[0x10e];
  param_1[0x10f] = param_2[0x10f];
  param_1[0x110] = param_2[0x110];
  param_1[0x111] = param_2[0x111];
  param_1[0x112] = param_2[0x112];
  puVar3 = param_1 + 0x113;
  iVar1 = (int)param_2 - (int)param_1;
  iVar2 = 0x78;
  do {
    *puVar3 = *(undefined4 *)(iVar1 + (int)puVar3);
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = param_1 + 0x18b;
  iVar2 = 0x78;
  do {
    *(undefined1 *)puVar3 = *(undefined1 *)((int)puVar3 + iVar1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar3 = param_1 + 0x1a9;
  iVar2 = 0x78;
  do {
    *(undefined1 *)puVar3 = *(undefined1 *)((int)puVar3 + iVar1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x1c7] = param_2[0x1c7];
  return param_1;
}

