/* Decompiled from Speed.exe @ 004d4a20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004d4a20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00688276;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c3e2c;
  iVar2 = DAT_007356a8;
  local_4 = 1;
  FUN_00520e90(DAT_007356a8,0,1);
  if (DAT_006f1dd8 != 0) {
    if ((*(int *)(iVar2 + 0x104) != 0) &&
       (piVar1 = *(int **)(*(int *)(iVar2 + 0x104) + 0x14), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xa0))();
      iVar2 = DAT_007356a8;
    }
    if (((DAT_006f1dd8 != 0) && (*(int *)(iVar2 + 0x104) != 0)) &&
       (piVar1 = *(int **)(*(int *)(iVar2 + 0x104) + 0x14), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x98))(0,0xfffffffe);
    }
  }
  FUN_00494890();
  FUN_00494890();
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

