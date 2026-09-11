/* Decompiled from Speed.exe @ 005567f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_005567f0(undefined4 param_1)

{
  int iVar1;
  undefined4 *local_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006851aa;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  while (iVar1 = FUN_00401bd0(), iVar1 == 0) {
    iVar1 = FUN_00401be0();
    if (iVar1 == 0) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      local_2c = (undefined4 *)(iVar1 + -4);
    }
    if (local_2c != (undefined4 *)0x0) {
      (**(code **)*local_2c)(1);
    }
  }
  local_8 = 0xffffffff;
  FUN_00549130(param_1);
  ExceptionList = local_10;
  return;
}

