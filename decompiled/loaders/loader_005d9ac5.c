/* Decompiled from Speed.exe @ 005d9ac5 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool FUN_005d9ac5(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  uint local_c;
  int local_8;
  
  uVar2 = (uint)param_4;
  if (param_2 == (undefined4 *)0x2) {
    if (param_3 * (int)param_4 != 0) {
      piVar3 = (int *)FUN_005f762c(*param_1);
      if (((piVar3 == (int *)0x0) || (iVar4 = FUN_005f7616(*piVar3), iVar4 == 0)) ||
         ((*(byte *)(iVar4 + 4) & 0x20) == 0)) {
        return true;
      }
      uVar1 = (int)param_4 + 3;
      local_c = 0;
      if (param_3 != 0) {
        local_8 = 0;
        param_4 = param_1;
        do {
          param_1 = (undefined4 *)0x0;
          if (uVar2 != 0) {
            param_2 = param_4;
            do {
              piVar5 = (int *)FUN_005f762c(*param_2);
              if (piVar5 == (int *)0x0) {
                return true;
              }
              if (*piVar3 != *piVar5) {
                return true;
              }
              if (((uint)param_1 >> 2) + piVar3[2] + local_8 != piVar5[2]) {
                return true;
              }
              if (((uint)param_1 & 3) + piVar3[3] != piVar5[3]) {
                return true;
              }
              param_1 = (undefined4 *)((int)param_1 + 1);
              param_2 = param_2 + 1;
            } while (param_1 < uVar2);
          }
          local_c = local_c + 1;
          local_8 = local_8 + (uVar1 >> 2);
          param_4 = param_4 + uVar2;
        } while (local_c < param_3);
      }
    }
    bVar6 = false;
  }
  else {
    bVar6 = 1 < param_3;
  }
  return bVar6;
}

