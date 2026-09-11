/* Decompiled from Speed.exe @ 0060ba7c */
/* Module: EAGL */
/* Ghidra DecompileAll */


void __fastcall FUN_0060ba7c(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &PTR_FUN_006a4cb8;
  if (param_1[0x50] != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(uVar1 + param_1[0x50]) != 0) {
        FUN_005f7186(1);
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x800);
  }
  if (param_1[0x51] != 0) {
    uVar1 = 0;
    do {
      if (*(int *)(uVar1 + param_1[0x51]) != 0) {
        FUN_005f7186(1);
      }
      uVar1 = uVar1 + 4;
    } while (uVar1 < 0x800);
  }
  _free((void *)param_1[0x50]);
  _free((void *)param_1[0x51]);
  FUN_00613825();
  return;
}

