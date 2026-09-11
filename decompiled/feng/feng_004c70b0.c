/* Decompiled from Speed.exe @ 004c70b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c70b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068731e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c51b4;
  local_4 = 2;
  if ((*(int *)(DAT_007356a8 + 0x104) != 0) &&
     (piVar1 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x24), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 0xa0))();
  }
  FUN_004f84d0();
  piVar1 = (int *)param_1[0x11];
  while (piVar1 != param_1 + 0x11) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    _free(piVar1);
    piVar1 = (int *)param_1[0x11];
  }
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

