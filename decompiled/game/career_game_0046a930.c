/* Decompiled from Speed.exe @ 0046a930 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0046a930(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  while (piVar1 != unaff_ESI) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    if (piVar1 + -0x94 != (int *)0x0) {
      (**(code **)piVar1[-0x94])(1);
    }
    piVar1 = (int *)*unaff_ESI;
  }
  return;
}

