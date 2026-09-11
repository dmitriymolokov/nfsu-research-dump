/* Decompiled from Speed.exe @ 005b0c4b */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_005b0c4b(int param_1,int *param_2,int *param_3,int param_4,int *param_5,int *param_6,
                int *param_7,int *param_8)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *local_10;
  int *local_c;
  int local_8;
  
  piVar3 = param_5;
  *(undefined4 *)(*param_6 + 4) = *(undefined4 *)(*param_2 + 4);
  *(undefined4 *)*param_6 = *(undefined4 *)*param_2;
  *(undefined4 *)(*param_6 + 0x10) = *(undefined4 *)(*param_2 + 0x10);
  *(int *)(*param_6 + 8) = *param_5;
  piVar8 = (int *)*param_2;
  iVar4 = piVar8[1];
  iVar6 = *piVar8;
  local_8 = 0;
  param_5 = (int *)0x1;
  if (piVar8[4] != 0) {
    param_5 = (int *)piVar8[4];
  }
  if (*(int *)(piVar8[2] + param_1) == 0) {
    local_c = (int *)0x0;
  }
  else {
    local_c = (int *)(piVar8[2] + param_1) + 1;
  }
  if (*(int *)(piVar8[3] + param_1) == 0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)(piVar8[3] + param_1) + 1;
  }
  piVar8 = local_c;
  do {
    iVar2 = *piVar8;
    piVar8 = (int *)((int)piVar8 + 1);
  } while ((char)iVar2 != '\0');
  pcVar1 = (char *)((int)piVar8 + (1 - (int)((int)local_c + 1)));
  *(char **)(param_4 + *piVar3) = pcVar1;
  *piVar3 = *piVar3 + 4;
  piVar8 = (int *)(*piVar3 + param_4);
  for (uVar5 = (uint)pcVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *piVar8 = *local_c;
    local_c = local_c + 1;
    piVar8 = piVar8 + 1;
  }
  for (uVar5 = (uint)pcVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar8 = (char)*local_c;
    local_c = (int *)((int)local_c + 1);
    piVar8 = (int *)((int)piVar8 + 1);
  }
  *piVar3 = *piVar3 + ((uint)(((uint)pcVar1 & 3) != 0) + ((uint)pcVar1 >> 2)) * 4;
  *(int *)(*param_6 + 0xc) = *piVar3;
  if (local_10 == (int *)0x0) {
    *(undefined4 *)(param_4 + *piVar3) = 0;
    *piVar3 = *piVar3 + 4;
  }
  else {
    piVar8 = local_10;
    do {
      iVar2 = *piVar8;
      piVar8 = (int *)((int)piVar8 + 1);
    } while ((char)iVar2 != '\0');
    pcVar1 = (char *)((int)piVar8 + (1 - (int)((int)local_10 + 1)));
    *(char **)(param_4 + *piVar3) = pcVar1;
    *piVar3 = *piVar3 + 4;
    piVar8 = (int *)(*piVar3 + param_4);
    for (uVar5 = (uint)pcVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *piVar8 = *local_10;
      local_10 = local_10 + 1;
      piVar8 = piVar8 + 1;
    }
    for (uVar5 = (uint)pcVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)piVar8 = (char)*local_10;
      local_10 = (int *)((int)local_10 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    *piVar3 = *piVar3 + ((uint)(((uint)pcVar1 & 3) != 0) + ((uint)pcVar1 >> 2)) * 4;
  }
  if (-1 < iVar4) {
    if (iVar4 < 4) {
      *(undefined4 *)(*param_6 + 0x14) = *(undefined4 *)(*param_2 + 0x14);
      *(undefined4 *)(*param_6 + 0x18) = *(undefined4 *)(*param_2 + 0x18);
      uVar5 = *(int *)(*param_2 + 0x18) * *(int *)(*param_2 + 0x14) * (int)param_5;
      if (((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) {
        iVar4 = uVar5 * 4;
        puVar7 = (undefined4 *)*param_3;
        puVar9 = (undefined4 *)*param_7;
        for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *param_3 = *param_3 + iVar4;
        *param_7 = *param_7 + iVar4;
        *param_2 = *param_2 + 0x1c;
        *param_6 = *param_6 + 0x1c;
        return 0;
      }
    }
    else if (iVar4 == 4) {
      if ((3 < iVar6) && ((iVar6 < 10 || ((0xe < iVar6 && (iVar6 < 0x11)))))) {
        if (param_5 != (int *)0x0) {
          param_4 = (int)param_5;
          do {
            *(int *)*param_7 = *param_8;
            *param_8 = *param_8 + 1;
            *param_3 = *param_3 + 4;
            *param_7 = *param_7 + 4;
            param_4 = param_4 + -1;
          } while (param_4 != 0);
        }
        *param_2 = *param_2 + 0x14;
        *param_6 = *param_6 + 0x14;
        return 0;
      }
    }
    else if (iVar4 == 5) {
      *(undefined4 *)(*param_6 + 0x14) = *(undefined4 *)(*param_2 + 0x14);
      uVar5 = *(uint *)(*param_2 + 0x14);
      *param_2 = *param_2 + 0x18;
      *param_6 = *param_6 + 0x18;
      iVar4 = *param_2;
      iVar6 = *param_6;
      do {
        if (param_5 == (int *)0x0) {
          return local_8;
        }
        local_10 = (int *)0x0;
        *param_2 = iVar4;
        *param_6 = iVar6;
        if (uVar5 != 0) {
          do {
            local_8 = FUN_005b0c4b(param_1,param_2,param_3,param_4,piVar3,param_6,param_7,param_8);
            if (local_8 < 0) {
              return local_8;
            }
            local_10 = (int *)((int)local_10 + 1);
          } while (local_10 < uVar5);
        }
        param_5 = (int *)((int)param_5 + -1);
      } while( true );
    }
  }
  return -0x7fffbffb;
}

