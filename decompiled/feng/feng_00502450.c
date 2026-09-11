/* Decompiled from Speed.exe @ 00502450 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_00502450(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0068537b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  *(undefined ***)(param_1 + 0x28) = &PTR_LAB_006c17bc;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_004fca20();
  }
  *(undefined ***)(param_1 + 8) = &PTR_LAB_006c2c50;
  ExceptionList = local_c;
  return;
}

