/* Decompiled from Speed.exe @ 004f81a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004f81a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068683b;
  local_c = ExceptionList;
  puVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c7ad4;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  local_4 = 0;
  uVar3 = FUN_004fd230();
  if (DAT_0073578c == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004ef050(uVar3);
  }
  iVar2 = DAT_0073578c;
  param_1[4] = uVar3;
  uVar3 = FUN_004fd230();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004ef050(uVar3);
  }
  param_1[5] = uVar3;
  param_1[3] = 0;
  ExceptionList = local_c;
  return param_1;
}

