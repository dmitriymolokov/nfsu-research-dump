/* Decompiled from Speed.exe @ 006474d4 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006474d4(int param_1,uint param_2)

{
  int iVar1;
  uint local_40;
  undefined4 local_3c [5];
  undefined1 local_26;
  undefined1 local_25;
  uint local_24;
  undefined4 local_20;
  undefined1 local_19;
  char *local_18 [5];
  
  local_26 = 9;
  local_19 = 0xd;
  local_25 = 9;
  for (local_24 = 0; local_24 < param_2; local_24 = local_24 + 1) {
    if ((*(char *)(param_1 + local_24) == '\t') || (*(char *)(param_1 + local_24) == '\r')) {
      local_25 = *(undefined1 *)(param_1 + local_24);
      *(undefined1 *)(param_1 + local_24) = 0;
      break;
    }
  }
  local_18[0] = "RIGHT";
  local_18[1] = "TOP";
  local_18[2] = "CENTER";
  local_18[3] = "LEFT";
  local_18[4] = "BOTTOM";
  local_3c[0] = 0;
  local_3c[1] = 1;
  local_3c[2] = 2;
  local_3c[3] = 3;
  local_3c[4] = 4;
  local_20 = 0xffffffff;
  local_40 = 0;
  do {
    if (4 < local_40) {
LAB_006475bf:
      if (local_24 != param_2) {
        *(undefined1 *)(param_1 + local_24) = local_25;
      }
      return local_20;
    }
    iVar1 = FUN_006475d9(local_18[local_40],param_1);
    if (iVar1 == 0) {
      local_20 = local_3c[local_40];
      goto LAB_006475bf;
    }
    local_40 = local_40 + 1;
  } while( true );
}

