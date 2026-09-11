/* Decompiled from Speed.exe @ 00661120 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00661120(undefined4 *param_1,byte param_2,int param_3)

{
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x2a) = 0;
  *param_1 = FUN_00660f10;
  if (param_3 != 0) {
    *(undefined2 *)((int)param_1 + 0x2a) = 1;
    if ((param_2 & 2) != 0) {
      param_1[9] = FUN_00661cc0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      return;
    }
    if ((param_2 & 4) != 0) {
      param_1[9] = &LAB_00661ac0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      return;
    }
    param_1[9] = &LAB_00661780;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return;
  }
  if ((param_2 & 2) != 0) {
    param_1[9] = FUN_00662130;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return;
  }
  if ((param_2 & 4) != 0) {
    param_1[9] = &LAB_00662030;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    return;
  }
  param_1[9] = FUN_00661f60;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return;
}

