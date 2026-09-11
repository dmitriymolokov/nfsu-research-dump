/* Decompiled from Speed.exe @ 005d7830 */
/* Module: Loader */
/* Ghidra DecompileAll */


bool __thiscall FUN_005d7830(int param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2 != 0) {
    bVar1 = *(int *)(param_2 + 4) == *(int *)(param_1 + 4);
  }
  return bVar1;
}

