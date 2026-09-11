/* Decompiled from Speed.exe @ 004fc8e0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fc8e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int *unaff_EDI;
  
  iVar1 = FUN_00674898();
  *unaff_ESI = iVar1 + *unaff_EDI + *param_1;
  iVar1 = FUN_00674898();
  unaff_ESI[1] = iVar1 + unaff_EDI[1] + param_1[1];
  iVar1 = FUN_00674898();
  unaff_ESI[2] = iVar1 + unaff_EDI[2] + param_1[2];
  iVar1 = param_1[3];
  iVar2 = FUN_00674898();
  unaff_ESI[3] = iVar2 + unaff_EDI[3] + iVar1;
  return;
}

