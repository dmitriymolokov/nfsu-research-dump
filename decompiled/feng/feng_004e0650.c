/* Decompiled from Speed.exe @ 004e0650 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004e0650(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  
  piVar1 = param_1 + 1;
  *param_1 = &PTR_LAB_006c36c4;
  _Memory = (int *)*piVar1;
  while (_Memory != piVar1) {
    iVar2 = *_Memory;
    piVar3 = (int *)_Memory[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(_Memory);
    _Memory = (int *)*piVar1;
  }
  return;
}

