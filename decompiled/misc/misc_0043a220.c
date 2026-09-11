/* Decompiled from Speed.exe @ 0043a220 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043a220(int *param_1,char param_2)

{
  undefined4 uVar1;
  int local_8;
  
  if (*(char *)((int)param_1 + 0x1a) != '\0') {
    FUN_00546680();
  }
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (param_1[local_8 + 2] != 0) {
      uVar1 = 0;
      FUN_0043b850(local_8);
      FUN_004390d0(uVar1);
    }
  }
  if (((*param_1 == 3) && (DAT_006f1f64 != 0)) && (param_2 == '\0')) {
    FUN_004390d0(1);
  }
  else {
    if (DAT_006f1f64 != 0) {
      FUN_00549980();
    }
    FUN_004390d0(0);
  }
  FUN_0043b680();
  return;
}

