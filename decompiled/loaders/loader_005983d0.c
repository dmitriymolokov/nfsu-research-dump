/* Decompiled from Speed.exe @ 005983d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined1 __thiscall FUN_005983d0(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 local_c;
  
  if ((*(short *)(param_1 + 4 + param_2 * 2) == -1) ||
     (*(char *)(param_1 + 0xd0 + param_4 + param_3 * 4 + param_2 * 2) == '\0')) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

