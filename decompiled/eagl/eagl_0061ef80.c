/* spd-match: far pct=3.45 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0061ef80 */
/* Module: EAGL */
/* Ghidra DecompileAll */


void  FUN_0061ef80(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x2c);
  if (param_2 == piVar1) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(piVar1[3] + 4);
    (**(code **)(*piVar1 + 0xc))(1);
  }
  else {
    do {
      piVar2 = piVar1;
      if (piVar2 == (int *)0x0) break;
      piVar1 = *(int **)(piVar2[3] + 4);
    } while (*(int **)(piVar2[3] + 4) != param_2);
    piVar1 = *(int **)(piVar2[3] + 4);
    *(undefined4 *)(piVar2[3] + 4) = *(undefined4 *)(piVar1[3] + 4);
    (**(code **)(*piVar1 + 0xc))(1);
  }
  if ((int *)DAT_007096ac == param_2) {
    DAT_007096ac = 0;
  }
  return;
}

