/* Decompiled from Speed.exe @ 00589f00 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00589f00(void)

{
  int *_Memory;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = DAT_00737bcc;
  piVar4 = (int *)FUN_0040a880();
  while (piVar2 = piVar1, piVar2 != piVar4) {
    _Memory = (int *)piVar2[2];
    piVar1 = (int *)*piVar2;
    if (_Memory[4] != 1) {
      piVar2 = (int *)piVar2[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      FUN_0041f570();
      piVar2 = (int *)_Memory[1];
      iVar3 = *_Memory;
      *piVar2 = iVar3;
      *(int **)(iVar3 + 4) = piVar2;
      DAT_0078ea30 = DAT_0078ea30 + -1;
      FUN_00401db0();
      _free(_Memory);
    }
  }
  return;
}

