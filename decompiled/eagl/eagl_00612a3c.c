/* Decompiled from Speed.exe @ 00612a3c */
/* Module: EAGL */
/* Ghidra DecompileAll */


int __thiscall FUN_00612a3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_00615e2f(2);
  if (-1 < iVar3) {
    iVar3 = *(int *)(param_1 + 0xa0);
    piVar1 = (int *)(param_1 + 0xa4);
    iVar2 = *piVar1;
    *(undefined4 *)(iVar3 + iVar2 * 4) = param_2;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 4) = param_3;
    *piVar1 = *piVar1 + 2;
    iVar3 = 0;
  }
  return iVar3;
}

