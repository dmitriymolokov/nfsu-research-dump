/* Decompiled from Speed.exe @ 00404cc0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00404cc0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *_Memory;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined1 *_Memory_00;
  int *_Memory_01;
  
  piVar1 = (int *)(param_1 + 0x30);
  _Memory = (int *)*piVar1;
  while (_Memory != piVar1) {
    iVar3 = *_Memory;
    piVar4 = (int *)_Memory[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    piVar4 = _Memory + 0x15;
    piVar5 = (int *)0x0;
    if ((int *)_Memory[0x14] != piVar4) {
      piVar5 = (int *)_Memory[0x14];
    }
    _Memory[0x14] = (int)piVar4;
    *(undefined1 *)piVar4 = 0;
    if (piVar5 != (int *)0x0) {
      _free(piVar5);
    }
    piVar4 = (int *)_Memory[0xf];
    while (piVar4 != _Memory + 0xf) {
      iVar3 = *piVar4;
      piVar5 = (int *)piVar4[1];
      *piVar5 = iVar3;
      *(int **)(iVar3 + 4) = piVar5;
      piVar5 = piVar4 + 3;
      _Memory_01 = (int *)0x0;
      if ((int *)piVar4[2] != piVar5) {
        _Memory_01 = (int *)piVar4[2];
      }
      piVar4[2] = (int)piVar5;
      *(undefined1 *)piVar5 = 0;
      if (_Memory_01 != (int *)0x0) {
        _free(_Memory_01);
      }
      _free(piVar4);
      piVar4 = (int *)_Memory[0xf];
    }
    piVar4 = _Memory + 5;
    piVar5 = (int *)0x0;
    if ((int *)_Memory[4] != piVar4) {
      piVar5 = (int *)_Memory[4];
    }
    _Memory[4] = (int)piVar4;
    *(undefined1 *)piVar4 = 0;
    if (piVar5 != (int *)0x0) {
      _free(piVar5);
    }
    _free(_Memory);
    _Memory = (int *)*piVar1;
  }
  puVar2 = (undefined1 *)(param_1 + 0xc);
  _Memory_00 = (undefined1 *)0x0;
  if (*(undefined1 **)(param_1 + 8) != puVar2) {
    _Memory_00 = *(undefined1 **)(param_1 + 8);
  }
  *(undefined1 **)(param_1 + 8) = puVar2;
  *puVar2 = 0;
  if (_Memory_00 != (undefined1 *)0x0) {
    _free(_Memory_00);
  }
  return;
}

