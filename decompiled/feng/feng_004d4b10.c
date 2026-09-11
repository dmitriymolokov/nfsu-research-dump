/* Decompiled from Speed.exe @ 004d4b10 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004d4b10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688276;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar1 = param_1 + 0x26;
  *param_1 = &PTR_FUN_006c3e2c;
  puVar5 = param_1 + 0x28;
  *puVar1 = puVar1;
  param_1[0x27] = puVar1;
  *puVar5 = puVar5;
  param_1[0x29] = puVar5;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  uVar3 = 0;
  local_4 = 1;
  if (DAT_0075892c == 0) {
    uVar3 = 0x197392b;
  }
  else if (DAT_0075892c == 1) {
    uVar3 = 0x1a4e8ad1;
  }
  FUN_00416bb0(uVar3);
  FUN_004d5970(param_1);
  puVar5 = param_1 + 0x10;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_004d4bf0();
  if (((DAT_006f1dd8 != 0) && (*(int *)(DAT_007356a8 + 0x104) != 0)) &&
     (piVar2 = *(int **)(*(int *)(DAT_007356a8 + 0x104) + 0x14), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x98))(0,0xffffffff);
  }
  ExceptionList = local_c;
  return param_1;
}

