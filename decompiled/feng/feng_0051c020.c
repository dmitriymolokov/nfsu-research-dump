/* Decompiled from Speed.exe @ 0051c020 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_0051c020(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = param_1 + 0xf;
  *param_1 = &PTR_FUN_006bf634;
  piVar1 = (int *)*piVar4;
  while (piVar1 != piVar4) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)*piVar4;
  }
  piVar4 = (int *)param_1[0xd];
  while (piVar4 != param_1 + 0xd) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[0xd];
  }
  piVar4 = (int *)param_1[0xb];
  while (piVar4 != param_1 + 0xb) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[0xb];
  }
  piVar4 = (int *)param_1[9];
  while (piVar4 != param_1 + 9) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[9];
  }
  piVar4 = (int *)param_1[7];
  while (piVar4 != param_1 + 7) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[7];
  }
  piVar4 = (int *)param_1[5];
  while (piVar4 != param_1 + 5) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[5];
  }
  piVar4 = (int *)param_1[3];
  while (piVar4 != param_1 + 3) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[3];
  }
  piVar4 = (int *)param_1[1];
  while (piVar4 != param_1 + 1) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    _free(piVar4);
    piVar4 = (int *)param_1[1];
  }
  return;
}

