/* Decompiled from Speed.exe @ 00555ff0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_00555ff0(int param_1,int param_2)

{
  int local_24;
  int local_1c;
  int local_14;
  int local_8;
  
  local_14 = FUN_00421960();
  if (local_14 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = local_14 + -4;
  }
  local_8 = local_14;
  while( true ) {
    local_24 = FUN_0040a880();
    if (local_24 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = local_24 + -4;
    }
    if (local_8 == local_24) break;
    if ((*(short *)(*(int *)(local_8 + 0xc) + 0x6c) == param_1) &&
       (*(int *)(local_8 + 0x18) == param_2)) {
      return local_8;
    }
    local_1c = FUN_00421960();
    if (local_1c == 0) {
      local_1c = 0;
    }
    else {
      local_1c = local_1c + -4;
    }
    local_8 = local_1c;
  }
  return 0;
}

