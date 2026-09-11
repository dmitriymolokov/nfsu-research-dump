/* Decompiled from Speed.exe @ 004bd370 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004bd370(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  *param_1 = &PTR_FUN_006c5b04;
  local_4 = 0;
  if (DAT_00777cc8 == 5) {
    FUN_004bd5e0();
  }
  else {
    FUN_004bd580();
  }
  iVar3 = param_1[3];
  uVar2 = FUN_004fd230();
  if (iVar3 == 0) {
LAB_004bd3e5:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(uVar2);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004bd3e5;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004bd3e5;
  }
  iVar1 = param_1[3];
  param_1[0x10] = iVar3;
  uVar2 = FUN_004fd230();
  if (iVar1 != 0) {
    iVar3 = FUN_004f65d0();
    if (iVar3 != 0) {
      iVar3 = FUN_004ffb70();
      if (iVar3 != 0) goto LAB_004bd443;
    }
  }
  if (DAT_0073578c == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_004ef050(uVar2);
  }
LAB_004bd443:
  param_1[0x11] = iVar3;
  ExceptionList = local_c;
  return param_1;
}

