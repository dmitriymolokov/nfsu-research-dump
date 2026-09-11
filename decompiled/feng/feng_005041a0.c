/* Decompiled from Speed.exe @ 005041a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_005041a0(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  
  piVar1 = param_1 + 0xf;
  *param_1 = &PTR_FUN_006c01fc;
  _Memory = (int *)*piVar1;
  while (_Memory != piVar1) {
    iVar2 = *_Memory;
    piVar3 = (int *)_Memory[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(_Memory);
    _Memory = (int *)*piVar1;
  }
  FUN_00414b40();
  return;
}

