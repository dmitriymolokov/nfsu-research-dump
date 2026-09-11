/* Decompiled from Speed.exe @ 0043d760 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined1 __fastcall FUN_0043d760(int *param_1)

{
  int iVar1;
  int local_c;
  
  if (*param_1 == 7) {
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if ((param_1[local_c + 2] != 0) &&
         (iVar1 = FUN_0043b850(local_c), *(int *)(iVar1 + 0x188) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

