/* Decompiled from Speed.exe @ 004c30d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c30d0(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_LAB_006c55dc;
  FUN_004f84d0();
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

