/* Decompiled from Speed.exe @ 004f6910 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6910(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x400001;
    if (*(int *)(param_1 + 0x18) == 5) {
      iVar1 = *(int *)(param_1 + 0x60);
      iVar2 = *(int *)(param_1 + 0x5c);
      if (0 < iVar2) {
        do {
          FUN_004f6910(iVar1);
          iVar1 = *(int *)(iVar1 + 4);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    else if (DAT_0073578c != 0) {
      FUN_004f2d60();
      return;
    }
  }
  return;
}

