/* Decompiled from Speed.exe @ 00550830 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Removing unreachable block (ram,0x00550a20) */

undefined4 * FUN_00550830(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687876;
  local_c = ExceptionList;
  piVar1 = param_1 + 5;
  ExceptionList = &local_c;
  param_1[6] = 0x32;
  *piVar1 = 6;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  FUN_004f9f30();
  param_1[1] = param_2;
  pvVar3 = _malloc(0x24);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00550570();
  }
  iVar7 = 0;
  param_1[0xd] = uVar4;
  puVar6 = param_1 + 0xe;
  do {
    pvVar3 = _malloc(0x28);
    local_4 = 1;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_005500b0(iVar7);
    }
    *puVar6 = uVar4;
    iVar7 = iVar7 + 1;
    puVar6 = puVar6 + 1;
    local_4 = 0xffffffff;
  } while (iVar7 < 6);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  iVar7 = 0;
  if ((int)param_1[6] < 0) {
    iVar7 = param_1[6];
  }
  param_1[7] = iVar7;
  if (iVar7 < 0) {
    param_1[0xc] = iVar7;
    param_1[0xb] = iVar7 - *piVar1;
    if (iVar7 - *piVar1 < 0) {
      param_1[0xb] = 0;
    }
  }
  iVar5 = *piVar1;
  if (iVar7 < iVar5) {
    param_1[0xc] = iVar7;
LAB_00550942:
    param_1[0xb] = 0;
  }
  else if ((int)(param_1[0xc] - param_1[0xb]) < iVar5) {
    param_1[0xc] = iVar5;
    goto LAB_00550942;
  }
  if (iVar7 + -1 < 0) {
    param_1[10] = iVar7 + -1;
  }
  iVar7 = param_1[0xb];
  if ((int)param_1[10] < iVar7) {
    param_1[10] = iVar7;
  }
  iVar2 = param_1[0xc];
  if (iVar2 < (int)param_1[10]) {
    param_1[10] = iVar2;
  }
  param_1[8] = iVar2 - iVar7;
  param_1[9] = param_1[10] - iVar7;
  if (iVar5 <= param_1[10] - iVar7) {
    param_1[9] = iVar5 + -1;
  }
  if (param_2 == 0) {
LAB_00550a28:
    local_4 = 0xffffffff;
    iVar7 = DAT_0073578c;
LAB_00550a2e:
    iVar5 = 0;
    if (iVar7 == 0) goto LAB_00550a49;
    uVar4 = FUN_004ef050(0xda928c86);
    iVar5 = DAT_0073578c;
  }
  else {
    iVar5 = FUN_004f3f90(&DAT_00746104);
    iVar7 = DAT_0073578c;
    if ((iVar5 != 0) && (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
LAB_005509de:
      local_4 = 2;
      FUN_004ffb00(iVar5);
      goto LAB_00550a28;
    }
    iVar5 = DAT_0073578c;
    if (DAT_0073578c != 0) {
      iVar2 = *(int *)(DAT_0073578c + 8);
      if ((iVar2 != 0) &&
         ((iVar5 = FUN_004fd1e0(iVar2 + 0xdc), iVar5 != 0 ||
          (iVar5 = FUN_004fd1e0(iVar2 + 0xec), iVar5 != 0)))) goto LAB_005509de;
      goto LAB_00550a2e;
    }
LAB_00550a49:
    uVar4 = 0;
  }
  param_1[0x14] = uVar4;
  if (param_2 == 0) {
LAB_00550afc:
    if (iVar5 != 0) {
      uVar4 = FUN_004ef050(0xda9bdef7);
      goto LAB_00550b13;
    }
  }
  else {
    iVar7 = FUN_004f3f90(&DAT_00746104);
    iVar5 = DAT_0073578c;
    if ((iVar7 != 0) && (iVar7 = *(int *)(iVar7 + 0x18), iVar7 != 0)) {
LAB_00550ab4:
      local_4 = 3;
      FUN_004ffb00(iVar7);
      local_4 = 0xffffffff;
      iVar5 = DAT_0073578c;
      goto LAB_00550afc;
    }
    if (DAT_0073578c != 0) {
      iVar2 = *(int *)(DAT_0073578c + 8);
      if ((iVar2 == 0) ||
         ((iVar7 = FUN_004fd1e0(iVar2 + 0xdc), iVar7 == 0 &&
          (iVar7 = FUN_004fd1e0(iVar2 + 0xec), iVar7 == 0)))) goto LAB_00550afc;
      goto LAB_00550ab4;
    }
  }
  uVar4 = 0;
LAB_00550b13:
  param_1[0x15] = uVar4;
  *param_1 = 0xffffffff;
  param_1[4] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

