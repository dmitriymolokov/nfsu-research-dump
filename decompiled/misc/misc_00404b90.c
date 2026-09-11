/* Decompiled from Speed.exe @ 00404b90 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00404b90(undefined4 param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *piVar3;
  int unaff_ESI;
  
  pvVar2 = _malloc(0x30);
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00405350(&DAT_006cc568,param_1);
  }
  puVar1 = *(undefined4 **)(unaff_ESI + 0x40);
  *puVar1 = piVar3;
  *(int **)(unaff_ESI + 0x40) = piVar3;
  piVar3[1] = (int)puVar1;
  *piVar3 = unaff_ESI + 0x3c;
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + 1;
  return;
}

