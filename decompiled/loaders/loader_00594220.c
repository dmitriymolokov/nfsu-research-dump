/* Decompiled from Speed.exe @ 00594220 */
/* Module: Loader */
/* Ghidra DecompileAll */


int FUN_00594220(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  piVar1 = (int *)(unaff_ESI + 0x30 + param_2 * 0x24);
  if (piVar1[7] != 0) {
    iVar3 = piVar1[6];
    iVar2 = FUN_00594050(unaff_ESI,piVar1[7]);
    if (iVar3 < iVar2) {
      iVar2 = piVar1[8];
      piVar1[6] = iVar3 + 1;
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1;
      return iVar2;
    }
  }
  if (*(int *)(unaff_ESI + 0x24) < *(int *)(unaff_ESI + 0x20)) {
    iVar3 = *(int *)(unaff_ESI + 0x10);
    iVar2 = FUN_00594050(unaff_ESI,iVar3);
    iVar3 = iVar3 + 4;
    *(int *)(unaff_ESI + 0x10) = iVar3;
    if (iVar2 == param_2) {
      piVar1[7] = iVar3;
      piVar1[6] = 0;
      iVar3 = *(int *)(unaff_ESI + 0x10) + *piVar1;
      *(int *)(unaff_ESI + 0x10) = iVar3;
      iVar3 = FUN_00594050(unaff_ESI,iVar3);
      piVar1[8] = iVar3;
      *(int *)(unaff_ESI + 0x10) = *(int *)(unaff_ESI + 0x10) + param_1;
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1;
      return iVar3;
    }
  }
  iVar3 = piVar1[1];
  *(undefined4 *)(unaff_ESI + 0x28) = 1;
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1;
  return iVar3;
}

