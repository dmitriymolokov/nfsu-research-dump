/* Decompiled from Speed.exe @ 00534be0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_00534be0(int param_1)

{
  int *piVar1;
  int iVar2;
  LARGE_INTEGER local_c;
  
  if (DAT_006f1dd8 != 0) {
    QueryPerformanceCounter(&local_c);
    piVar1 = (int *)(param_1 + 0x20);
    iVar2 = 2;
    do {
      if (piVar1[0x84] != 0) {
        (**(code **)(*piVar1 + 0x28))(piVar1[0x85],0);
      }
      piVar1 = piVar1 + 0x8c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_00534c50(param_1);
  }
  return;
}

