/* Decompiled from Speed.exe @ 0051d6b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_0051d6b0(undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685836;
  local_c = ExceptionList;
  if (((DAT_006f1dd8 != 0) && (DAT_006f1df0 != 0)) && (*(int *)(unaff_EDI + 0xe0) < 4)) {
    if (*(int *)(unaff_EDI + 0xe0) == 0) {
      ExceptionList = &local_c;
      pvVar1 = _malloc(0x1fe0);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_00523420();
      }
      pvVar1 = (void *)(*(int *)(unaff_EDI + 0xcc) + *(int *)(unaff_EDI + 0xe0));
      *(int **)(unaff_EDI + 0xd0) = piVar2;
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x2c))(param_1);
      (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xd0) + 0x20) + 0x10))(&DAT_006f4260);
      (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xd0) + 0x20) + 0x24))();
      *(undefined4 *)(unaff_EDI + 0xe0) = 1;
      (**(code **)(**(int **)(unaff_EDI + 0xd0) + 0x34))();
      ExceptionList = pvVar1;
      return *(undefined4 *)(unaff_EDI + 0xd0);
    }
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x1fe0);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00523420();
    }
    *(undefined4 *)(unaff_EDI + 0xd0 + *(int *)(unaff_EDI + 0xe0) * 4) = uVar3;
    pvVar1 = (void *)(*(int *)(unaff_EDI + 0xcc) + *(int *)(unaff_EDI + 0xe0));
    local_4 = 0xffffffff;
    (**(code **)(**(int **)(unaff_EDI + 0xd0 + *(int *)(unaff_EDI + 0xe0) * 4) + 0x2c))(param_1);
    (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xd0 + *(int *)(unaff_EDI + 0xe0) * 4) + 0x20) + 0x10
                ))(&DAT_006f4260);
    (**(code **)(*(int *)(*(int *)(unaff_EDI + 0xd0 + *(int *)(unaff_EDI + 0xe0) * 4) + 0x20) + 0x24
                ))();
    (**(code **)(**(int **)(unaff_EDI + 0xd0 + *(int *)(unaff_EDI + 0xe0) * 4) + 0x34))();
    uVar3 = *(undefined4 *)(unaff_EDI + 0xd0 + *(int *)(unaff_EDI + 0xe0) * 4);
    *(int *)(unaff_EDI + 0xe0) = *(int *)(unaff_EDI + 0xe0) + 1;
    ExceptionList = pvVar1;
    return uVar3;
  }
  return 0;
}

