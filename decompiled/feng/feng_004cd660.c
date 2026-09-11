/* Decompiled from Speed.exe @ 004cd660 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004cd660(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  iVar1 = DAT_007361f0;
  *param_1 = &PTR_FUN_006c41c8;
  param_1[0x10] = 0;
  iVar1 = *(int *)(iVar1 + 0x1c);
  local_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else if (iVar1 == 2) {
    uVar2 = 4;
  }
  else {
    uVar2 = (iVar1 != 3) - 1 & 8;
  }
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x1c) = uVar2;
  }
  if (param_1[3] == 0) {
LAB_004cd701:
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(0xa9464188);
    }
  }
  else {
    iVar1 = FUN_004f65d0();
    if (iVar1 == 0) goto LAB_004cd701;
    iVar1 = FUN_004ffb70();
    if (iVar1 == 0) goto LAB_004cd701;
  }
  FUN_004f6910(iVar1);
  if (param_1[3] != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_004cd764;
    }
  }
  if (DAT_0073578c == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004ef050(0x13dccc51);
  }
LAB_004cd764:
  FUN_004f6910(iVar1);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  *(undefined1 *)((int)param_1 + 0x6f) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x10] = DAT_0073ad3c;
  FUN_004cdea0();
  ExceptionList = local_c;
  return param_1;
}

