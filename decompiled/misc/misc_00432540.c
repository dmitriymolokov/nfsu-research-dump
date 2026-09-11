/* Decompiled from Speed.exe @ 00432540 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 * FUN_00432540(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  uVar2 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  iVar5 = 4;
  puVar3 = param_2 + 6;
  puVar4 = param_1 + 8;
  do {
    uVar1 = puVar3[-1];
    uVar2 = *puVar3;
    iVar5 = iVar5 + -1;
    puVar4[-4] = puVar3[-2];
    puVar4[-3] = uVar1;
    *(undefined4 *)((int)param_1 + (-0x30 - (int)param_2) + (int)(puVar3 + 0xc)) = uVar2;
    *puVar4 = puVar3[2];
    puVar4[1] = puVar3[3];
    puVar4[2] = puVar3[4];
    puVar4[3] = puVar3[5];
    puVar4[4] = puVar3[6];
    puVar4[5] = puVar3[7];
    puVar4[6] = puVar3[8];
    puVar4[7] = puVar3[9];
    puVar3 = puVar3 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (iVar5 != 0);
  puVar3 = param_2 + 0x34;
  puVar4 = param_1 + 0x34;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_2 + 0x3c;
  puVar4 = param_1 + 0x3c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = param_2[0x47];
  FUN_00401cd0();
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  param_1[0x5a] = param_2[0x5a];
  param_1[0x5b] = param_2[0x5b];
  puVar3 = param_2 + 0x5c;
  puVar4 = param_1 + 0x5c;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_2 + 100;
  puVar4 = param_1 + 100;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_2 + 0x6c;
  puVar4 = param_1 + 0x6c;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = param_2 + 0x7c;
  puVar4 = param_1 + 0x7c;
  for (iVar5 = 0x1c; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  param_1[0x9a] = param_2[0x9a];
  param_1[0x9b] = param_2[0x9b];
  puVar3 = param_2 + 0x9c;
  puVar4 = param_1 + 0x9c;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0xa8] = param_2[0xa8];
  param_1[0xa9] = param_2[0xa9];
  param_1[0xaa] = param_2[0xaa];
  param_1[0xab] = param_2[0xab];
  return param_1;
}

