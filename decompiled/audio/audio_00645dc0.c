/* Decompiled from Speed.exe @ 00645dc0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined1 __fastcall FUN_00645dc0(int param_1)

{
  undefined1 local_c;
  
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

