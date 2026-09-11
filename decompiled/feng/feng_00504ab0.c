/* Decompiled from Speed.exe @ 00504ab0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_00504ab0(undefined4 *param_1)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068731e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c0264;
  local_4 = 2;
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0xa1f0e37d,0,0,*(int *)(iVar2 + 0x18));
  }
  FUN_004f84d0();
  _Memory = (int *)param_1[0x11];
  while (_Memory != param_1 + 0x11) {
    iVar2 = *_Memory;
    piVar1 = (int *)_Memory[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(_Memory);
    _Memory = (int *)param_1[0x11];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

