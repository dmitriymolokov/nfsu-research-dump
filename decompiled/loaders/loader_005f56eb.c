/* Decompiled from Speed.exe @ 005f56eb */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005f56eb(undefined4 *param_1)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_006a3da8;
  _free((void *)param_1[3]);
  piVar1 = param_1 + 4;
  iVar2 = 0xb;
  do {
    while (*piVar1 != 0) {
      _Memory = (void *)*piVar1;
      *piVar1 = *(int *)((int)_Memory + 0x24);
      _free(_Memory);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

