/* Decompiled from Speed.exe @ 0047df00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0047df00(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int local_c;
  int local_8;
  
  iVar2 = *param_2;
  if (iVar2 == -0x7ffcbbfb) {
    *param_1 = 0;
    return 1;
  }
  if (iVar2 == -0x7ffcbbdb) {
    param_1[0x201] = 0;
    return 1;
  }
  if (iVar2 == -0x7ffcbbf0) {
    param_1[0x222] = 0;
    return 1;
  }
  if (iVar2 != -0x7ffcbbeb) {
    if (iVar2 == -0x7ffcbbe0) {
      piVar1 = (int *)(param_2[1] + 8 + (int)param_2);
      param_2 = param_2 + 2;
      local_8 = -1;
      local_c = 0;
      if (param_2 < piVar1) {
        do {
          if (*param_2 == 0x34480) {
            iVar2 = 0;
            puVar6 = param_1 + 0x26f;
            piVar5 = param_1 + 0x26d;
            do {
              iVar4 = *piVar5;
              puVar3 = puVar6;
              if (0 < iVar4) {
                do {
                  if (*puVar3 == ((int)param_2 + 0x17U & 0xfffffff0)) {
                    local_c = local_c + 1;
                    local_8 = iVar2;
                  }
                  iVar4 = iVar4 + -1;
                  puVar3 = puVar3 + 1;
                } while (iVar4 != 0);
              }
              iVar2 = iVar2 + 1;
              piVar5 = piVar5 + 1;
              puVar6 = puVar6 + 8;
            } while (iVar2 < 2);
          }
          param_2 = (int *)(param_2[1] + 8 + (int)param_2);
        } while (param_2 < piVar1);
        if (0 < local_c) {
          param_1[local_8 + 0x26d] = param_1[local_8 + 0x26d] - local_c;
          return 1;
        }
      }
    }
    else {
      if (iVar2 != 0x34492) {
        return 0;
      }
      param_1[0x27f] = 0;
    }
    return 1;
  }
  param_1[0x243] = 0;
  return 1;
}

