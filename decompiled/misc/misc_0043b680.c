/* Decompiled from Speed.exe @ 0043b680 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __fastcall FUN_0043b680(int param_1)

{
  char cVar1;
  int local_8;
  
  if ((*(int *)(param_1 + 4) != 0) && (cVar1 = FUN_00432e20(), cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    if (*(int *)(param_1 + 8 + local_8 * 4) != 0) {
      FUN_0043b850(local_8);
      cVar1 = FUN_00432e20();
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 8 + local_8 * 4) != 0) {
          FUN_006497d0();
          FUN_00565ce0();
        }
        *(undefined4 *)(param_1 + 8 + local_8 * 4) = 0;
        *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -1;
      }
    }
  }
  return;
}

