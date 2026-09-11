/* Decompiled from Speed.exe @ 004f50d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004f50d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068610b;
  local_c = ExceptionList;
  puVar2 = param_1 + 4;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c1b80;
  *puVar2 = puVar2;
  param_1[5] = puVar2;
  local_4 = 0;
  FUN_00514480();
  puVar2 = param_1 + 8;
  for (iVar1 = 0xd00; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}

