/* Decompiled from Speed.exe @ 004f6010 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6010(int param_1)

{
  int iVar1;
  void **ppvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685478;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) != -0xdc) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xe4);
    local_4 = 0;
    ppvVar2 = &local_c;
    for (; ExceptionList = ppvVar2, iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      FUN_004ffb00(iVar1);
      ppvVar2 = ExceptionList;
    }
  }
  ExceptionList = local_c;
  return;
}

