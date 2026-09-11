/* Decompiled from Speed.exe @ 00643910 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined8 * FUN_00643910(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  if (((uint)param_1 & 0x1f) != 0) {
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
    if ((((uint)param_1 & 8) != 0) && (7 < (int)param_3)) {
      *param_1 = CONCAT44(param_2,param_2);
      param_1 = param_1 + 1;
      param_3 = param_3 - 8;
    }
    if ((((uint)param_1 & 0x10) != 0) && (0xf < (int)param_3)) {
      *(undefined4 *)param_1 = param_2;
      *(undefined4 *)((int)param_1 + 4) = param_2;
      *(undefined4 *)(param_1 + 1) = param_2;
      *(undefined4 *)((int)param_1 + 0xc) = param_2;
      param_1 = param_1 + 2;
      param_3 = param_3 - 0x10;
    }
  }
  while (-1 < (int)(param_3 - 0x20)) {
    *(undefined4 *)param_1 = param_2;
    *(undefined4 *)((int)param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 1) = param_2;
    *(undefined4 *)((int)param_1 + 0xc) = param_2;
    *(undefined4 *)(param_1 + 2) = param_2;
    *(undefined4 *)((int)param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 3) = param_2;
    *(undefined4 *)((int)param_1 + 0x1c) = param_2;
    param_1 = param_1 + 4;
    param_3 = param_3 - 0x20;
  }
  while (-1 < (int)(param_3 - 8)) {
    *param_1 = CONCAT44(param_2,param_2);
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

