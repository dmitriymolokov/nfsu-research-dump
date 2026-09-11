/* Decompiled from Speed.exe @ 005b8a42 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8a42(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar1 = FUN_005b7369(param_2,1);
  if (((iVar1 == 0) ||
      ((((iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                  *(int *)(iVar1 + 0x18), *(int *)(iVar3 + 0x10) != 0 &&
         (*(int *)(iVar1 + 0x10) == -1)) || (*(int *)(iVar3 + 4) < 0)) ||
       ((3 < *(int *)(iVar3 + 4) || (*(int *)(iVar3 + 0x14) != 1)))))) ||
     (*(int *)(iVar3 + 0x18) != 1)) {
LAB_005b8ac9:
    uVar4 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      iVar3 = __ftol();
      uVar2 = (uint)(iVar3 != 0);
    }
    else {
      if ((iVar3 != 1) && (iVar3 != 2)) {
        if (iVar3 == 3) {
          *(double *)(iVar1 + 0x18) = (double)param_3;
          return 0;
        }
        goto LAB_005b8ac9;
      }
      uVar2 = __ftol();
    }
    *(uint *)(iVar1 + 0x18) = uVar2;
  }
  return uVar4;
}

