/* Decompiled from Speed.exe @ 00556e70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00556e70(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006bcd68;
  param_1[0x11] = 0;
  iVar2 = param_1[3];
  local_4 = 0;
  uVar1 = FUN_004fd230();
  if (((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) &&
      ((DAT_0073578c == 0 || (iVar2 = FUN_004ef050(uVar1), iVar2 == 0)))) ||
     (*(int *)(iVar2 + 0x18) != 2)) {
    iVar2 = 0;
  }
  param_1[0x10] = iVar2;
  _DAT_00777cc0 = 4;
  iVar2 = FUN_004ab510();
  if (*(int *)(iVar2 + 0x10) < 2) {
    *(undefined4 *)(iVar2 + 0x10) = 2;
  }
  if (10 < *(int *)(iVar2 + 0x10)) {
    *(undefined4 *)(iVar2 + 0x10) = 10;
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if (((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar3 + 0x18));
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) == 0)) {
    FUN_004f62f0();
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x2401cd38,0,0,*(int *)(iVar2 + 0x18));
  }
  if (DAT_00777b4c == 4) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar2 + 0x18));
    }
  }
  else {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0))
    {
      (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar2 + 0x18));
    }
  }
  FUN_004b2480();
  if (DAT_0077b240 == 0) {
    FUN_004ebd60(0x6cfb8832);
    uVar1 = FUN_00674898();
    param_1[0x11] = uVar1;
    param_1[0x12] = 0;
  }
  else {
    param_1[0x11] = 0;
    param_1[0x12] = 3;
  }
  DAT_00734f58 = param_1;
  ExceptionList = pvStack_c;
  return param_1;
}

