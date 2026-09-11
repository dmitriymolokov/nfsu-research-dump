/* Decompiled from Speed.exe @ 0051d8c0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int * FUN_0051d8c0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  
  pvVar4 = _malloc(0x330);
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00524970();
  }
  iVar6 = 0;
  for (puVar2 = *(undefined4 **)(param_1 + 0xe4);
      (puVar2 != (undefined4 *)(param_1 + 0xe4) && (iVar6 = iVar6 + 1, puVar2 != (undefined4 *)0x0))
      ; puVar2 = (undefined4 *)*puVar2) {
  }
  (**(code **)(*piVar5 + 0x2c))(param_2,iVar6);
  (**(code **)(piVar5[8] + 0x10))(&DAT_006f4340);
  piVar3 = *(int **)(param_1 + 0xe8);
  piVar1 = piVar5 + 0x9c;
  *piVar3 = (int)piVar1;
  *(int **)(param_1 + 0xe8) = piVar1;
  piVar5[0x9d] = (int)piVar3;
  *piVar1 = param_1 + 0xe4;
  (**(code **)(piVar5[8] + 0x24))();
  return piVar5;
}

