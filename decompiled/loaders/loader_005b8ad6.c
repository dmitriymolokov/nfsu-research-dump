/* Decompiled from Speed.exe @ 005b8ad6 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005b8ad6(int param_1,undefined4 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_3 == (float *)0x0) {
    return 0x8876086c;
  }
  iVar2 = FUN_005b7369(param_2,1);
  if (((iVar2 == 0) ||
      (((iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                 *(int *)(iVar2 + 0x18), *(int *)(iVar3 + 0x10) != 0 &&
        (*(int *)(iVar2 + 0x10) == -1)) || (*(int *)(iVar3 + 4) < 0)))) ||
     (((3 < *(int *)(iVar3 + 4) || (*(int *)(iVar3 + 0x14) != 1)) || (*(int *)(iVar3 + 0x18) != 1)))
     ) {
LAB_005b8b81:
    local_8 = 0x8876086c;
  }
  else {
    iVar2 = *(int *)(*(int *)(iVar2 + 0x1c) + 8);
    iVar3 = *(int *)(iVar2 + 0x10);
    if (iVar3 == 0) {
      fVar1 = (float)(*(int *)(iVar2 + 0x18) != 0);
    }
    else if (iVar3 == 1) {
      fVar1 = (float)*(int *)(iVar2 + 0x18);
    }
    else if (iVar3 == 2) {
      fVar1 = (float)*(int *)(iVar2 + 0x18);
      if (*(int *)(iVar2 + 0x18) < 0) {
        fVar1 = fVar1 + _DAT_006cc858;
      }
    }
    else {
      if (iVar3 != 3) goto LAB_005b8b81;
      fVar1 = (float)*(double *)(iVar2 + 0x18);
    }
    *param_3 = fVar1;
  }
  return local_8;
}

