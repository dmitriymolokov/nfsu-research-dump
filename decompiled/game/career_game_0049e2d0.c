/* Decompiled from Speed.exe @ 0049e2d0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0049e2d0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *_Memory;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_00686cb6;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c7584;
  puVar2 = (undefined4 *)param_1[1];
  local_4 = 1;
  for (; puVar2 != param_1 + 1; puVar2 = (undefined4 *)*puVar2) {
    if (((DAT_0073578c != 0) && (iVar4 = FUN_004f3f90(&DAT_00746104), iVar4 != 0)) &&
       (*(int *)(iVar4 + 0x18) != 0)) {
      *(undefined1 *)(*(int *)(iVar4 + 0x18) + 0x15) = 0;
    }
  }
  piVar1 = param_1 + 5;
  param_1[4] = &PTR_LAB_006c75c8;
  _Memory = (int *)*piVar1;
  while (_Memory != piVar1) {
    iVar4 = *_Memory;
    piVar3 = (int *)_Memory[1];
    *piVar3 = iVar4;
    *(int **)(iVar4 + 4) = piVar3;
    _free(_Memory);
    _Memory = (int *)*piVar1;
  }
  local_4 = 0xffffffff;
  FUN_00421900();
  ExceptionList = local_c;
  return;
}

