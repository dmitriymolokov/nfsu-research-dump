/* Decompiled from Speed.exe @ 00417530 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00417530(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = _malloc(0xc);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[2] = param_2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  *puVar1 = piVar2;
  *(int **)(param_1 + 0xc) = piVar2;
  piVar2[1] = (int)puVar1;
  *piVar2 = param_1 + 8;
  return;
}

