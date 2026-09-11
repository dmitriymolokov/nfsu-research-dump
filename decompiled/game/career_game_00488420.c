/* Decompiled from Speed.exe @ 00488420 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_00488420(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00686ce8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004834e0();
  param_1[0x10] = param_4;
  *param_1 = &PTR_FUN_006c7d80;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((int)param_1 + 0x3e) = 0;
  _DAT_00705b44 = param_3[1];
  DAT_00705b48 = param_3[2];
  _DAT_00705b40 = *param_3;
  local_8 = 0;
  DAT_00735f30 = 0;
  _DAT_00736820 = *unaff_EDI;
  DAT_00736824 = unaff_EDI[1];
  DAT_00735f34 = 0;
  DAT_00736828 = unaff_EDI[2];
  DAT_00735f38 = 0;
  param_1[0x11] = 0x80000000;
  param_1[0x12] = 0;
  FUN_00488550();
  ExceptionList = local_10;
  return param_1;
}

