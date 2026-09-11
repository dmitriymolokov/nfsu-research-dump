/* Decompiled from Speed.exe @ 004b2c30 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2c30(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined1 local_770 [1092];
  int local_32c;
  int local_328;
  byte local_44;
  byte local_43 [31];
  int local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006887db;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c614c;
  param_1[0x11] = 0;
  local_14 = 0;
  DAT_00735e78 = 0;
  param_1[0x11] = DAT_0073ad3c;
  FUN_00574020(0x2f,&LAB_004b2b50,param_1);
  FUN_00574020(0x2f,&LAB_004b2b50,param_1);
  iVar4 = param_1[3];
  local_24 = FUN_004fd230();
  if (((((iVar4 == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) &&
      ((DAT_0073578c == 0 || (iVar4 = FUN_004ef050(local_24), iVar4 == 0)))) ||
     (*(int *)(iVar4 + 0x18) != 2)) {
    iVar4 = 0;
  }
  param_1[0x10] = iVar4;
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar5 + 0x18));
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar5 + 0x18));
  }
  if (DAT_0078eb10 == 0) {
    DAT_0078eb10 = 1;
    FUN_00565da0("DUMMY_SKIN%d",1);
    pbVar8 = &local_44;
    local_24 = -1;
    bVar3 = local_44;
    while (bVar3 != 0) {
      uVar6 = (uint)bVar3;
      bVar3 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
      local_24 = local_24 * 0x21 + uVar6;
    }
    FUN_00565da0("DUMMY_WHEEL%d",1);
    iVar4 = -1;
    pbVar8 = &local_44;
    while (local_44 != 0) {
      pbVar1 = pbVar8 + 1;
      iVar4 = iVar4 * 0x21 + (uint)local_44;
      pbVar8 = pbVar8 + 1;
      local_44 = *pbVar1;
    }
    FUN_00417600();
    FUN_004bca40();
    pcVar9 = "FE_SKYLINE";
    do {
      pcVar2 = pcVar9 + 1;
      pcVar9 = pcVar9 + 1;
    } while (*pcVar2 != '\0');
    FUN_004b26f0(local_770);
    local_32c = local_24;
    local_328 = iVar4;
    iVar4 = FUN_004b2330();
    FUN_004323f0(&DAT_00748850,local_770);
    _DAT_0072cc80 = 1;
    if (iVar4 != 0) {
      FUN_004b0e50(iVar4,&DAT_00748850,1);
    }
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x18) == 0)) {
    FUN_004f62f0();
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar4 + 0x18));
  }
  FUN_004b2480();
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar5 + 0x18));
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar5 + 0x18));
  }
  iVar5 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0 && (*(int *)(iVar5 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar5 + 0x18));
  }
  iVar4 = param_1[3];
  uVar7 = FUN_004b30b0(param_1);
  if (((((iVar4 != 0) && (iVar4 = FUN_004f65d0(), iVar4 != 0)) &&
       (iVar4 = FUN_004ffb70(), iVar4 != 0)) ||
      ((DAT_0073578c != 0 && (iVar4 = FUN_004ef050(uVar7), iVar4 != 0)))) &&
     ((*(int *)(iVar4 + 0x18) == 2 && (DAT_0073578c != 0)))) {
    FUN_004f5ed0(DAT_0073578c);
  }
  iVar4 = FUN_004f3f90(&DAT_00746104);
  if (((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != 0)) && (*(int **)(iVar4 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar4 + 0x18));
  }
  DAT_00737660 = 1;
  DAT_00737661 = 0;
  _DAT_00737664 = 0;
  _DAT_00737690 = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  DAT_00748f75 = 0;
  ExceptionList = local_1c;
  return;
}

