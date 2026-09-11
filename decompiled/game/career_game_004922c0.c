/* Decompiled from Speed.exe @ 004922c0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004922c0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int extraout_EDX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685b5d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c7b50;
  local_4 = 4;
  if (param_1[8] != 0) {
    _DAT_0073654c = 0;
  }
  _free((void *)param_1[0xb]);
  _free((void *)param_1[0xd]);
  _free((void *)param_1[0xf]);
  _free((void *)param_1[0xc]);
  _free((void *)param_1[0xe]);
  _free((void *)param_1[0x10]);
  _free((void *)param_1[0x11]);
  iVar3 = param_1[0x104];
  if (0 < iVar3) {
    piVar2 = param_1 + 100;
    do {
      *(char *)(*piVar2 + 8) = *(char *)(*piVar2 + 8) + -1;
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00490730();
  pvVar1 = *(void **)(extraout_EDX + 0xc);
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0xc0,*(int *)((int)pvVar1 + -0x10),FUN_00401db0);
    _free((void *)((int)pvVar1 + -0x10));
  }
  if ((void *)param_1[0x43] != (void *)0x0) {
    _free((void *)param_1[0x43]);
  }
  if ((void *)param_1[0x4a] != (void *)0x0) {
    _free((void *)param_1[0x4a]);
  }
  if ((void *)param_1[0x37] != (void *)0x0) {
    _free((void *)param_1[0x37]);
  }
  if ((void *)param_1[0x3e] != (void *)0x0) {
    _free((void *)param_1[0x3e]);
  }
  if ((void *)param_1[0x2b] != (void *)0x0) {
    _free((void *)param_1[0x2b]);
  }
  if ((void *)param_1[0x32] != (void *)0x0) {
    _free((void *)param_1[0x32]);
  }
  if ((void *)param_1[0x1f] != (void *)0x0) {
    _free((void *)param_1[0x1f]);
  }
  if ((void *)param_1[0x26] != (void *)0x0) {
    _free((void *)param_1[0x26]);
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
    param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
    iVar3 = param_1[1];
    piVar2 = (int *)param_1[2];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_00408370();
  }
  ExceptionList = local_c;
  return;
}

