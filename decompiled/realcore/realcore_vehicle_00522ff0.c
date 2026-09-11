/* Decompiled from Speed.exe @ 00522ff0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00522ff0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int unaff_retaddr;
  
  piVar3 = param_3;
  iVar1 = param_2 + ((int)param_3 + 0x37) * 3;
  piVar2 = *(int **)(param_1 + iVar1 * 4);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      FUN_0064bbd0();
    }
    FUN_0064b510(&param_3);
    FUN_0064b580();
    (**(code **)(*param_3 + 4))(piVar2);
    FUN_0064b5a0();
    *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    *(undefined1 *)(param_2 + (int)(piVar3 + 0x77) * 3 + unaff_retaddr) = 0;
  }
  return;
}

