/* Decompiled from Speed.exe @ 005cb13e */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005cb13e(undefined4 *param_1,byte param_2)

{
  undefined4 *_Memory;
  
  if ((param_2 & 2) == 0) {
    FUN_005cd1d4();
    _Memory = param_1;
    if ((param_2 & 1) != 0) {
      _free(param_1);
    }
  }
  else {
    _Memory = param_1 + -1;
    FUN_005b5e6c(param_1,0x20,*_Memory,FUN_005cd1d4);
    if ((param_2 & 1) != 0) {
      _free(_Memory);
    }
  }
  return _Memory;
}

