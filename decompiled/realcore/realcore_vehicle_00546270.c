/* Decompiled from Speed.exe @ 00546270 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00546270(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *_Memory;
  int *unaff_ESI;
  
  piVar1 = (int *)*unaff_ESI;
  while (piVar1 != unaff_ESI) {
    piVar2 = (int *)piVar1[1];
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    FUN_005458f0();
    _free(_Memory);
    piVar1 = (int *)*unaff_ESI;
  }
  return;
}

