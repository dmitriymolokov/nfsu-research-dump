/* Decompiled from Speed.exe @ 004ded80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004ded80(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_006c37c8;
  DAT_007588f0 = (uint)(**(int **)(param_1[0x12] + 8) != 0);
  FUN_004aa4d0(1);
  FUN_004aa4d0(1);
  _Memory = (int *)param_1[0x10];
  while (_Memory != param_1 + 0x10) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)param_1[0x10];
  }
  FUN_004f7b50();
  return;
}

