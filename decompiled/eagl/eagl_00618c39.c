/* Decompiled from Speed.exe @ 00618c39 */
/* Module: EAGL */
/* Ghidra DecompileModule */


int __thiscall FUN_00618c39(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = FUN_00615e2f(1);
  if (-1 < iVar2) {
    piVar1 = (int *)(param_1 + 0xa4);
    *(undefined4 *)(*(int *)(param_1 + 0xa0) + *piVar1 * 4) = param_2;
    *piVar1 = *piVar1 + 1;
    iVar2 = 0;
  }
  return iVar2;
}

