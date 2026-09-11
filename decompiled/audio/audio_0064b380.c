/* Decompiled from Speed.exe @ 0064b380 */
/* Module: Audio */
/* Ghidra DecompileAll */


void __thiscall FUN_0064b380(int *param_1,int *param_2)

{
  int *piVar1;
  
  if (param_2 == (int *)*param_1) {
    *param_1 = *(int *)*param_1;
  }
  piVar1 = (int *)param_2[1];
  if (piVar1 != (int *)0x0) {
    *piVar1 = *param_2;
  }
  if (*param_2 != 0) {
    *(int **)(*param_2 + 4) = piVar1;
  }
  return;
}

