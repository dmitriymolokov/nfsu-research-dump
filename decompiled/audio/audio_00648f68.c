/* Decompiled from Speed.exe @ 00648f68 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00648f68(int param_1)

{
  undefined4 local_c;
  
  FUN_00649a70();
  if (param_1 == 0) {
    local_c = 0;
  }
  else {
    local_c = param_1 + 8;
  }
  FUN_00649c20(local_c);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

