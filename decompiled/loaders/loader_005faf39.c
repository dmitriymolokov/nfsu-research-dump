/* Decompiled from Speed.exe @ 005faf39 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __thiscall FUN_005faf39(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_2 + (param_4 + param_3 * 4) * 4);
  if (*piVar1 == -1) {
    iVar2 = *(int *)(param_5 * 4 + *(int *)(param_1 + 0x14));
    if (*(int *)(iVar2 + 8) == -1) {
      *(int *)(iVar2 + 8) = param_3;
      *(int *)(*(int *)(param_5 * 4 + *(int *)(param_1 + 0x14)) + 0xc) = param_4;
    }
    else {
      param_5 = FUN_005f74cf(*(undefined4 *)(param_1 + 0x50),param_3,param_4,
                             *(undefined8 *)(iVar2 + 0x10));
    }
    *piVar1 = param_5;
  }
  return *piVar1;
}

