/* Decompiled from Speed.exe @ 00578660 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00578660(int param_1)

{
  int *_Memory;
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  int unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685f33;
  local_c = ExceptionList;
  _Memory = *(int **)(unaff_EDI + 0x48);
  ExceptionList = &local_c;
  if (_Memory != (int *)0x0) {
    piVar1 = (int *)_Memory[1];
    iVar2 = *_Memory;
    ExceptionList = &local_c;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    iVar2 = FUN_00647b70();
    if ((iVar2 == 4) && ((void *)_Memory[0x74] != (void *)0x0)) {
      _free((void *)_Memory[0x74]);
    }
    _free(_Memory);
    *(undefined4 *)(unaff_EDI + 0x48) = 0;
  }
  if (param_1 != 0) {
    pvVar3 = _malloc(0x1e0);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0057a420(unaff_EDI);
    }
    *(undefined4 *)(unaff_EDI + 0x48) = uVar4;
  }
  ExceptionList = local_c;
  return;
}

