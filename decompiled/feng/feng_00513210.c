/* Decompiled from Speed.exe @ 00513210 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00513210(int param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = FUN_004f8730(unaff_EDI + 0x4c,unaff_ESI,0,1);
  if (((unaff_EBX != 0) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x24) != unaff_EBX)) {
    *(int *)(iVar2 + 0x24) = unaff_EBX;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  piVar3 = _malloc(0x18);
  piVar3[3] = param_1;
  *(undefined1 *)(piVar3 + 5) = param_3;
  piVar3[2] = unaff_ESI;
  piVar3[4] = param_2;
  puVar1 = *(undefined4 **)(unaff_EDI + 0x48);
  *puVar1 = piVar3;
  *(int **)(unaff_EDI + 0x48) = piVar3;
  piVar3[1] = (int)puVar1;
  *piVar3 = unaff_EDI + 0x44;
  return;
}

