/* Decompiled from Speed.exe @ 005b5dbd */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b5dbd(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    iVar3 = __ftol();
    uVar2 = (uint)(iVar3 != 0);
  }
  else {
    if ((iVar3 != 1) && (iVar3 != 2)) {
      if (iVar3 != 3) {
        return 0x8876086c;
      }
      *(double *)(iVar1 + 0x18) = (double)param_2;
      return 0;
    }
    uVar2 = __ftol();
  }
  *(uint *)(iVar1 + 0x18) = uVar2;
  return 0;
}

