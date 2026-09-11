/* Decompiled from Speed.exe @ 0047cd70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0047cd70(void)

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
    FUN_0047b0b0(_Memory);
    _free(_Memory);
    _Memory = (int *)*unaff_EDI;
  }
  return;
}

