/* Decompiled from Speed.exe @ 00643440 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 FUN_00643440(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (((uint)param_1 & 0x1f) != 0) {
    if ((((uint)param_1 & 1) != 0) && (0 < (int)param_3)) {
      uVar2 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar2;
      param_1 = (undefined8 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    }
    if ((((uint)param_1 & 2) != 0) && (1 < (int)param_3)) {
      uVar3 = *(undefined2 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 2);
      *(undefined2 *)param_1 = uVar3;
      param_1 = (undefined8 *)((int)param_1 + 2);
      param_3 = param_3 - 2;
    }
    if ((((uint)param_1 & 4) != 0) && (3 < (int)param_3)) {
      uVar4 = *(undefined4 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *(undefined4 *)param_1 = uVar4;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_3 = param_3 - 4;
    }
    if ((((uint)param_1 & 8) != 0) && (7 < (int)param_3)) {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      param_3 = param_3 - 8;
    }
    if ((((uint)param_1 & 0x10) != 0) && (0xf < (int)param_3)) {
      uVar4 = *(undefined4 *)param_2;
      uVar5 = *(undefined4 *)((int)param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 1);
      uVar7 = *(undefined4 *)((int)param_2 + 0xc);
      param_2 = param_2 + 2;
      *(undefined4 *)param_1 = uVar4;
      *(undefined4 *)((int)param_1 + 4) = uVar5;
      *(undefined4 *)(param_1 + 1) = uVar6;
      *(undefined4 *)((int)param_1 + 0xc) = uVar7;
      param_1 = param_1 + 2;
      param_3 = param_3 - 0x10;
    }
  }
  while (-1 < (int)(param_3 - 0x20)) {
    uVar4 = *(undefined4 *)((int)param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined4 *)((int)param_2 + 0xc);
    uVar7 = *(undefined4 *)(param_2 + 2);
    uVar8 = *(undefined4 *)((int)param_2 + 0x14);
    uVar9 = *(undefined4 *)(param_2 + 3);
    uVar10 = *(undefined4 *)((int)param_2 + 0x1c);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)((int)param_1 + 4) = uVar4;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined4 *)((int)param_1 + 0xc) = uVar6;
    *(undefined4 *)(param_1 + 2) = uVar7;
    *(undefined4 *)((int)param_1 + 0x14) = uVar8;
    *(undefined4 *)(param_1 + 3) = uVar9;
    *(undefined4 *)((int)param_1 + 0x1c) = uVar10;
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
    uVar4 = *(undefined4 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 4);
    *(undefined4 *)param_1 = uVar4;
    param_1 = (undefined8 *)((int)param_1 + 4);
    param_3 = param_3 - 4;
  }
  if (1 < param_3) {
    uVar3 = *(undefined2 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 2);
    *(undefined2 *)param_1 = uVar3;
    param_1 = (undefined8 *)((int)param_1 + 2);
    param_3 = param_3 - 2;
  }
  if (param_3 != 0) {
    uVar2 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar2;
    param_1 = (undefined8 *)((int)param_1 + 1);
  }
  return CONCAT44(param_2,param_1);
}

