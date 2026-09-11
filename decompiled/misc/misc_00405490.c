/* Decompiled from Speed.exe @ 00405490 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00405490(void)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  int *unaff_EDI;
  
  _Memory = (int *)*unaff_EDI;
  while (_Memory != unaff_EDI) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_004054f0();
    _free(_Memory);
    _Memory = (int *)*unaff_EDI;
  }
  return;
}

