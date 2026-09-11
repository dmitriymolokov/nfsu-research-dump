/* Decompiled from Speed.exe @ 0047ced0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0047ced0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *_Memory;
  
  _Memory = DAT_00779798;
  if (*param_1 != 0xe34010) {
    return 0;
  }
  piVar2 = (int *)FUN_0040a880();
  if (_Memory != piVar2) {
    while ((int *)_Memory[0xd] != param_1) {
      _Memory = (int *)*_Memory;
      if (_Memory == piVar2) {
        return 1;
      }
    }
    FUN_0047afc0();
    iVar1 = *_Memory;
    piVar2 = (int *)_Memory[1];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    _free(_Memory);
  }
  return 1;
}

