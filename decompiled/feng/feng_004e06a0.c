/* Decompiled from Speed.exe @ 004e06a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004e06a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  *param_1 = &PTR_FUN_006c36b4;
  piVar1 = param_1 + 0x1a;
  param_1[0x19] = &PTR_LAB_006c36c4;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    _free(piVar2);
    piVar2 = (int *)*piVar1;
  }
  piVar1 = param_1 + 0x11;
  param_1[0x10] = &PTR_LAB_006c36c4;
  piVar2 = (int *)*piVar1;
  while (piVar2 != piVar1) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    _free(piVar2);
    piVar2 = (int *)*piVar1;
  }
  FUN_004f7b50();
  return;
}

