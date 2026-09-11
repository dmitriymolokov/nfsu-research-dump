/* Decompiled from Speed.exe @ 00643350 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 FUN_00643350(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  
  if (((uint)param_1 & 7) != 0) {
    if ((((uint)param_1 & 1) != 0) && (0 < (int)param_3)) {
      uVar4 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar4;
      param_1 = (undefined8 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    }
    if ((((uint)param_1 & 2) != 0) && (1 < (int)param_3)) {
      uVar5 = *(undefined2 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 2);
      *(undefined2 *)param_1 = uVar5;
      param_1 = (undefined8 *)((int)param_1 + 2);
      param_3 = param_3 - 2;
    }
    if ((((uint)param_1 & 4) != 0) && (3 < (int)param_3)) {
      uVar6 = *(undefined4 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 4);
      *(undefined4 *)param_1 = uVar6;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_3 = param_3 - 4;
    }
  }
  while (-1 < (int)(param_3 - 0x20)) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
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
    uVar6 = *(undefined4 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 4);
    *(undefined4 *)param_1 = uVar6;
    param_1 = (undefined8 *)((int)param_1 + 4);
    param_3 = param_3 - 4;
  }
  if (1 < param_3) {
    uVar5 = *(undefined2 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 2);
    *(undefined2 *)param_1 = uVar5;
    param_1 = (undefined8 *)((int)param_1 + 2);
    param_3 = param_3 - 2;
  }
  if (param_3 != 0) {
    uVar4 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar4;
    param_1 = (undefined8 *)((int)param_1 + 1);
  }
  return CONCAT44(param_2,param_1);
}

