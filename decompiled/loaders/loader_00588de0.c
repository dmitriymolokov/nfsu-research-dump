/* Decompiled from Speed.exe @ 00588de0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_00588de0(int *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  
  _Memory = (int *)*param_1;
  while (_Memory != param_1) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)*param_1;
  }
  return;
}

