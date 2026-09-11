/* Decompiled from Speed.exe @ 005ca4f3 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005ca4f3(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)~param_2;
  if ((*piVar2 == 1) && ((uint)piVar2[1] < *(uint *)(param_1 + 0x18))) {
    iVar1 = *(int *)(param_1 + 0x1c) + piVar2[1] * 0xac;
    if ((uint)piVar2[2] < *(uint *)(iVar1 + 0x2c)) {
      return piVar2[2] * 0x3c + *(int *)(iVar1 + 0x30);
    }
  }
  return 0;
}

