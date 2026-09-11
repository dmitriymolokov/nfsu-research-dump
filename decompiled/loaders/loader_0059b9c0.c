/* Decompiled from Speed.exe @ 0059b9c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0059b9c0(undefined4 param_1)

{
  int iVar1;
  void *_Memory;
  
  while( true ) {
    iVar1 = FUN_00401bd0(param_1);
    if (iVar1 != 0) break;
    _Memory = (void *)FUN_00401be0();
    _free(_Memory);
  }
  FUN_00549130(param_1);
  return;
}

