/* Decompiled from Speed.exe @ 0049cee0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049cee0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  undefined4 uVar2;
  int extraout_EDX_04;
  int *piVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FUN_0049d3e0(param_1);
  FUN_004f68a0(&PTR_LAB_006c7804,*(undefined4 *)(param_1 + 0x13c));
  piVar3 = (int *)(param_1 + 0xf8);
  iVar4 = 5;
  do {
    iVar5 = piVar3[-10];
    if ((iVar5 != 0) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar5 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar5 + 0x60);
      iVar5 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar5) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX + 4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    iVar5 = *piVar3;
    if ((iVar5 != 0) &&
       (*(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar5 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar5 + 0x60);
      iVar5 = *(int *)(iVar5 + 0x5c);
      if (0 < iVar5) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX_00 + 4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_0049d1d0(param_1);
  FUN_0049d760(param_1);
  iVar5 = 0;
  iVar4 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if (*(short *)(iVar4 + 0x6c) == DAT_0078a2f0) {
        if ((*(byte *)(iVar4 + 0x74) & 4) != 0) {
          FUN_0049d4c0(param_1,param_2);
          FUN_0049d5b0(param_1);
          FUN_0049db30(param_2);
          FUN_0049dc20(param_2);
          FUN_0049dd10(param_2);
          goto LAB_0049d176;
        }
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xfc;
    } while (iVar5 < DAT_0073616c);
  }
  iVar4 = *(int *)(param_1 + 0xe4);
  if ((iVar4 != 0) &&
     (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar4 + 0x18) == 5)) {
    uVar2 = *(undefined4 *)(iVar4 + 0x60);
    iVar4 = *(int *)(iVar4 + 0x5c);
    if (0 < iVar4) {
      do {
        FUN_004f6970(uVar2);
        uVar2 = *(undefined4 *)(extraout_EDX_01 + 4);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = *(int *)(param_1 + 0x10c);
  if ((iVar4 != 0) &&
     (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar4 + 0x18) == 5)) {
    uVar2 = *(undefined4 *)(iVar4 + 0x60);
    iVar4 = *(int *)(iVar4 + 0x5c);
    if (0 < iVar4) {
      do {
        FUN_004f6970(uVar2);
        uVar2 = *(undefined4 *)(extraout_EDX_02 + 4);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = *(int *)(param_1 + 0xe8);
  if ((iVar4 != 0) &&
     (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar4 + 0x18) == 5)) {
    uVar2 = *(undefined4 *)(iVar4 + 0x60);
    iVar4 = *(int *)(iVar4 + 0x5c);
    if (0 < iVar4) {
      do {
        FUN_004f6970(uVar2);
        uVar2 = *(undefined4 *)(extraout_EDX_03 + 4);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  iVar4 = *(int *)(param_1 + 0x110);
  if ((iVar4 != 0) &&
     (*(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(iVar4 + 0x18) == 5)) {
    uVar2 = *(undefined4 *)(iVar4 + 0x60);
    iVar4 = *(int *)(iVar4 + 0x5c);
    if (0 < iVar4) {
      do {
        FUN_004f6970(uVar2);
        uVar2 = *(undefined4 *)(extraout_EDX_04 + 4);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_0049d4c0(param_1,param_2);
  FUN_0049d5b0(param_1);
  FUN_0049da50(param_1,param_2);
  FUN_0049db30(param_2);
  FUN_0049dc20(param_2);
  FUN_0049dd10(param_2);
  iVar4 = *(int *)(param_1 + 0xe8);
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x400000;
    puVar1 = DAT_00735710;
    bVar6 = DAT_00735710 != (undefined4 *)0x0;
    *(undefined4 *)(iVar4 + 0x5c) = 0xadbfd917;
    if (bVar6) {
      (**(code **)*puVar1)(iVar4);
    }
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffd | 0x400000;
  }
  FUN_004f68a0(&PTR_LAB_006c7968,*(undefined4 *)(&DAT_00777c1c + *(char *)(param_2 + 10) * 0x15c));
LAB_0049d176:
  FUN_00497a00();
  return;
}

