/* Decompiled from Speed.exe @ 00473f90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00473f90(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *_Memory;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  while (piVar1 != unaff_ESI) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _Memory = (void *)FUN_00549130(piVar1);
    _free(_Memory);
    piVar1 = (int *)*unaff_ESI;
  }
  return;
}

