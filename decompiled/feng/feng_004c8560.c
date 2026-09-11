/* Decompiled from Speed.exe @ 004c8560 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c8560(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar2 = FUN_004f8730(unaff_EBX + 0x40,unaff_EDI,0,1);
  if (((unaff_ESI != 0) && (iVar2 != 0)) && (*(int *)(iVar2 + 0x24) != unaff_ESI)) {
    *(int *)(iVar2 + 0x24) = unaff_ESI;
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400000;
  }
  piVar3 = _malloc(0x10);
  piVar3[2] = unaff_EDI;
  puVar1 = *(undefined4 **)(unaff_EBX + 0x84);
  *puVar1 = piVar3;
  *(int **)(unaff_EBX + 0x84) = piVar3;
  piVar3[1] = (int)puVar1;
  *piVar3 = unaff_EBX + 0x80;
  return;
}

