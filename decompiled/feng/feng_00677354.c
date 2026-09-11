/* Decompiled from Speed.exe @ 00677354 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_00677354(int param_1)

{
  int *piVar1;
  void *_Memory;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = &DAT_006eb878 + param_1 * 2;
  if (*piVar1 != 0) {
    return 1;
  }
  _Memory = _malloc(0x18);
  if (_Memory == (void *)0x0) {
LAB_0067737b:
    puVar2 = (undefined4 *)FUN_00677f42();
    *puVar2 = 0xc;
    uVar3 = 0;
  }
  else {
    __lock(10);
    if (*piVar1 == 0) {
      iVar4 = ___crtInitCritSecAndSpinCount(_Memory,4000);
      if (iVar4 == 0) {
        _free(_Memory);
        FUN_0067733f(10);
        goto LAB_0067737b;
      }
      *piVar1 = (int)_Memory;
    }
    else {
      _free(_Memory);
    }
    FUN_0067733f(10);
    uVar3 = 1;
  }
  return uVar3;
}

