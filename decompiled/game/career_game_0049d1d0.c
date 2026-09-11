/* Decompiled from Speed.exe @ 0049d1d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049d1d0(int param_1)

{
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 uVar1;
  int extraout_EDX_04;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x80);
  iVar2 = 10;
  do {
    iVar3 = piVar4[-10];
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar1);
          uVar1 = *(undefined4 *)(extraout_EDX + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = *piVar4;
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar1);
          uVar1 = *(undefined4 *)(extraout_EDX_00 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = piVar4[10];
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar1);
          uVar1 = *(undefined4 *)(extraout_EDX_01 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar4 = (int *)(param_1 + 0x128);
  iVar2 = 5;
  do {
    iVar3 = *piVar4;
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar1);
          uVar1 = *(undefined4 *)(extraout_EDX_02 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    piVar4 = piVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x120);
  if ((iVar2 != 0) &&
     (*(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar2 + 0x18) == 5)) {
    uVar1 = *(undefined4 *)(iVar2 + 0x60);
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (0 < iVar2) {
      do {
        FUN_004f6970(uVar1);
        uVar1 = *(undefined4 *)(extraout_EDX_03 + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x124);
  if ((iVar2 != 0) &&
     (*(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar2 + 0x18) == 5)) {
    uVar1 = *(undefined4 *)(iVar2 + 0x60);
    iVar2 = *(int *)(iVar2 + 0x5c);
    if (0 < iVar2) {
      do {
        FUN_004f6970(uVar1);
        uVar1 = *(undefined4 *)(extraout_EDX_04 + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

