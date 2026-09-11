/* Decompiled from Speed.exe @ 005ba77a */
/* Module: Loader */
/* Ghidra DecompileAll */


bool FUN_005ba77a(int param_1)

{
  bool bVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) != 8)) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x10) == 0;
  }
  return bVar1;
}

