/* Decompiled from Speed.exe @ 005028d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_005028d0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006858a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c17f0;
  pvVar1 = (void *)param_1[8];
  local_4 = 1;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_00502450);
    _free((void *)((int)pvVar1 + -4));
  }
  param_1[8] = 0;
  if ((void *)param_1[0xb] != (void *)0x0) {
    _free((void *)param_1[0xb]);
  }
  param_1[0xb] = 0;
  _free((void *)param_1[10]);
  param_1[10] = 0;
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = local_c;
  return;
}

