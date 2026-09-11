/* Decompiled from Speed.exe @ 005b8912 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b8912(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_005b7369(param_2,1);
  if (((iVar1 == 0) ||
      ((((iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                  *(int *)(iVar1 + 0x18), *(int *)(iVar2 + 0x10) != 0 &&
         (*(int *)(iVar1 + 0x10) == -1)) || (*(int *)(iVar2 + 4) < 0)) ||
       ((3 < *(int *)(iVar2 + 4) || (*(int *)(iVar2 + 0x14) != 1)))))) ||
     (*(int *)(iVar2 + 0x18) != 1)) {
LAB_005b898e:
    uVar3 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      param_3 = (uint)(param_3 != 0);
    }
    else if ((iVar2 != 1) && (iVar2 != 2)) {
      if (iVar2 == 3) {
        *(double *)(iVar1 + 0x18) = (double)(int)param_3;
        return 0;
      }
      goto LAB_005b898e;
    }
    *(uint *)(iVar1 + 0x18) = param_3;
  }
  return uVar3;
}

