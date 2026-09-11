/* Decompiled from Speed.exe @ 00649d50 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_00649d50(int param_1)

{
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    if (*(int *)(&DAT_006a99bc + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

