/* Decompiled from Speed.exe @ 005b0a97 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b0a97(int param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar6 = param_5;
  piVar5 = param_4;
  piVar4 = param_3;
  piVar10 = (int *)*param_2;
  iVar2 = piVar10[1];
  local_14 = *piVar10;
  local_8 = 0;
  local_c = 1;
  if (piVar10[4] != 0) {
    local_c = piVar10[4];
  }
  if (*(int *)(piVar10[2] + param_1) == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)(piVar10[2] + param_1) + 1;
  }
  if (*(int *)(piVar10[3] + param_1) == 0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)(piVar10[3] + param_1) + 1;
  }
  pcVar1 = (char *)((int)piVar9 + 1);
  piVar10 = piVar9;
  do {
    iVar8 = *piVar10;
    piVar10 = (int *)((int)piVar10 + 1);
  } while ((char)iVar8 != '\0');
  cVar3 = (char)piVar9;
  do {
    iVar8 = *piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
  } while ((char)iVar8 != '\0');
  iVar8 = 0;
  if (local_10 != (int *)0x0) {
    piVar11 = local_10;
    do {
      iVar8 = *piVar11;
      piVar11 = (int *)((int)piVar11 + 1);
    } while ((char)iVar8 != '\0');
    piVar7 = local_10;
    do {
      iVar8 = *piVar7;
      piVar7 = (int *)((int)piVar7 + 1);
    } while ((char)iVar8 != '\0');
    iVar8 = (uint)((((char)piVar7 - ((char)local_10 + '\x01')) + 1U & 3) != 0) +
            ((uint)((int)piVar11 + (1 - (int)((int)local_10 + 1))) >> 2);
  }
  *param_5 = (((uint)((int)piVar10 + (1 - (int)pcVar1)) >> 2) +
             iVar8 + (uint)((((char)piVar9 - (cVar3 + '\x01')) + 1U & 3) != 0)) * 4 + 8;
  *param_4 = 0;
  *param_3 = 0;
  if (-1 < iVar2) {
    if (iVar2 < 4) {
      *param_4 = *(int *)(*param_2 + 0x18) * *(int *)(*param_2 + 0x14) * local_c;
      *param_3 = 0x1c;
      if (((local_14 == 1) || (local_14 == 2)) || (local_14 == 3)) {
        *param_4 = *param_4 << 2;
        *param_2 = *param_2 + 0x1c;
        return 0;
      }
    }
    else if (iVar2 == 4) {
      *param_3 = 0x14;
      if ((3 < local_14) && ((local_14 < 10 || ((0xe < local_14 && (local_14 < 0x11)))))) {
        *param_4 = local_c << 2;
        *param_2 = *param_2 + 0x14;
        return 0;
      }
    }
    else if (iVar2 == 5) {
      local_18 = *(uint *)(*param_2 + 0x14);
      param_5 = (int *)0x0;
      *param_2 = *param_2 + 0x18;
      *param_3 = 0x18;
      if (local_18 != 0) {
        local_1c = 5;
        do {
          local_8 = FUN_005b0a97(param_1,param_2,&param_3,&param_4,&local_1c);
          if (local_8 < 0) {
            return local_8;
          }
          *piVar5 = *piVar5 + (int)param_4;
          *piVar4 = *piVar4 + (int)param_3;
          *piVar6 = *piVar6 + local_1c;
          param_5 = (int *)((int)param_5 + 1);
        } while (param_5 < local_18);
      }
      *piVar5 = *piVar5 * local_c;
      return local_8;
    }
  }
  return -0x7fffbffb;
}

