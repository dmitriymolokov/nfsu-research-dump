/* Decompiled from Speed.exe @ 005bcf1c */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005bcf1c(uint *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    uVar2 = (uint)(param_2[2] != 0);
  }
  else if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar2 = param_2[2];
  }
  else {
    if (iVar1 != 3) {
      return 0x80004005;
    }
    uVar2 = __ftol();
  }
  *param_1 = uVar2;
  return 0;
}

