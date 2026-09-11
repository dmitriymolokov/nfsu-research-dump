/* Decompiled from Speed.exe @ 00598bf0 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_00598bf0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int local_8;
  
  local_8 = 0;
  cVar1 = FUN_00421a50(param_1);
  if (cVar1 != '\0') {
    local_8 = FUN_005991a0(param_2);
  }
  if (local_8 == 0) {
    local_8 = FUN_00598c80(param_2);
  }
  if ((local_8 == 0) && (cVar1 = FUN_00421a50(param_1), cVar1 == '\0')) {
    local_8 = FUN_00598fb0(param_2);
  }
  return local_8;
}

