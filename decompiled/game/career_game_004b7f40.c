/* Decompiled from Speed.exe @ 004b7f40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 * FUN_004b7f40(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_006c5dcc;
  if (param_1[3] == 0) {
LAB_004b7f96:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xa9464188);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004b7f96;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004b7f96;
  }
  FUN_004f6910(iVar1);
  if (param_1[3] != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004b7ff9;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0x13dccc51);
  }
LAB_004b7ff9:
  FUN_004f6910(iVar1);
  FUN_004b8750(param_1,0);
  ExceptionList = local_c;
  return param_1;
}

