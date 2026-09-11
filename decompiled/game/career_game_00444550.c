/* Decompiled from Speed.exe @ 00444550 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_00444550(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *_Memory;
  
  _Memory = *(int **)(param_1 + 0x590);
  if (_Memory != (int *)(param_1 + 0x590)) {
    while (param_2 != (short)_Memory[2]) {
      _Memory = (int *)*_Memory;
      if (_Memory == (int *)(param_1 + 0x590)) {
        return;
      }
    }
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
  }
  return;
}

