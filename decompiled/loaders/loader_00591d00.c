/* Decompiled from Speed.exe @ 00591d00 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool __fastcall FUN_00591d00(int param_1)

{
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  if (param_1 != 0) {
    *DAT_00743c74 = &local_18;
    local_14 = DAT_00743c74;
    local_18 = &DAT_00743c70;
    DAT_00743c74 = &local_18;
    if (param_1 != 0) {
      DAT_00743c74 = &local_18;
      local_10 = param_1;
      FUN_00540680();
      FUN_0053f4b0();
      param_1 = local_10;
    }
  }
  if ((param_1 != 0) || (local_c != 0)) {
    *local_14 = local_18;
    local_18[1] = local_14;
  }
  return local_c != 0;
}

