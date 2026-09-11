/* Decompiled from Speed.exe @ 004fe350 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004fe350(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685438;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c181c;
  pvVar1 = (void *)param_1[5];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_004fe230);
    _free((void *)((int)pvVar1 + -4));
  }
  param_1[5] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = local_c;
  return;
}

