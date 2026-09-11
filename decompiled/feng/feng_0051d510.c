/* Decompiled from Speed.exe @ 0051d510 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_0051d510(undefined4 param_1)

{
  void *pvVar1;
  int *piVar2;
  int unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685866;
  local_c = ExceptionList;
  if ((DAT_006f1dd8 != 0) && (*(int *)(unaff_ESI + 0xcc) < 2)) {
    if (*(int *)(unaff_ESI + 0xcc) == 0) {
      ExceptionList = &local_c;
      pvVar1 = _malloc(0x1fa0);
      local_4 = 0;
      if (pvVar1 == (void *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_00525c10(pvVar1);
      }
      pvVar1 = (void *)(*(int *)(unaff_ESI + 0xe0) + *(int *)(unaff_ESI + 0xcc));
      *(int **)(unaff_ESI + 0xc4) = piVar2;
      local_4 = 0xffffffff;
      (**(code **)(*piVar2 + 0x2c))(param_1);
      DAT_007356b0 = *(int *)(unaff_ESI + 0xe0) + *(int *)(unaff_ESI + 0xcc);
      (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xc4) + 0x20) + 0x10))(&DAT_006f41f0);
      (**(code **)(*(int *)(*(int *)(unaff_ESI + 0xc4) + 0x20) + 0x24))();
      *(undefined4 *)(unaff_ESI + 0xcc) = 1;
      (**(code **)(**(int **)(unaff_ESI + 0xc4) + 0x34))();
      ExceptionList = pvVar1;
      return *(undefined4 *)(unaff_ESI + 0xc4);
    }
    ExceptionList = &local_c;
    pvVar1 = _malloc(0x1fa0);
    local_4 = 1;
    if (pvVar1 == (void *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00525c10(pvVar1);
    }
    pvVar1 = (void *)(*(int *)(unaff_ESI + 0xe0) + *(int *)(unaff_ESI + 0xcc));
    *(int **)(unaff_ESI + 200) = piVar2;
    local_4 = 0xffffffff;
    (**(code **)(*piVar2 + 0x2c))(param_1);
    _DAT_007356b4 = *(int *)(unaff_ESI + 0xe0) + *(int *)(unaff_ESI + 0xcc);
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 200) + 0x20) + 0x10))(&DAT_006f41f0);
    (**(code **)(*(int *)(*(int *)(unaff_ESI + 200) + 0x20) + 0x24))();
    *(undefined4 *)(unaff_ESI + 0xcc) = 2;
    (**(code **)(**(int **)(unaff_ESI + 200) + 0x34))();
    ExceptionList = pvVar1;
    return *(undefined4 *)(unaff_ESI + 200);
  }
  return 0;
}

