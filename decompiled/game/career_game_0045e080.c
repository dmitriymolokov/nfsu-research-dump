/* Decompiled from Speed.exe @ 0045e080 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0045e080(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006859c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c8c18;
  pvVar1 = (void *)param_1[0x8c];
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_0045da90();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x8d];
  if (pvVar1 != (void *)0x0) {
    FUN_0045da90();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x8e];
  if (pvVar1 != (void *)0x0) {
    FUN_0045da90();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x8f];
  if (pvVar1 != (void *)0x0) {
    FUN_0045da90();
    _free(pvVar1);
  }
  pvVar1 = (void *)param_1[0x90];
  if (pvVar1 != (void *)0x0) {
    FUN_0045da90();
    _free(pvVar1);
  }
  puVar2 = (undefined4 *)param_1[0x91];
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00591c90(puVar2);
    iVar4 = DAT_007344c8;
    iVar3 = *(int *)(DAT_007344c8 + 0x18);
    *puVar2 = *(undefined4 *)(DAT_007344c8 + 0x10);
    *(int *)(iVar4 + 0x18) = iVar3 + -1;
    *(undefined4 **)(iVar4 + 0x10) = puVar2;
  }
  if (*(int **)(param_1[0x7c] + 0x878) != (int *)0x0) {
    (**(code **)(**(int **)(param_1[0x7c] + 0x878) + 0x4c))();
  }
  *param_1 = &PTR_FUN_006caa58;
  ExceptionList = local_c;
  return;
}

