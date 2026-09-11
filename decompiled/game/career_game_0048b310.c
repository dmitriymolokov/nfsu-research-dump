/* Decompiled from Speed.exe @ 0048b310 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __fastcall FUN_0048b310(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685b98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006c7e58;
  local_4 = 0;
  _free((void *)param_1[0xc]);
  _free((void *)param_1[0xd]);
  _free((void *)param_1[0xe]);
  _free((void *)param_1[0xf]);
  if ((undefined4 *)param_1[0x14] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x14])(1);
  }
  *param_1 = &PTR_LAB_006c7c50;
  if (param_1[5] != 0) {
    param_1[5] = 0;
    param_1[9] = *(undefined4 *)(param_1[7] + 0x280);
    param_1[10] = *(undefined4 *)(param_1[7] + 0x284);
    iVar1 = param_1[1];
    piVar2 = (int *)param_1[2];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
    FUN_00408370();
  }
  ExceptionList = pvStack_c;
  return;
}

