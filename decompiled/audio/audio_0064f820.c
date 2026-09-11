/* Decompiled from Speed.exe @ 0064f820 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_0064f820(void)

{
  undefined4 uVar1;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff2;
  }
  FUN_00654f00(0,0,0,0xffffffff,0xffffffff);
  if (DAT_00713f30 != (code *)0x0) {
    (*DAT_00713f30)();
  }
  if (DAT_00713f34 != (code *)0x0) {
    (*DAT_00713f34)();
  }
  if (DAT_00713f38 != (code *)0x0) {
    (*DAT_00713f38)();
  }
  if (DAT_00713f44 != (code *)0x0) {
    (*DAT_00713f44)();
  }
  if (DAT_00713f40 != (code *)0x0) {
    (*DAT_00713f40)();
  }
  FUN_00653420();
  FUN_00654de0();
  if (DAT_00713f3c != (code *)0x0) {
    (*DAT_00713f3c)(0xffffffff);
  }
  FUN_00654180();
  FUN_0064e520();
  FUN_006510d0(DAT_00713f48);
  FUN_006510d0(DAT_00713f4c);
  FUN_0064e540();
  uVar1 = thunk_FUN_00656040();
  DAT_00713ee4 = 0;
  FUN_00652d70();
  return uVar1;
}

