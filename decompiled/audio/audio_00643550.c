/* Decompiled from Speed.exe @ 00643550 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 FUN_00643550(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  
  if (((uint)param_1 & 7) != 0) {
    if ((((uint)param_1 & 1) != 0) && (0 < (int)param_3)) {
      uVar7 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar7;
      param_1 = (undefined8 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    }
    if ((((uint)param_1 & 2) != 0) && (1 < (int)param_3)) {
      uVar8 = *(undefined2 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 2);
      *(undefined2 *)param_1 = uVar8;
      param_1 = (undefined8 *)((int)param_1 + 2);
      param_3 = param_3 - 2;
    }
    if ((((uint)param_1 & 4) != 0) && (3 < (int)param_3)) {
      uVar9 = *(undefined4 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *(undefined4 *)param_1 = uVar9;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_3 = param_3 - 4;
    }
  }
  while (-1 < (int)(param_3 - 0x80)) {
    uVar4 = param_2[4];
    uVar5 = param_2[8];
    uVar6 = param_2[0xc];
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[4] = uVar4;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar4 = param_2[9];
    uVar1 = param_2[10];
    uVar2 = param_2[0xb];
    param_1[8] = uVar5;
    param_1[9] = uVar4;
    param_1[10] = uVar1;
    param_1[0xb] = uVar2;
    uVar4 = param_2[0xd];
    uVar5 = param_2[0xe];
    uVar1 = param_2[0xf];
    param_1[0xc] = uVar6;
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar5;
    param_1[0xf] = uVar1;
    param_2 = param_2 + 0x10;
    param_1 = param_1 + 0x10;
    param_3 = param_3 - 0x80;
  }
  while (-1 < (int)(param_3 - 0x20)) {
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_2 = param_2 + 4;
    param_1 = param_1 + 4;
    param_3 = param_3 - 0x20;
  }
  while (-1 < (int)(param_3 - 8)) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 - 8;
  }
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (3 < param_3) {
    uVar9 = *(undefined4 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 4);
    *(undefined4 *)param_1 = uVar9;
    param_1 = (undefined8 *)((int)param_1 + 4);
    param_3 = param_3 - 4;
  }
  if (1 < param_3) {
    uVar8 = *(undefined2 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 2);
    *(undefined2 *)param_1 = uVar8;
    param_1 = (undefined8 *)((int)param_1 + 2);
    param_3 = param_3 - 2;
  }
  if (param_3 != 0) {
    uVar7 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar7;
    param_1 = (undefined8 *)((int)param_1 + 1);
  }
  return CONCAT44(param_2,param_1);
}

