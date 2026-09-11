/* Decompiled from Speed.exe @ 004cf110 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004cf110(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00687299;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_006c3e3c;
  iVar2 = DAT_007356a8;
  local_4 = 0xe;
  if (((((float)param_1[0x13a] == DAT_006cc7a4) && (DAT_006cc7a4 < DAT_00758904)) &&
      (FUN_00520e90(DAT_007356a8,0,1), DAT_006f1dd8 != 0)) &&
     ((*(int *)(iVar2 + 0x104) != 0 &&
      (piVar1 = *(int **)(*(int *)(iVar2 + 0x104) + 0x14), piVar1 != (int *)0x0)))) {
    (**(code **)(*piVar1 + 0x98))(0,0xfffffffe);
  }
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  FUN_00414b40();
  param_1[0x4b] = &PTR_LAB_006cbe74;
  param_1[0x3f] = &PTR_LAB_006cbe74;
  param_1[0x33] = &PTR_LAB_006cbe74;
  param_1[0x27] = &PTR_LAB_006cbe74;
  param_1[0x1b] = &PTR_LAB_006cbe74;
  local_4 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = pvStack_c;
  return;
}

