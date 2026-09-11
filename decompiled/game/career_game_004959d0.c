/* Decompiled from Speed.exe @ 004959d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004959d0(int param_1)

{
  char in_AL;
  int iVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  undefined4 uVar2;
  int extraout_EDX_06;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = param_1;
  *(char *)(param_1 + 0xd8) = in_AL;
  if (in_AL == '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x50);
    iVar5 = 4;
    do {
      FUN_004f6910(puVar3[-4]);
      FUN_004f6910(*puVar3);
      FUN_004f6910(puVar3[4]);
      FUN_004f6910(puVar3[8]);
      FUN_004f6910(puVar3[0xc]);
      FUN_004f6910(puVar3[0x10]);
      FUN_004f6910(puVar3[0x14]);
      FUN_004f6910(puVar3[0x18]);
      FUN_004f6910(puVar3[0x1c]);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
  }
  piVar4 = (int *)(param_1 + 0xd0);
  iVar1 = 0;
  param_1 = 0;
  if (0 < *piVar4) {
    piVar4 = (int *)(iVar5 + 0x50);
    do {
      iVar1 = piVar4[-4];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = *piVar4;
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_00 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = piVar4[4];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_01 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = piVar4[0xc];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_02 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = piVar4[0x10];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_03 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = piVar4[0x14];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_04 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = piVar4[0x18];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_05 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = piVar4[0x1c];
      if ((iVar1 != 0) &&
         (*(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) & 0xfffffffe | 0x400000,
         *(int *)(iVar1 + 0x18) == 5)) {
        uVar2 = *(undefined4 *)(iVar1 + 0x60);
        iVar1 = *(int *)(iVar1 + 0x5c);
        if (0 < iVar1) {
          do {
            FUN_004f6970(uVar2);
            uVar2 = *(undefined4 *)(extraout_EDX_06 + 4);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
      iVar1 = param_1 + 1;
      piVar4 = piVar4 + 1;
      param_1 = iVar1;
    } while (iVar1 < *(int *)(iVar5 + 0xd0));
    if (3 < iVar1) goto LAB_00495c42;
  }
  puVar3 = (undefined4 *)(iVar5 + 0x50 + iVar1 * 4);
  iVar1 = 4 - iVar1;
  do {
    FUN_004f6910(puVar3[-4]);
    FUN_004f6910(*puVar3);
    FUN_004f6910(puVar3[4]);
    FUN_004f6910(puVar3[0xc]);
    FUN_004f6910(puVar3[0x10]);
    FUN_004f6910(puVar3[0x14]);
    FUN_004f6910(puVar3[0x18]);
    FUN_004f6910(puVar3[0x1c]);
    puVar3 = puVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
LAB_00495c42:
  iVar1 = 0;
  if (*(int *)(iVar5 + 0xd0) < 1) {
    return;
  }
  puVar3 = (undefined4 *)(iVar5 + 0x70);
  do {
    FUN_004f6910(*puVar3);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 < *(int *)(iVar5 + 0xd0));
  return;
}

