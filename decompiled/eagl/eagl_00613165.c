/* Decompiled from Speed.exe @ 00613165 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_00613165(int param_1)

{
  int iVar1;
  undefined4 *_Memory;
  
  iVar1 = *(int *)(param_1 + 8);
  while (iVar1 != 0) {
    _Memory = *(undefined4 **)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = _Memory[4];
    if (((_Memory[2] & 8) != 0) || ((_Memory[2] & 1) == 0)) {
      _free((void *)*_Memory);
    }
    _free(_Memory);
    iVar1 = *(int *)(param_1 + 8);
  }
  return;
}

