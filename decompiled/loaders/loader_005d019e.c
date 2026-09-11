/* Decompiled from Speed.exe @ 005d019e */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005d019e(undefined4 *param_1,byte param_2)

{
  undefined4 *_Memory;
  
  if ((param_2 & 2) == 0) {
    FUN_005cd25f();
    _Memory = param_1;
    if ((param_2 & 1) != 0) {
      _free(param_1);
    }
  }
  else {
    _Memory = param_1 + -1;
    FUN_005b5e6c(param_1,0xac,*_Memory,FUN_005cd25f);
    if ((param_2 & 1) != 0) {
      _free(_Memory);
    }
  }
  return _Memory;
}

