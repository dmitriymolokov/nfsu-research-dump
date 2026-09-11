/* Decompiled from Speed.exe @ 004fe3d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fe3d0(int param_1,uint *param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684b48;
  local_c = ExceptionList;
  if (param_2 != (uint *)*(uint *)(param_1 + 0x10)) {
    iVar5 = 0;
    if (param_2 == (uint *)0x0) {
      pvVar1 = *(void **)(param_1 + 0x14);
      if (pvVar1 != (void *)0x0) {
        ExceptionList = &local_c;
        _eh_vector_destructor_iterator_
                  (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_004fe230);
        _free((void *)((int)pvVar1 + -4));
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      ExceptionList = &local_c;
      puVar4 = _malloc((int)param_2 * 0xc + 4);
      local_4 = 0;
      if (puVar4 == (uint *)0x0) {
        param_2 = (uint *)0x0;
      }
      else {
        *puVar4 = (uint)param_2;
        _eh_vector_constructor_iterator_
                  (puVar4 + 1,0xc,(int)param_2,(_func_void_void_ptr *)&LAB_004fe1d0,
                   (_func_void_void_ptr *)&LAB_004fe230);
        param_2 = puVar4 + 1;
      }
      local_4 = 0xffffffff;
      uVar2 = *(uint *)(param_1 + 0x10);
      if (uVar3 < *(uint *)(param_1 + 0x10)) {
        uVar2 = uVar3;
      }
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        FUN_004fe260(*(int *)(param_1 + 0x14) + iVar5);
        iVar5 = iVar5 + 0xc;
      }
      pvVar1 = *(void **)(param_1 + 0x14);
      if (pvVar1 != (void *)0x0) {
        _eh_vector_destructor_iterator_
                  (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_004fe230);
        _free((void *)((int)pvVar1 + -4));
      }
      *(uint **)(param_1 + 0x14) = param_2;
      *(uint *)(param_1 + 0x10) = uVar3;
    }
  }
  ExceptionList = local_c;
  return;
}

