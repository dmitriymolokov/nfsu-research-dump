/* Decompiled from Speed.exe @ 005749b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


int FUN_005749b0(int param_1)

{
  int iVar1;
  int iVar2;
  int local_28 [10];
  
  iVar1 = FUN_005748c0(10);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (local_28[iVar2] == param_1) {
        return param_1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return local_28[0];
}

