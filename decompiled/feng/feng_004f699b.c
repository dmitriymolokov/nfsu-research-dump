/* Decompiled from Speed.exe @ 004f6970 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6970(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 != 0) &&
     (*(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe | 0x400000,
     *(int *)(param_1 + 0x18) == 5)) {
    iVar1 = *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x5c);
    if (0 < iVar2) {
      do {
        FUN_004f6970(iVar1);
        iVar1 = *(int *)(iVar1 + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

