/* Decompiled from Speed.exe @ 00421c00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00421c00(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00567160();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[2] = param_2;
    piVar2[3] = param_3;
  }
  piVar1 = *(int **)(param_1 + 0xc);
  *piVar1 = (int)piVar2;
  *(int **)(param_1 + 0xc) = piVar2;
  piVar2[1] = (int)piVar1;
  *piVar2 = param_1 + 8;
  return;
}

