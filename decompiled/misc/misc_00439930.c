/* Decompiled from Speed.exe @ 00439930 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int FUN_00439930(int param_1)

{
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  while( true ) {
    if (5 < local_c) {
      return 0;
    }
    if ((param_1 >> ((byte)local_c & 0x1f) & 1U) != 0) break;
    local_8 = local_8 + 1;
    local_c = local_c + 1;
  }
  return local_8;
}

