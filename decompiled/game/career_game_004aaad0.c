/* Decompiled from Speed.exe @ 004aaad0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004aaad0(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar1 = (undefined4 *)(param_3 + (int)param_1);
  if (param_1 + 1 <= puVar1) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  if ((undefined4 *)((int)param_1 + 0xd) <= puVar1) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    param_1 = (undefined4 *)((int)param_1 + 0xd);
  }
  puVar5 = param_1;
  if (param_1 + 10 <= puVar1) {
    puVar3 = param_2 + 4;
    puVar4 = param_1;
    for (iVar2 = 10; puVar5 = param_1 + 10, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  puVar3 = puVar5;
  if (puVar5 + 0xf <= puVar1) {
    puVar4 = param_2 + 0xe;
    puVar6 = puVar5;
    for (iVar2 = 0xf; puVar3 = puVar5 + 0xf, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar5 = puVar3;
  if (puVar3 + 7 <= puVar1) {
    puVar4 = param_2 + 0x1d;
    puVar6 = puVar3;
    for (iVar2 = 7; puVar5 = puVar3 + 7, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar3 = puVar5;
  if (puVar5 + 7 <= puVar1) {
    puVar4 = param_2 + 0x24;
    puVar6 = puVar5;
    for (iVar2 = 7; puVar3 = puVar5 + 7, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if (puVar3 + 2 <= puVar1) {
    *puVar3 = param_2[0x2b];
    puVar3[1] = param_2[0x2c];
    puVar3 = puVar3 + 2;
  }
  if (puVar3 + 2 <= puVar1) {
    *puVar3 = param_2[0x2d];
    puVar3[1] = param_2[0x2e];
    puVar3 = puVar3 + 2;
  }
  puVar5 = puVar3;
  if (puVar3 + 0x34 <= puVar1) {
    puVar4 = param_2 + 0xa5;
    puVar6 = puVar3;
    for (iVar2 = 0x34; puVar5 = puVar3 + 0x34, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar3 = puVar5;
  if (puVar5 + 8 <= puVar1) {
    puVar4 = param_2 + 0x2f;
    puVar6 = puVar5;
    for (iVar2 = 8; puVar3 = puVar5 + 8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar5 = puVar3;
  if (puVar3 + 8 <= puVar1) {
    puVar4 = param_2 + 0x37;
    puVar6 = puVar3;
    for (iVar2 = 8; puVar5 = puVar3 + 8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar3 = puVar5;
  if (puVar5 + 8 <= puVar1) {
    puVar4 = param_2 + 0x3f;
    puVar6 = puVar5;
    for (iVar2 = 8; puVar3 = puVar5 + 8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar5 = puVar3;
  if (puVar3 + 9 <= puVar1) {
    puVar4 = param_2 + 0x47;
    puVar6 = puVar3;
    for (iVar2 = 9; puVar5 = puVar3 + 9, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar3 = puVar5;
  if (puVar5 + 0x21 <= puVar1) {
    puVar4 = param_2 + 0x50;
    puVar6 = puVar5;
    for (iVar2 = 0x21; puVar3 = puVar5 + 0x21, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar5 = puVar3;
  if (puVar3 + 0xb <= puVar1) {
    puVar4 = param_2 + 0x71;
    puVar6 = puVar3;
    for (iVar2 = 0xb; puVar5 = puVar3 + 0xb, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  puVar3 = puVar5;
  if (puVar5 + 8 <= puVar1) {
    puVar4 = param_2 + 0x7c;
    puVar6 = puVar5;
    for (iVar2 = 8; puVar3 = puVar5 + 8, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  if (puVar3 + 1 <= puVar1) {
    *puVar3 = param_2[0x3bbb];
  }
  return;
}

