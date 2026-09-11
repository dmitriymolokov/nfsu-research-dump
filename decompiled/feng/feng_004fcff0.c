/* Decompiled from Speed.exe @ 004fcff0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fcff0(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00684f51;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c182c;
  iVar1 = param_1[0x804];
  local_4 = 1;
  while (iVar1 != 0) {
    iVar1 = param_1[0x805];
    if (iVar1 != 0) {
      param_1[0x805] = *(undefined4 *)(iVar1 + 4);
      if (iVar1 == param_1[0x806]) {
        param_1[0x806] = *(undefined4 *)(iVar1 + 8);
      }
      if (*(int *)(iVar1 + 8) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
      }
      if (*(int *)(iVar1 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
      }
      *(undefined4 *)(iVar1 + 4) = 0xabadcafe;
      *(undefined4 *)(iVar1 + 8) = 0xabadcafe;
      param_1[0x804] = param_1[0x804] + -1;
    }
    iVar1 = param_1[0x804];
  }
  param_1[0x803] = &PTR_LAB_006c2c4c;
  FUN_004ee5e0();
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 3,0x20,0x100,FUN_004fcab0);
  *param_1 = &PTR_LAB_006c2c50;
  ExceptionList = local_c;
  return;
}

