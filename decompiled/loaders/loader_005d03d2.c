/* Decompiled from Speed.exe @ 005d03d2 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __thiscall FUN_005d03d2(undefined4 *param_1,byte param_2)

{
  undefined4 *_Memory;
  
  if ((param_2 & 2) == 0) {
    FUN_005d03a3();
    _Memory = param_1;
    if ((param_2 & 1) != 0) {
      _free(param_1);
    }
  }
  else {
    _Memory = param_1 + -1;
    FUN_005b5e6c(param_1,0x3c,*_Memory,FUN_005d03a3);
    if ((param_2 & 1) != 0) {
      _free(_Memory);
    }
  }
  return _Memory;
}

