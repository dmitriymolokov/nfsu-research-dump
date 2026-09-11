/* Decompiled from Speed.exe @ 004f9340 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f9340(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 8);
  piVar2 = *(int **)(param_1 + 8);
  while (piVar2 != piVar1) {
    piVar2 = (int *)*piVar1;
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_0048edf0();
    _free(piVar2);
    piVar2 = (int *)*piVar1;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

