/* Decompiled from Speed.exe @ 004eabc0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004eabc0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 local_810 [1824];
  char local_f0 [128];
  undefined1 local_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
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
  local_14 = 0;
  *param_1 = &PTR_FUN_006c2d94;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00417600();
  FUN_004ac5a0(&DAT_0075eef8,0,local_810);
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,local_810);
  _DAT_0072cc80 = 1;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,1);
  }
  iVar3 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar3 = FUN_004f3f90(&DAT_00746104), iVar3 != 0 && (*(int *)(iVar3 + 0x18) != 0)))) {
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
  if ((DAT_007341bc == 0) &&
     (((DAT_007677a8 == 0 || ((int *)(DAT_007677a8 + 0x58a0) == (int *)0x0)) ||
      (*(int *)(DAT_007677a8 + 0x58a0) != 0x71)))) {
    pcVar4 = (char *)0x0;
  }
  else {
    pcVar4 = &DAT_0075f2b5;
  }
  if (*pcVar4 == '\x02') {
    if ((DAT_0073578c != 0) && (FUN_004f5f80(DAT_0073578c,0), DAT_0073578c != 0)) {
      FUN_004f5f80(DAT_0073578c,0);
    }
    if ((((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
        (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
      FUN_004ef050(0xd6d4315d);
    }
    iVar2 = DAT_0073578c;
    FUN_004f75b0(0x60606060);
    if ((((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar2 = DAT_0073578c, iVar3 == 0)) ||
        (iVar3 = FUN_004ffb70(), iVar2 = DAT_0073578c, iVar3 == 0)) && (iVar2 != 0)) {
      FUN_004ef050(0x1c8ace);
    }
    FUN_004f75b0(0x60606060);
    DAT_006fa19c = 0x74fd9de5;
    local_2c = 0x639;
    local_30 = 0xb0e803e8;
    local_28 = 0;
    if (DAT_00735dd0 == 0) {
      DAT_00735dd0 = 1;
      FUN_004dcbe0(&local_30,"GenericOKDialogMedium.fng",param_1[3]);
    }
  }
  else {
    DAT_00735dd0 = 0;
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1c) = 0xff;
    }
  }
  iVar2 = FUN_0059fb80();
  if (iVar2 == 0) {
    iVar2 = FUN_0059fb80();
  }
  iVar3 = 0x80;
  pcVar4 = local_f0;
  do {
    cVar1 = pcVar4[iVar2 - (int)local_f0];
    iVar3 = iVar3 + -1;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while (iVar3 != 0);
  if (((DAT_0073494c != 0) || (DAT_00735ec1 != '\0')) ||
     (uVar5 = DAT_0076026c, DAT_0073440c != '\0')) {
    uVar5 = 1000000000;
  }
  FUN_004f68c0(0x40,&DAT_006ca778,uVar5);
  FUN_004f6850(local_f0,local_70);
  if (DAT_0073578c != 0) {
    FUN_004f5ed0(DAT_0073578c);
  }
  ExceptionList = local_1c;
  return param_1;
}

