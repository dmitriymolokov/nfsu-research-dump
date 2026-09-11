/* Decompiled from Speed.exe @ 004e86d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004e86d0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c2d64;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar2 + 0x18));
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) &&
     ((DAT_0073578c != 0 &&
      ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar2 + 0x18));
  }
  iVar2 = FUN_004f3f90(&DAT_00746104);
  iVar4 = DAT_0073578c;
  if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (DAT_0073578c != 0)) &&
     ((iVar2 = FUN_004f3f90(&DAT_00746104), iVar2 != 0 && (*(int *)(iVar2 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar4 + 8),*(int *)(iVar2 + 0x18));
  }
  iVar4 = DAT_00777ccc;
  cVar1 = FUN_005a2f10(DAT_00777ccc,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_005a2f10(iVar4,1);
    if (cVar1 != '\0') goto LAB_004e8848;
    iVar2 = iVar4 + 0x5958;
LAB_004e8839:
    puVar5 = &DAT_006cc568;
  }
  else {
    iVar2 = iVar4 + 0x5964;
    if (*(int *)(iVar4 + 0x58a0) != 0) goto LAB_004e8839;
    if (DAT_0076027c == 0) {
      puVar5 = &DAT_006c30b4;
    }
    else {
      puVar5 = &DAT_006c30ac;
    }
  }
  FUN_004f68c0(0x40,puVar5,iVar2);
LAB_004e8848:
  uVar3 = FUN_0059fd70(local_4c);
  FUN_004c39d0(uVar3);
  if (((((param_1[3] == 0) || (iVar4 = FUN_004f65d0(), iVar4 == 0)) ||
       (iVar4 = FUN_004ffb70(), iVar4 == 0)) &&
      ((DAT_0073578c == 0 || (iVar4 = FUN_004ef050(0x58d36da2), iVar4 == 0)))) ||
     (*(int *)(iVar4 + 0x18) != 2)) {
    iVar4 = 0;
  }
  if ((DAT_006ee6f0 < 5) || (8 < DAT_006ee6f0)) {
    if ((param_1[3] == 0) ||
       ((iVar4 = FUN_004f65d0(), iVar4 == 0 || (iVar4 = FUN_004ffb70(), iVar4 == 0)))) {
      if (DAT_0073578c == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(0x58d36da2);
      }
    }
    FUN_004f6910(iVar4);
  }
  else {
    if (((param_1[3] == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
       (iVar2 = FUN_004ffb70(), iVar2 == 0)) {
      if (DAT_0073578c == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_004ef050(0x58d36da2);
      }
    }
    FUN_004f6970(iVar2);
    DAT_00733f2c = iVar4;
    DAT_00733f30 = FUN_005ab550(local_4c);
    DAT_00733f28 = 0xffffffff;
    _DAT_00733f40 = timeGetTime();
    FUN_004f68a0(&DAT_006b9172);
  }
  ExceptionList = local_c;
  return param_1;
}

