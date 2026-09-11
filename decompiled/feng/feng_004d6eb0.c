/* Decompiled from Speed.exe @ 004d6eb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d6eb0(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068612b;
  local_c = ExceptionList;
  local_4 = 0;
  DAT_0073570c = 0;
  ExceptionList = &local_c;
  _free((void *)*param_1);
  if (DAT_0073578c != 0) {
    FUN_004f6010(DAT_0073578c);
  }
  FUN_00567000(DAT_00735708);
  _Memory = (int *)param_1[3];
  while (_Memory != param_1 + 3) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)param_1[3];
  }
  ExceptionList = local_c;
  return;
}

