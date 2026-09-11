/* Decompiled from Speed.exe @ 004a8a70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004a8a70(undefined4 param_1)

{
  void *_Memory;
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  if ((unaff_ESI[4] == 0) || (unaff_ESI[4] == 0x7fffffff)) {
LAB_004a8a92:
    iVar2 = unaff_ESI[3];
    if (iVar2 < 1) goto LAB_004a8ae2;
    _Memory = *(void **)(unaff_ESI[5] + 8);
    FUN_004f68a0(_Memory);
    iVar2 = FUN_00674898();
    unaff_ESI[4] = iVar2;
    _free(_Memory);
    iVar2 = *(int *)unaff_ESI[5];
    piVar1 = (int *)((int *)unaff_ESI[5])[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_0041f570();
    unaff_ESI[3] = unaff_ESI[3] + -1;
  }
  else {
    iVar2 = FUN_00586640(param_1);
    if (iVar2 == 0) goto LAB_004a8a92;
  }
  iVar2 = unaff_ESI[3];
LAB_004a8ae2:
  if ((iVar2 == 0) && ((iVar2 = unaff_ESI[4], iVar2 == 0 || (iVar2 == 0x7fffffff)))) {
    FUN_004f6910(*unaff_ESI);
    return;
  }
  FUN_004f6970(*unaff_ESI);
  return;
}

