/* Decompiled from Speed.exe @ 006486e2 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006486e2(void)

{
  undefined2 uVar1;
  undefined2 *local_18;
  undefined2 *local_10;
  undefined2 *local_c;
  int local_8;
  
  local_18 = &DAT_006e8130;
  local_c = &DAT_006e8930;
  local_10 = &DAT_006e9130;
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    *local_18 = (undefined2)local_8;
    local_18[1] = (undefined2)local_8;
    local_18[2] = (undefined2)local_8;
    local_18[3] = 0xff;
    local_18 = local_18 + 4;
    uVar1 = FUN_00648887((float)(local_8 + -0x80) * _DAT_006a9790);
    *local_c = uVar1;
    uVar1 = FUN_00648887((float)(local_8 + -0x80) * _DAT_006a978c);
    local_c[1] = uVar1;
    local_c[2] = 0;
    local_c[3] = 0;
    local_c = local_c + 4;
    *local_10 = 0;
    uVar1 = FUN_00648887((float)(local_8 + -0x80) * _DAT_006a9788);
    local_10[1] = uVar1;
    uVar1 = FUN_00648887((float)(local_8 + -0x80) * _DAT_006a9784);
    local_10[2] = uVar1;
    local_10[3] = 0;
    local_10 = local_10 + 4;
  }
  DAT_00712018 = 0;
  return;
}

