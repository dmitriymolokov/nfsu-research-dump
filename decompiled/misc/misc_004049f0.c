/* Decompiled from Speed.exe @ 004049f0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_004049f0(int *param_1)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  
  _Memory = (int *)*param_1;
  while (_Memory != param_1) {
    piVar1 = (int *)_Memory[1];
    iVar2 = *_Memory;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_00401db0();
    _free(_Memory);
    _Memory = (int *)*param_1;
  }
  return;
}

