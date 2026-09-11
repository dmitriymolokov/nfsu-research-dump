/* Decompiled from Speed.exe @ 004f5130 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f5130(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006860eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006c1b80;
  local_4 = 0;
  FUN_00567220();
  DAT_00735704 = 0;
  FUN_00567220();
  DAT_00735708 = 0;
  FUN_004f7870();
  ExceptionList = local_c;
  return;
}

