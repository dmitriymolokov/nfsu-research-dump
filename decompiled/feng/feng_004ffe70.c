/* Decompiled from Speed.exe @ 004ffe70 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004ffe70(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EDI;
  
  for (iVar1 = *(int *)(unaff_EDI + 0x60); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    FUN_004ffeb0(iVar1,param_2);
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | *(uint *)(unaff_EDI + 0x1c) & 0x3c00000;
  }
  return;
}

