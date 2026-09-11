/* Decompiled from Speed.exe @ 004482f0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_004482f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000014;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686648;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00567160();
  puVar3 = (undefined4 *)0x0;
  local_4 = 0;
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_00447f90(param_1,in_stack_00000014);
  }
  *DAT_0077a928 = puVar3;
  puVar1 = puVar3;
  puVar3[1] = DAT_0077a928;
  DAT_0077a928 = puVar1;
  *puVar3 = &DAT_0077a924;
  ExceptionList = local_c;
  return;
}

