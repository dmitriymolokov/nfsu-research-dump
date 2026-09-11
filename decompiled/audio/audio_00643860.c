/* Decompiled from Speed.exe @ 00643860 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 * FUN_00643860(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (((uint)param_1 & 3) != 0) {
    if ((((uint)param_1 & 1) != 0) && (0 < (int)param_3)) {
      *(char *)param_1 = (char)param_2;
      param_1 = (undefined8 *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    }
    if ((((uint)param_1 & 2) != 0) && (1 < (int)param_3)) {
      *(short *)param_1 = (short)param_2;
      param_1 = (undefined8 *)((int)param_1 + 2);
      param_3 = param_3 - 2;
    }
    if ((((uint)param_1 & 4) != 0) && (3 < (int)param_3)) {
      *(undefined4 *)param_1 = param_2;
      param_1 = (undefined8 *)((int)param_1 + 4);
      param_3 = param_3 - 4;
    }
  }
  uVar1 = CONCAT44(param_2,param_2);
  while (-1 < (int)(param_3 - 0x20)) {
    *param_1 = uVar1;
    param_1[1] = uVar1;
    param_1[2] = uVar1;
    param_1[3] = uVar1;
    param_1 = param_1 + 4;
    param_3 = param_3 - 0x20;
  }
  while (-1 < (int)(param_3 - 8)) {
    *param_1 = uVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 - 8;
  }
  if (param_3 == 0) {
    return param_1;
  }
  if (3 < param_3) {
    *(undefined4 *)param_1 = param_2;
    param_1 = (undefined8 *)((int)param_1 + 4);
    param_3 = param_3 - 4;
  }
  if (1 < param_3) {
    *(short *)param_1 = (short)param_2;
    param_1 = (undefined8 *)((int)param_1 + 2);
    param_3 = param_3 - 2;
  }
  if (param_3 != 0) {
    *(char *)param_1 = (char)param_2;
    param_1 = (undefined8 *)((int)param_1 + 1);
  }
  return param_1;
}

