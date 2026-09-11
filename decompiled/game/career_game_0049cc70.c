/* Decompiled from Speed.exe @ 0049cc70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0049cc70(int param_1,undefined4 param_2)

{
  int iVar1;
  int extraout_EDX;
  undefined4 uVar2;
  int extraout_EDX_00;
  int iVar3;
  int *piVar4;
  
  iVar1 = param_1;
  FUN_0049d3e0(param_1);
  FUN_004f68a0(&PTR_LAB_006c7804,*(undefined4 *)(param_1 + 0x13c));
  FUN_0049d370();
  piVar4 = (int *)(param_1 + 0xf8);
  param_1 = 5;
  do {
    iVar3 = piVar4[-10];
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    iVar3 = *piVar4;
    if ((iVar3 != 0) &&
       (*(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) & 0xfffffffe | 0x400000,
       *(int *)(iVar3 + 0x18) == 5)) {
      uVar2 = *(undefined4 *)(iVar3 + 0x60);
      iVar3 = *(int *)(iVar3 + 0x5c);
      if (0 < iVar3) {
        do {
          FUN_004f6970(uVar2);
          uVar2 = *(undefined4 *)(extraout_EDX_00 + 4);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    piVar4 = piVar4 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  FUN_0049d4c0(iVar1,param_2);
  FUN_0049d5b0(iVar1);
  FUN_0049db30(param_2);
  FUN_0049de00(param_2);
  FUN_0049de80(param_2);
  FUN_00497a00();
  return;
}

