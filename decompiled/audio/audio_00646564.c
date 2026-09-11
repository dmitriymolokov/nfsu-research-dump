/* Decompiled from Speed.exe @ 00646564 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int __thiscall FUN_00646564(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_8;
  
  if (param_1[1] == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_1;
    local_14 = -1;
    iVar1 = local_14;
    local_8 = param_1[1];
    while (local_14 = iVar1, 1 < local_8 - local_14) {
      iVar3 = (local_8 + local_14) / 2;
      uVar4 = FUN_00647b50();
      iVar1 = iVar3;
      if (param_2 <= uVar4) {
        iVar1 = local_14;
        local_8 = iVar3;
      }
    }
    if (local_8 == 1 || local_8 + -1 < 0) {
      local_1c = 0;
    }
    else {
      local_1c = local_8 + -1;
    }
    if (local_1c < param_1[1] + -1) {
      if (local_8 == 1 || local_8 + -1 < 0) {
        local_20 = 0;
      }
      else {
        local_20 = local_8 + -1;
      }
      local_24 = local_20;
    }
    else {
      local_24 = param_1[1] + -1;
    }
    iVar2 = local_24 * 0x34 + iVar2;
  }
  return iVar2;
}

