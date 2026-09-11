/* Decompiled from Speed.exe @ 00647742 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00647742(int *param_1,uint *param_2,int param_3,int param_4,uint param_5,uint *param_6)

{
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = *param_1;
  local_8 = 0;
  local_c = 0;
  if (local_14 == 0) {
    *param_1 = 0;
    *param_2 = 0;
    *param_6 = 0xffffffff;
  }
  else {
    FUN_00647885(&local_14,param_2);
    for (local_10 = 0; local_10 < *param_2; local_10 = local_10 + 1) {
      for (local_8 = 0; local_8 < param_5; local_8 = local_8 + 1) {
        for (local_c = 0;
            ((local_c < *(uint *)(param_4 + local_8 * 4) && (local_10 + local_c < *param_2)) &&
            (*(char *)(*(int *)(param_3 + local_8 * 4) + local_c) ==
             *(char *)(local_14 + local_10 + local_c))); local_c = local_c + 1) {
        }
        if (local_c == *(uint *)(param_4 + local_8 * 4)) {
          *param_1 = local_14 + local_10 + local_c;
          *param_2 = *param_2 - (local_10 + local_c);
          *param_6 = local_8;
          return;
        }
      }
    }
    *param_1 = 0;
    *param_2 = 0;
    *param_6 = 0xffffffff;
  }
  return;
}

