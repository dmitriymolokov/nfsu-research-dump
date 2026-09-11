/* Decompiled from Speed.exe @ 00663570 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00663570(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0x7c);
  iVar2 = 4;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 4))(iVar1);
    }
    *piVar3 = 0;
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_006698c0(*(int *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    FUN_006698c0(*(int *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

