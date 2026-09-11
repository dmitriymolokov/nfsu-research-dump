/* Decompiled from Speed.exe @ 005a49f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005a49f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *_Memory;
  
  piVar1 = DAT_0073739c;
  piVar3 = (int *)FUN_0040a880();
  do {
    _Memory = (int *)0x0;
    if (piVar1 == piVar3) {
LAB_005a4a2c:
      FUN_00565ce0();
      if (_Memory != (int *)0x0) {
        _free(_Memory);
      }
      return 1;
    }
    if (param_1 == piVar1[3]) {
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      _Memory = piVar1;
      goto LAB_005a4a2c;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

