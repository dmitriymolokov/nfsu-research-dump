/* Decompiled from Speed.exe @ 004f5f80 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f5f80(undefined4 param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
    iVar3 = *(int *)(iVar1 + 0x88);
    iVar4 = 0;
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar1 + 0x84);
      do {
        if (*(int *)(*piVar2 + 0x10) == unaff_EDI) {
          iVar4 = *piVar2;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar4 != 0) {
        if (param_2 == '\x01') {
          *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfbffffff;
          return;
        }
        *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x4000000;
      }
    }
  }
  return;
}

