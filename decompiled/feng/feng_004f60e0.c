/* Decompiled from Speed.exe @ 004f60e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004f60e0(undefined4 param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686443;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004f4360(param_1);
  DAT_00735dfc = FUN_00565b60(0x4c,0,0,0);
  DAT_00735e18 = FUN_00565b60(0x48,0,0,0);
  pvVar1 = _malloc(0x10);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_0073578c = 0;
  }
  else {
    DAT_0073578c = FUN_004f5240();
  }
  if (DAT_0073578c != 0) {
    *(undefined4 *)(*(int *)(DAT_0073578c + 8) + 0xd0) = 2;
  }
  ExceptionList = local_c;
  return;
}

