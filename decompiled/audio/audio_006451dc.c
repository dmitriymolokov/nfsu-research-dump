/* Decompiled from Speed.exe @ 006451dc */
/* Module: Audio */
/* Ghidra DecompileVAs */


void __fastcall FUN_006451dc(int *param_1)

{
  if (param_1[0x19] != 0) {
    if ((undefined4 *)param_1[0x19] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x19])(1);
    }
    param_1[0x19] = 0;
  }
  if (*param_1 != 0) {
    if (*param_1 != 0) {
      FUN_00645e30(1);
    }
    *param_1 = 0;
  }
  if (param_1[0x17] != 0) {
    if (param_1[0x17] != 0) {
      FUN_00645e60(1);
    }
    param_1[0x17] = 0;
  }
  FUN_00412810(param_1[0xc]);
  param_1[0xc] = 0;
  if ((char)param_1[5] != '\0') {
    FUN_00412810(param_1[0xd]);
    param_1[0xd] = 0;
  }
  if (param_1[8] != 0) {
    FUN_0064538b(param_1[8]);
    param_1[8] = 0;
  }
  if (param_1[10] != 0) {
    FUN_0064538b(param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[1] != 0) {
    FUN_005a4510(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] != 0) {
    FUN_005a4510(param_1[2]);
    param_1[2] = 0;
  }
  FUN_005b5e6c(param_1 + 0x1e,0xc,2,FUN_006497d0);
  FUN_006497d0();
  return;
}

