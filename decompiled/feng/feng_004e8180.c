/* Decompiled from Speed.exe @ 004e8180 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e8180(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c2d84;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0 && (*(int *)(iVar1 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar1 + 0x18));
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0 && (*(int *)(iVar1 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar1 + 0x18));
  }
  iVar1 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0 && (*(int *)(iVar1 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar1 + 0x18));
  }
  iVar2 = FUN_004f65d0();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 0xff;
  }
  if (DAT_00735dc4 == '\0') {
    if (DAT_00735dc8 == 0) {
      pcVar3 = (char *)(DAT_007677a8 + 0x594c);
    }
    else {
      if (DAT_00735dc8 < 0x100) {
        iVar2 = (&DAT_00733ff8)[DAT_00735dc8];
      }
      else {
        iVar2 = 0;
      }
      pcVar3 = (char *)(iVar2 + 0xac);
      if (*(char *)(iVar2 + 0xac) == '\0') goto LAB_004e82f1;
    }
  }
  else {
    pcVar3 = "04_GUM_s";
  }
  FUN_004e8420(pcVar3);
LAB_004e82f1:
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  iVar2 = DAT_0073578c;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
    if ((DAT_0073578c != 0) &&
       ((iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0 && (*(int *)(iVar1 + 0x18) != 0)))) {
      FUN_004eebf0(*(undefined4 *)(iVar2 + 8),*(int *)(iVar1 + 0x18));
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  ExceptionList = local_c;
  return param_1;
}

