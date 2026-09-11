/* Decompiled from Speed.exe @ 0043b770 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


int __fastcall FUN_0043b770(int param_1)

{
  char cVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_8 = 0;
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    if (*(int *)(param_1 + 8 + local_c * 4) != 0) {
      iVar2 = FUN_0043b850(local_c);
      if (iVar2 != *(int *)(param_1 + 4)) {
        FUN_0043b850(local_c);
        cVar1 = FUN_00432e20();
        if (cVar1 != '\0') {
          local_8 = local_8 + 1;
        }
      }
    }
  }
  return local_8;
}

