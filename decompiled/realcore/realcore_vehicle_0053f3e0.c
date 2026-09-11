/* Decompiled from Speed.exe @ 0053f3e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


undefined4 FUN_0053f3e0(undefined4 param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *_Memory;
  int unaff_EDI;
  
  _Memory = (int *)FUN_0053e4f0(unaff_EDI,param_1);
  if (_Memory == (int *)0x0) {
    return 0;
  }
  piVar2 = _Memory + 0x2c;
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined1 *)((int)_Memory + 0x8b) = 0;
    FUN_0053ed20(unaff_EDI);
    (**(code **)(unaff_EDI + 0x14))(_Memory);
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    if (_Memory[0x25] != 0) {
      FUN_00565ce0();
    }
    if (_Memory[0x26] != 0) {
      FUN_00448370();
    }
    _free(_Memory);
    *(int *)(unaff_EDI + 0x2c) = *(int *)(unaff_EDI + 0x2c) + -1;
    if (param_2 != (code *)0x0) {
      (*param_2)(param_3);
    }
  }
  return 1;
}

