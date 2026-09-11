/* Decompiled from Speed.exe @ 004584f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4
FUN_004584f0(float param_1,float param_2,float param_3,float param_4,float *param_5,float *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_10 [4];
  
  local_10[0] = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  local_10[3] = param_4;
  iVar4 = 3;
  do {
    iVar2 = 0;
    if (3 < iVar4) {
      iVar3 = 3;
      do {
        if (local_10[iVar2 + 1] < local_10[iVar2]) {
          fVar1 = local_10[iVar2];
          local_10[iVar2] = local_10[iVar2 + 1];
          local_10[iVar2 + 1] = fVar1;
        }
        if (local_10[iVar2 + 2] < local_10[iVar2 + 1]) {
          fVar1 = local_10[iVar2 + 1];
          local_10[iVar2 + 1] = local_10[iVar2 + 2];
          local_10[iVar2 + 2] = fVar1;
        }
        if (local_10[iVar2 + 3] < local_10[iVar2 + 2]) {
          fVar1 = local_10[iVar2 + 2];
          local_10[iVar2 + 2] = local_10[iVar2 + 3];
          local_10[iVar2 + 3] = fVar1;
        }
        if (*(float *)(&stack0x00000000 + iVar2 * 4) < local_10[iVar2 + 3]) {
          fVar1 = local_10[iVar2 + 3];
          local_10[iVar2 + 3] = *(float *)(&stack0x00000000 + iVar2 * 4);
          *(float *)(&stack0x00000000 + iVar2 * 4) = fVar1;
        }
        iVar3 = iVar3 + 4;
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar4);
    }
    for (; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      if (local_10[iVar2 + 1] < local_10[iVar2]) {
        fVar1 = local_10[iVar2];
        local_10[iVar2] = local_10[iVar2 + 1];
        local_10[iVar2 + 1] = fVar1;
      }
    }
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  if ((((param_1 <= local_10[1]) && (local_10[1] < param_2 != (local_10[1] == param_2))) &&
      (param_3 <= local_10[1])) && (local_10[1] < param_4 != (local_10[1] == param_4))) {
    *param_5 = local_10[1];
    *param_6 = local_10[2];
    return 1;
  }
  return 0;
}

