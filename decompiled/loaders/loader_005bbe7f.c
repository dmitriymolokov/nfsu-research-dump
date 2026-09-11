/* Decompiled from Speed.exe @ 005bbe7f */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005bbe7f(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  bool bVar8;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_3 == 0) {
    if (param_1 == (undefined1 *)0x0) {
      if (param_2 != (undefined1 *)0x0) {
        return 0;
      }
      return 1;
    }
  }
  else if (param_1 == (undefined1 *)0x0) {
    return 1;
  }
  if (param_2 == (undefined1 *)0x0) {
    return 0;
  }
  FUN_005d8121();
  FUN_005d8121();
  puVar7 = param_1;
  if (*(int *)(param_1 + 4) != 8) {
    local_40 = 4;
    local_38 = 1;
    local_34 = FUN_005ba80b(param_1);
    puVar7 = local_50;
    if ((param_3 != 0) && (iVar3 = FUN_005ba799(param_1), iVar3 != 0)) {
      local_40 = 1;
    }
  }
  puVar5 = param_2;
  if (*(int *)(param_2 + 4) != 8) {
    local_1c = 4;
    local_14 = 1;
    local_10 = FUN_005ba80b(param_2);
    puVar5 = local_2c;
    if ((param_3 != 0) && (iVar3 = FUN_005ba799(param_2), iVar3 != 0)) {
      local_1c = 1;
    }
  }
  iVar3 = *(int *)(puVar7 + 0x10);
  if ((iVar3 != 4) && (iVar1 = *(int *)(puVar5 + 0x10), iVar1 != 4)) {
    if (iVar3 == 0) {
joined_r0x005bc04c:
      if (iVar1 == 3) goto LAB_005bc0f7;
    }
    else if (iVar3 == 1) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
LAB_005bc038:
          if (*(uint *)(puVar7 + 0x1c) <= *(uint *)(puVar5 + 0x1c)) goto LAB_005bbf6f;
        }
        else {
          if (iVar1 != 2) goto joined_r0x005bc04c;
          uVar2 = *(uint *)(puVar5 + 0x18);
          if (((uVar2 != 1) || (*(uint *)(puVar7 + 0x1c) <= *(uint *)(puVar5 + 0x1c))) &&
             ((iVar3 = *(int *)(puVar5 + 0x1c), iVar3 != 1 || (*(uint *)(puVar7 + 0x1c) <= uVar2))))
          {
            if ((uVar2 != 1) && (iVar3 != 1)) {
              bVar8 = uVar2 * iVar3 - *(int *)(puVar7 + 0x1c) == 0;
              goto LAB_005bc0d7;
            }
            goto LAB_005bbf6f;
          }
        }
        goto LAB_005bc0f7;
      }
    }
    else if (iVar3 == 2) {
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          uVar2 = *(uint *)(puVar7 + 0x18);
          if (((uVar2 != 1) || (*(uint *)(puVar7 + 0x1c) <= *(uint *)(puVar5 + 0x1c))) &&
             ((iVar3 = *(int *)(puVar7 + 0x1c), iVar3 != 1 || (uVar2 <= *(uint *)(puVar5 + 0x1c)))))
          {
            if ((uVar2 != 1) && (iVar3 != 1)) {
              bVar8 = uVar2 * iVar3 - *(int *)(puVar5 + 0x1c) == 0;
              goto LAB_005bc0d7;
            }
            goto LAB_005bbf6f;
          }
        }
        else {
          if (iVar1 != 2) goto joined_r0x005bc04c;
          if (*(uint *)(puVar7 + 0x18) <= *(uint *)(puVar5 + 0x18)) goto LAB_005bc038;
        }
        goto LAB_005bc0f7;
      }
    }
    else if (iVar3 == 3) {
      if (iVar1 != 3) goto LAB_005bc0f7;
      iVar3 = *(int *)(puVar5 + 0x14);
      if (iVar3 != 0xd) {
        if (iVar3 == 0xf) {
          iVar3 = *(int *)(puVar7 + 0x14);
          if (((iVar3 == 0xf) || (iVar3 == 0x10)) || ((iVar3 == 0x11 || (iVar3 == 0x12))))
          goto LAB_005bbf6f;
          bVar8 = iVar3 == 0x13;
        }
        else if (iVar3 == 0x14) {
          iVar3 = *(int *)(puVar7 + 0x14);
          if ((((iVar3 == 0x14) || (iVar3 == 0x15)) || (iVar3 == 0x16)) || (iVar3 == 0x17))
          goto LAB_005bbf6f;
          bVar8 = iVar3 == 0x18;
        }
        else {
          bVar8 = *(int *)(puVar7 + 0x14) == iVar3;
        }
LAB_005bc0d7:
        if (!bVar8) goto LAB_005bc0f7;
      }
    }
LAB_005bbf6f:
    uVar6 = 1;
    goto LAB_005bbf71;
  }
  uVar4 = *(int *)(puVar7 + 0x1c) * *(int *)(puVar7 + 0x18);
  uVar2 = *(int *)(puVar5 + 0x1c) * *(int *)(puVar5 + 0x18);
  if (param_3 == 0) {
    if ((iVar3 == *(int *)(puVar5 + 0x10)) && (uVar4 - uVar2 == 0)) {
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          iVar3 = FUN_005bac05(param_1,uVar2,local_50);
          if (((iVar3 < 0) || (iVar3 = FUN_005bac05(param_2,uVar2,local_2c), iVar3 < 0)) ||
             (iVar3 = FUN_005ba894(local_50,local_2c), iVar3 == 0)) goto LAB_005bc0f7;
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
      goto LAB_005bc1a5;
    }
  }
  else if (uVar4 < uVar2 || uVar4 - uVar2 == 0) {
    uVar2 = 0;
    if (uVar4 != 0) {
      do {
        iVar3 = FUN_005bac05(param_1,uVar2,local_50);
        if (((iVar3 < 0) || (iVar3 = FUN_005bac05(param_2,uVar2,local_2c), iVar3 < 0)) ||
           (iVar3 = FUN_005bbe7f(local_50,local_2c,1), iVar3 == 0)) goto LAB_005bc0f7;
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar4);
    }
LAB_005bc1a5:
    uVar6 = 1;
    goto LAB_005bbf71;
  }
LAB_005bc0f7:
  uVar6 = 0;
LAB_005bbf71:
  FUN_005d8188();
  FUN_005d8188();
  return uVar6;
}

