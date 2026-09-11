/* Decompiled from Speed.exe @ 00406f00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00406f00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8 [2];
  
  iVar4 = 0;
  iVar2 = 0;
  iVar3 = 0;
  local_8[0] = 0;
  local_8[1] = 0;
  if (DAT_007197a4 != 0) {
    piVar1 = &DAT_007187f0;
    local_c = DAT_007197a4;
    do {
      if (*piVar1 == param_2) {
        piVar1[-4] = DAT_006abe04;
        piVar1[-3] = DAT_006abe08;
        piVar1[-2] = DAT_006abe0c;
        piVar1[-1] = DAT_006abe10;
        *piVar1 = 0;
        piVar1[1] = 0;
      }
      if ((piVar1[-8] == *(int *)(param_1 + 0x23c)) && (iVar3 < 2)) {
        local_8[iVar3] = (int)(piVar1 + -8);
        iVar3 = iVar3 + 1;
        iVar2 = local_8[1];
        iVar4 = local_8[0];
      }
      piVar1 = piVar1 + 10;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  if (*(int *)(param_1 + 0x240) == 1) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x24) = 0x20;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_1 + 0x11c);
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1 + 0x120);
      *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(param_1 + 0x124);
      *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x128);
      *(int *)(iVar2 + 0x20) = param_2;
    }
  }
  else {
    if (iVar4 == 0) goto LAB_00407073;
    *(undefined4 *)(iVar4 + 0x24) = 0x20;
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x120);
    *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_1 + 0x124);
    *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(param_1 + 0x128);
    *(int *)(iVar4 + 0x20) = param_2;
  }
  if ((iVar4 != 0) && (iVar2 != 0)) {
    if (*(int *)(iVar4 + 0x20) == 0) {
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
    }
    if (*(int *)(iVar4 + 0x20) == *(int *)(iVar2 + 0x20)) {
      *(int *)(iVar2 + 0x10) = DAT_006abe04;
      *(int *)(iVar2 + 0x14) = DAT_006abe08;
      *(int *)(iVar2 + 0x18) = DAT_006abe0c;
      iVar4 = DAT_006abe10;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(int *)(iVar2 + 0x1c) = iVar4;
      *(undefined4 *)(iVar2 + 0x24) = 0;
    }
  }
LAB_00407073:
  *(undefined4 *)(param_1 + 0x23c) = 0;
  DAT_00736508 = 0;
  FUN_00407760(0);
  FUN_00407760(1);
  return;
}

