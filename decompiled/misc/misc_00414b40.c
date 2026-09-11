/* Decompiled from Speed.exe @ 00414b40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_00414b40(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  
  piVar1 = param_1 + 0xc;
  *param_1 = &PTR_FUN_006cbe88;
  _Memory = (int *)*piVar1;
  while (_Memory != piVar1) {
    iVar2 = *_Memory;
    piVar3 = (int *)_Memory[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(_Memory);
    _Memory = (int *)*piVar1;
  }
  *param_1 = &PTR_LAB_006cbe74;
  return;
}

