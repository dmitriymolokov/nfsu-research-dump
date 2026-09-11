/* Decompiled from Speed.exe @ 0064b870 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 __thiscall FUN_0064b870(int param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == *(int **)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = **(int **)(param_1 + 0xc);
  }
  piVar1 = (int *)param_2[1];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *param_2;
  }
  if (*param_2 != 0) {
    *(int **)(*param_2 + 4) = piVar1;
  }
  piVar1 = (int *)(param_1 + 4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(*DAT_00713c54 + 4))(param_1);
  }
  return 0;
}

