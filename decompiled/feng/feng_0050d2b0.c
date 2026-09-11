/* Decompiled from Speed.exe @ 0050d2b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_0050d2b0(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068731e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c01bc;
  local_4 = 2;
  FUN_00504450();
  FUN_004f84d0();
  _Memory = (int *)param_1[0x11];
  while (_Memory != param_1 + 0x11) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)param_1[0x11];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

