/* Decompiled from Speed.exe @ 004c9740 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004c9740(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006895b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f78e0(param_1,param_2);
  puVar2 = param_1 + 0x23;
  *param_1 = &PTR_FUN_006c5134;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  puVar1 = param_1 + 0x25;
  *puVar2 = puVar2;
  param_1[0x24] = puVar2;
  *puVar1 = puVar1;
  param_1[0x26] = puVar1;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_4 = 1;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0xb5) = 0;
  *(undefined1 *)((int)param_1 + 0xb6) = 0;
  *(undefined1 *)((int)param_1 + 0xb7) = 1;
  DAT_00735e4c = 0;
  FUN_004c98e0(param_1);
  FUN_004c9bd0();
  iVar3 = FUN_0059fb80();
  if (iVar3 == 0) {
    iVar3 = FUN_0059fb80();
  }
  FUN_004f6850(iVar3);
  param_1[0x10] = &LAB_004ca360;
  *(undefined1 *)(param_1 + 0x12) = 1;
  ExceptionList = local_c;
  return param_1;
}

