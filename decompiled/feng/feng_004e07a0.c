/* Decompiled from Speed.exe @ 004e07a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e07a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0068911e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c36b4;
  puVar3 = param_1 + 0x11;
  param_1[0x10] = &PTR_LAB_006c36c4;
  *puVar3 = puVar3;
  param_1[0x12] = puVar3;
  param_1[0x18] = param_1[3];
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  puVar3 = param_1 + 0x1a;
  param_1[0x19] = &PTR_LAB_006c36c4;
  *puVar3 = puVar3;
  param_1[0x1b] = puVar3;
  param_1[0x21] = param_1[3];
  param_1[0x1e] = 1;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  local_4 = 2;
  FUN_004e0380(param_1 + 0x22,param_1[3]);
  FUN_004e0380(param_1 + 0x29,param_1[3]);
  DAT_00746968 = 0;
  DAT_00746964 = 0;
  if (((param_1[3] == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xa9464188);
    }
  }
  FUN_004f6910(iVar1);
  if (((param_1[3] == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x13dccc51);
    }
  }
  FUN_004f6910(iVar1);
  DAT_00748f78 = 0;
  DAT_00748f7c = 1;
  if (DAT_0070701c != 0) {
    DAT_0070701c = 0;
    if (DAT_00777b4c == 8) {
      param_2 = DAT_00768570;
    }
    else {
      param_2 = DAT_0076856c;
    }
    puVar3 = &DAT_00758c28;
    puVar4 = &DAT_0076856c;
    for (iVar1 = 0x18b4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_004cc7c0(&DAT_0076e83c,&DAT_0075eef8);
    FUN_004aa4d0(1);
    FUN_004aa4d0(0);
    if (DAT_00777b4c == 8) {
      DAT_00768570 = param_2;
    }
    else {
      DAT_0076856c = param_2;
    }
    FUN_004ab570();
  }
  FUN_004e0d90(param_1,param_1 + 0x10,0);
  FUN_004e0d90(param_1,param_1 + 0x19,1);
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar1 = DAT_0073578c;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar1 = DAT_0073578c;
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar1 + 8),*(int *)(iVar2 + 0x18));
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar2 = *(int *)(DAT_0073578c + 8);
    iVar1 = iVar2 + 0xdc;
    if ((iVar1 == 0) || (iVar1 = FUN_004fd1e0(iVar1), iVar1 == 0)) {
      FUN_004eede0(iVar2,"GarageMain_2P.fng",0x10,0);
    }
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x18) == 0)) && (DAT_0073578c != 0)) {
    iVar2 = *(int *)(DAT_0073578c + 8);
    iVar1 = iVar2 + 0xdc;
    if ((iVar1 == 0) || (iVar1 = FUN_004fd1e0(iVar1), iVar1 == 0)) {
      FUN_004eede0(iVar2,"MU_MPBackground.fng",0x10,0);
    }
  }
  FUN_00414a10();
  FUN_00414a10();
  FUN_004e19a0();
  FUN_004e19a0();
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x18883f75,0,0,*(int *)(iVar1 + 0x18));
  }
  FUN_004b2480();
  param_1[0x30] = 0xffffffff;
  if (((param_1[3] == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0x7af8fe3f);
    }
  }
  FUN_004f6910(iVar1);
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x6c6603df,0,0,*(int *)(iVar1 + 0x18));
  }
  FUN_004e1b90();
  FUN_004e1b90();
  *(undefined1 *)(param_1 + 0x32) = 0;
  ExceptionList = pvStack_c;
  return param_1;
}

