/* Decompiled from Speed.exe @ 004b67c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_004b67c0(undefined4 *param_1)

{
  int *piVar1;
  int *_Memory;
  int iVar2;
  int *piVar3;
  
  piVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_006c5ecc;
  _Memory = (int *)*piVar1;
  while (_Memory != piVar1) {
    iVar2 = *_Memory;
    piVar3 = (int *)_Memory[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(_Memory);
    _Memory = (int *)*piVar1;
  }
  FUN_004f7b50();
  return;
}

