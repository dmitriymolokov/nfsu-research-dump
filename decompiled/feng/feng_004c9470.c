/* Decompiled from Speed.exe @ 004c9470 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c9470(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *_Memory;
  int iVar3;
  int *piVar4;
  undefined4 *unaff_EDI;
  
  puVar1 = unaff_EDI + 1;
  puVar2 = (undefined4 *)unaff_EDI[1];
  while (puVar2 != puVar1) {
    _Memory = (int *)*puVar1;
    iVar3 = *_Memory;
    piVar4 = (int *)_Memory[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    _free(_Memory);
    puVar2 = (undefined4 *)*puVar1;
  }
  *unaff_EDI = 0;
  return;
}

