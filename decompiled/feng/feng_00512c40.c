/* Decompiled from Speed.exe @ 00512c40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_00512c40(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR_FUN_006c018c;
  FUN_004f84d0();
  _Memory = (int *)param_1[0x11];
  while (_Memory != param_1 + 0x11) {
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
    _Memory = (int *)param_1[0x11];
  }
  FUN_004f7b50();
  return;
}

