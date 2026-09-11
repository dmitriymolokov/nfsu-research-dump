/* Decompiled from Speed.exe @ 00643250 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 FUN_00643250(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if (((uint)param_1 & 3) != 0) {
    if ((((uint)param_1 & 1) != 0) && (0 < (int)param_3)) {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    }
    if ((((uint)param_1 & 2) != 0) && (1 < (int)param_3)) {
      uVar2 = *(undefined2 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 2);
      *(undefined2 *)param_1 = uVar2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      param_3 = param_3 - 2;
    }
    if ((((uint)param_1 & 4) != 0) && (3 < (int)param_3)) {
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar3;
      param_1 = param_1 + 1;
      param_3 = param_3 - 4;
    }
  }
  while (-1 < (int)(param_3 - 0x20)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_2 = param_2 + 8;
    param_1 = param_1 + 8;
    param_3 = param_3 - 0x20;
  }
  while (-1 < (int)(param_3 - 8)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_2 = param_2 + 2;
    param_1 = param_1 + 2;
    param_3 = param_3 - 8;
  }
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (3 < param_3) {
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = uVar3;
    param_1 = param_1 + 1;
    param_3 = param_3 - 4;
  }
  if (1 < param_3) {
    uVar2 = *(undefined2 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 2);
    *(undefined2 *)param_1 = uVar2;
    param_1 = (undefined4 *)((int)param_1 + 2);
    param_3 = param_3 - 2;
  }
  if (param_3 != 0) {
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  return CONCAT44(param_2,param_1);
}

