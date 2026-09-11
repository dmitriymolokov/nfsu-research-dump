/* Decompiled from Speed.exe @ 005b87e0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005b87e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005b7369(param_2,1);
  if ((iVar1 != 0) &&
     ((iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x40) + *(int *)(param_1 + 0x118) +
               *(int *)(iVar1 + 0x18), *(int *)(iVar2 + 0x10) == 0 || (*(int *)(iVar1 + 0x10) != -1)
      ))) {
    if ((-1 < *(int *)(iVar2 + 4)) &&
       (((*(int *)(iVar2 + 4) < 4 && (*(int *)(iVar2 + 0x14) == 1)) && (*(int *)(iVar2 + 0x18) == 1)
        ))) {
      iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
      iVar2 = *(int *)(iVar1 + 0x10);
      if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
        *(uint *)(iVar1 + 0x18) = (uint)(param_3 != 0);
        return 0;
      }
      if (iVar2 == 3) {
        *(double *)(iVar1 + 0x18) = (double)(param_3 != 0);
        return 0;
      }
    }
  }
  return 0x8876086c;
}

