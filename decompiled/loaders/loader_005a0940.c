/* Decompiled from Speed.exe @ 005a0940 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * FUN_005a0940(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00684f6e;
  local_c = ExceptionList;
  iVar1 = 0;
  ExceptionList = &local_c;
  do {
    param_1[iVar1 + 0xb8] = 0;
    param_1[iVar1 + 0xc3] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xb);
  *param_1 = 0;
  param_1[0x113] = &PTR_LAB_006c6434;
  puVar2 = param_1 + 0x114;
  for (iVar1 = 900; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x498;
  for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  *(undefined1 *)((int)param_1 + 0x1371) = 0;
  puVar2 = param_1 + 0x498;
  for (iVar1 = 0x44; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x4ea,0x454,0x1b,FUN_00504150,FUN_0040a880);
  param_1[0x222c] = 0;
  *(undefined1 *)((int)param_1 + 0x889f) = 0;
  ExceptionList = local_c;
  return param_1;
}

