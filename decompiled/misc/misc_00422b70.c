/* Decompiled from Speed.exe @ 00422b70 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00422b70(void)

{
  int iVar1;
  int *piVar2;
  int *_Memory;
  
  _Memory = (int *)*DAT_007361f8;
  if (_Memory != DAT_007361f8) {
    do {
      iVar1 = *_Memory;
      piVar2 = (int *)_Memory[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      FUN_00425990(_Memory);
      _free(_Memory);
      _Memory = (int *)*DAT_007361f8;
    } while (_Memory != DAT_007361f8);
  }
  return;
}

