/* spd-match: far pct=10.75 M4.0.2-CE */
/* Decompiled from Speed.exe @ 004b9b40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004b9b40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0068737c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x10;
  *param_1 = &PTR_LAB_006c5ba8;
  *puVar1 = puVar1;
  param_1[0x11] = puVar1;
  ((unsigned char *)&(local_4))[0] = 1;
  local_4 = local_4 & 0xff; // M4.0.2-CE: local_4._1_3_ = 0
  FUN_004f8370(param_1 + 0x13,"track_thumb_master","track_thumb");
  ((unsigned char *)&(local_4))[0] = 2;
  FUN_004b9420(param_1 + 0x22);
  param_1[0x2b] = 0;
  local_4 = (local_4 & 0xffffff00) | 3; // M4.0.2-CE: CONCAT31(local_4._1_3_,3)
  DAT_00735e74 = 0;
  *(undefined1 *)((int)param_1 + 0xa5) = 0;
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0xa9464188);
    }
  }
  FUN_004f6910(iVar2);
  if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
     (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004ef050(0x13dccc51);
    }
  }
  FUN_004f6910(iVar2);
  if (DAT_00777b4c != 4) {
    FUN_00414a10();
  }
  if (DAT_0073578c != 0) {
    iVar3 = *(int *)(DAT_0073578c + 8);
    iVar2 = iVar3 + 0xdc;
    if ((iVar2 == 0) || (iVar2 = FUN_004fd1e0(iVar2), iVar2 == 0)) {
      FUN_004eede0(iVar3,"MU_TrackMapScroller.fng",0xf,0);
    }
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
  }
  param_1[0x28] = 0;
  FUN_004ba100(param_1);
  iVar2 = FUN_004ab510();
  *(int *)(iVar2 + 8) = (int)*(short *)(*(int *)(param_1[0x12] + 0xc) + 0x6c);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1[0x12] + 0x18);
  iVar2 = param_1[3];
  *(undefined1 *)((int)param_1 + 0xa6) = 0;
  param_1[0x2b] = 0;
  uVar4 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar4);
  }
  uVar4 = FUN_0049fc90();
  param_1[0x2a] = uVar4;
  switch(DAT_006ee6f0) {
  case 1:
  case 3:
  case 4:
    break;
  default:
    goto switchD_004b9dc7_caseD_2;
  case 5:
  case 6:
    ;
  }
  FUN_004fd230();
  FUN_004b91e0();
switchD_004b9dc7_caseD_2:
  FUN_004ba530(param_1);
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (DAT_00777cc8 == 4) {
    pcVar5 = "Highlight";
  }
  else {
    pcVar5 = "Hide";
  }
  FUN_004f6bd0(pcVar5,1);
  FUN_004b2410();
  *(undefined1 *)(param_1 + 8) = 1;
  ExceptionList = local_c;
  return param_1;
}

