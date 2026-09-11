/* Decompiled from Speed.exe @ 005dbe7e */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005dbe7e(undefined4 param_1,int param_2,int param_3)

{
  uint *_Memory;
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  _Memory = _malloc(param_3 << 2);
  if (_Memory == (uint *)0x0) {
    uVar1 = 0x8007000e;
  }
  else {
    FUN_005da405(param_1,_Memory);
    if (param_3 != 0) {
      puVar3 = _Memory;
      do {
        iVar2 = FUN_005f762c(*(undefined4 *)((param_2 - (int)_Memory) + (int)puVar3));
        *(uint *)(iVar2 + 0x18) = *(uint *)(iVar2 + 0x18) | *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    _free(_Memory);
    uVar1 = 0;
  }
  return uVar1;
}

