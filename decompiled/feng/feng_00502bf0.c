/* Decompiled from Speed.exe @ 00502bf0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00502bf0(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int unaff_ESI;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b68;
  local_c = ExceptionList;
  pvVar1 = *(void **)(param_1 + 0x20);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    _eh_vector_destructor_iterator_(pvVar1,0x38,*(int *)((int)pvVar1 + -4),FUN_00502450);
    _free((void *)((int)pvVar1 + -4));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)(param_1 + 0x1c) = unaff_ESI;
  if (unaff_ESI != 0) {
    piVar2 = _malloc(unaff_ESI * 0x38 + 4);
    local_4 = 0;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = piVar2 + 1;
      *piVar2 = unaff_ESI;
      _eh_vector_constructor_iterator_
                (piVar3,0x38,unaff_ESI,(_func_void_void_ptr *)&LAB_005006f0,FUN_00502450);
    }
    *(int **)(param_1 + 0x20) = piVar3;
  }
  ExceptionList = local_c;
  return;
}

