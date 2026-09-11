/* Decompiled from Speed.exe @ 005b5e0c */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b5e0c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    fVar3 = (float)(*(int *)(iVar1 + 0x18) != 0);
  }
  else if (iVar2 == 1) {
    fVar3 = (float)*(int *)(iVar1 + 0x18);
  }
  else if (iVar2 == 2) {
    fVar3 = (float)*(int *)(iVar1 + 0x18);
    if (*(int *)(iVar1 + 0x18) < 0) {
      fVar3 = fVar3 + _DAT_006cc858;
    }
  }
  else {
    if (iVar2 != 3) {
      return 0x8876086c;
    }
    fVar3 = (float)*(double *)(iVar1 + 0x18);
  }
  *param_2 = fVar3;
  return 0;
}

