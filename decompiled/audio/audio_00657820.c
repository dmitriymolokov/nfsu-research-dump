/* Decompiled from Speed.exe @ 00657820 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00657820(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (param_2 != iVar1) {
    iVar2 = *(int *)(iVar1 + 8);
    while ((iVar2 != 0 && (iVar3 = *(int *)(iVar1 + 8), iVar3 != param_2))) {
      iVar2 = *(int *)(iVar3 + 8);
      iVar1 = iVar3;
    }
    iVar2 = *(int *)(iVar1 + 8);
    if ((iVar2 != 0) && (iVar2 == param_2)) {
      if (*(int *)(iVar2 + 8) != 0) {
        *(int *)(*(int *)(iVar2 + 8) + 0x10) = iVar1;
      }
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(iVar1 + 8) + 8);
    }
    return;
  }
  *param_1 = *(int *)(iVar1 + 8);
  return;
}

