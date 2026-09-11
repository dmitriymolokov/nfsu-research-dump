/* Decompiled from Speed.exe @ 005a4f40 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_005a4f40(undefined4 *param_1)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  
  _Memory = (void *)param_1[0x2a];
  *param_1 = &PTR_FUN_006b7efc;
  if (_Memory != (void *)0x0) {
    if (*(char *)((int)_Memory + 0x19) != '\0') {
      _free(*(void **)((int)_Memory + 0x20));
    }
    _free(_Memory);
  }
  piVar1 = param_1 + 2;
  iVar2 = 0x28;
  do {
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

