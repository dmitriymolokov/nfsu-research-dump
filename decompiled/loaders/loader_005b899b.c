/* Decompiled from Speed.exe @ 005b899b */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b899b(int param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_8;
  
  local_8 = 0;
  if (param_3 == (uint *)0x0) {
    return 0x8876086c;
  }
  iVar1 = FUN_005b7369(param_2,1);
  if (((iVar1 == 0) ||
      ((((iVar3 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
                  *(int *)(iVar1 + 0x18), *(int *)(iVar3 + 0x10) != 0 &&
         (*(int *)(iVar1 + 0x10) == -1)) || (*(int *)(iVar3 + 4) < 0)) ||
       ((3 < *(int *)(iVar3 + 4) || (*(int *)(iVar3 + 0x14) != 1)))))) ||
     (*(int *)(iVar3 + 0x18) != 1)) {
LAB_005b8a32:
    local_8 = 0x8876086c;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      *param_3 = (uint)(*(int *)(iVar1 + 0x18) != 0);
      return 0;
    }
    if ((iVar3 == 1) || (iVar3 == 2)) {
      uVar2 = *(uint *)(iVar1 + 0x18);
    }
    else {
      if (iVar3 != 3) goto LAB_005b8a32;
      uVar2 = __ftol();
    }
    *param_3 = uVar2;
  }
  return local_8;
}

