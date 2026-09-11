/* Decompiled from Speed.exe @ 00520f50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00520f50(void)

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
    if (piVar1 + -0x9c != (int *)0x0) {
      (**(code **)piVar1[-0x9c])(1);
    }
    piVar1 = (int *)*unaff_ESI;
  }
  return;
}

