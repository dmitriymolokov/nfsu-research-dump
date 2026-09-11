/* Decompiled from Speed.exe @ 00436d40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00436d40(void)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  _Memory = (int *)*unaff_ESI;
  while (_Memory != unaff_ESI) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)*unaff_ESI;
  }
  return;
}

