/* Decompiled from Speed.exe @ 0063e600 */
/* Module: EAGL */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0063e600(int param_1)

{
  DWORD DVar1;
  
  if (param_1 == 0) {
    DVar1 = GetCurrentThreadId();
    return DVar1 == _DAT_0070f4ec;
  }
  if (param_1 == -1) {
    return true;
  }
  DVar1 = GetCurrentThreadId();
  return *(DWORD *)(param_1 + 8) == DVar1;
}

