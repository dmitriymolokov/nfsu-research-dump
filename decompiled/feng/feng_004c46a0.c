/* Decompiled from Speed.exe @ 004c46a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004c46a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006891f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x11;
  *param_1 = &PTR_FUN_006c52f0;
  *puVar1 = puVar1;
  param_1[0x12] = puVar1;
  local_4 = 1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_004b2410();
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar3 = DAT_0073578c;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar3 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar3 = DAT_0073578c;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) {
      FUN_004eebf0(*(undefined4 *)(iVar3 + 8),*(int *)(iVar2 + 0x18));
    }
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  if (((iVar3 == 0) || (*(int *)(iVar3 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar2 = *(int *)(DAT_0073578c + 8);
    iVar3 = iVar2 + 0xdc;
    if (iVar3 != 0) {
      iVar3 = FUN_004fd1e0(iVar3);
      if (iVar3 != 0) goto LAB_004c47d3;
    }
    FUN_004eede0(iVar2,"MU_TrackMapScroller.fng",0xf,0);
  }
LAB_004c47d3:
  param_1[0x10] = 0;
  FUN_004c4a60(param_1);
  *(undefined1 *)(param_1 + 8) = 1;
  DAT_0073570c = 1;
  ExceptionList = local_c;
  return param_1;
}

