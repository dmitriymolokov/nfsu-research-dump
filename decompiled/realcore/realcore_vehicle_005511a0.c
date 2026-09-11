/* Decompiled from Speed.exe @ 005511a0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005511a0(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006bce70;
  pvVar2 = (void *)param_1[0x1e8];
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    FUN_00550b40();
    _free(pvVar2);
  }
  param_1[0x1e8] = 0;
  pvVar2 = DAT_00734f6c;
  if (param_1[0x1e9] != 0) {
    if (DAT_00734f6c != (void *)0x0) {
      piVar1 = (int *)((int)DAT_00734f6c + 8);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        DAT_0073d8c8 = 0;
        DAT_0073d8c4 = 0;
        if (*(void **)((int)pvVar2 + 0x14) != (void *)0x0) {
          _free(*(void **)((int)pvVar2 + 0x14));
        }
        *(undefined4 *)((int)pvVar2 + 0x18) = 0;
        _eh_vector_destructor_iterator_((void *)((int)pvVar2 + 0x1c),0xc,0x20,FUN_00504010);
        _free(pvVar2);
        DAT_00734f6c = (void *)0x0;
      }
      else {
        *(undefined1 *)((int)pvVar2 + 5) = 0;
      }
    }
    param_1[0x1e9] = 0;
  }
  DAT_007363b3 = 0;
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_c;
  return;
}

