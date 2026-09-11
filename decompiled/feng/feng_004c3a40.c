/* Decompiled from Speed.exe @ 004c3a40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004c3a40(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c5488;
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar1 = FUN_004f3f90(&DAT_00746104);
  iVar3 = DAT_0073578c;
  if ((((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) &&
      (bVar5 = DAT_0073578c != 0, *(undefined1 *)(param_1 + 0x10) = 1, bVar5)) &&
     ((iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0 && (*(int *)(iVar1 + 0x18) != 0)))) {
    FUN_004eebf0(*(undefined4 *)(iVar3 + 8),*(int *)(iVar1 + 0x18));
  }
  pcVar4 = "";
  if (DAT_006faefc == 6) {
    pcVar4 = "DRIFT";
  }
  else if (DAT_006faefc == 5) {
    pcVar4 = "ENG_DRAG";
  }
  uVar2 = FUN_0059fd70(pcVar4);
  FUN_004c39d0(uVar2);
  if ((4 < DAT_006ee6f0) && (DAT_006ee6f0 < 9)) {
    if (((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
       (iVar3 = FUN_004ffb70(), iVar3 == 0)) {
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x58d36da2);
      }
    }
    FUN_004f6970(iVar3);
    if (((((param_1[3] == 0) || (iVar3 = FUN_004f65d0(), iVar3 == 0)) ||
         (iVar3 = FUN_004ffb70(), iVar3 == 0)) &&
        ((DAT_0073578c == 0 || (iVar3 = FUN_004ef050(0x58d36da2), iVar3 == 0)))) ||
       (*(int *)(iVar3 + 0x18) != 2)) {
      iVar3 = 0;
    }
    DAT_00733f2c = iVar3;
    DAT_00733f30 = FUN_005ab550(pcVar4);
    DAT_00733f28 = 0xffffffff;
    _DAT_00733f40 = timeGetTime();
    FUN_004f68a0(&DAT_006b9172);
    ExceptionList = local_c;
    return param_1;
  }
  if ((param_1[3] == 0) ||
     ((iVar3 = FUN_004f65d0(), iVar3 == 0 || (iVar3 = FUN_004ffb70(), iVar3 == 0)))) {
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x58d36da2);
    }
  }
  FUN_004f6910(iVar3);
  ExceptionList = local_c;
  return param_1;
}

