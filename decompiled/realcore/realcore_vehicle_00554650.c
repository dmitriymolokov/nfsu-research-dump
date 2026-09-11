/* Decompiled from Speed.exe @ 00554650 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00554650(undefined4 *param_1)

{
  int iVar1;
  undefined4 *local_3c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00687833;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_LAB_006bcdec;
  local_8 = 1;
  while (iVar1 = FUN_00401bd0(), iVar1 == 0) {
    iVar1 = FUN_00401be0();
    if (iVar1 == 0) {
      local_3c = (undefined4 *)0x0;
    }
    else {
      local_3c = (undefined4 *)(iVar1 + -4);
    }
    if (local_3c != (undefined4 *)0x0) {
      (**(code **)*local_3c)(1);
    }
  }
  FUN_005647c0();
  FUN_004134c0(0xff);
  FUN_004f6340();
  local_8 = local_8 & 0xffffff00;
  FUN_005567f0();
  local_8 = 0xffffffff;
  FUN_004f7b50();
  ExceptionList = local_10;
  return;
}

