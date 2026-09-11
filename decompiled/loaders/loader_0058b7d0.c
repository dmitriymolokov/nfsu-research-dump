/* Decompiled from Speed.exe @ 0058b7d0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_0058b7d0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EDI;
  int local_200 [128];
  
  piVar1 = *(int **)(unaff_EDI + 0x34);
  iVar2 = 0;
  if (piVar1 != (int *)(unaff_EDI + 0x34)) {
    do {
      if (*(char *)((int)piVar1 + 9) == '\0') {
        *(undefined1 *)((int)piVar1 + 9) = 1;
        if (piVar1[6] != 0) {
          local_200[iVar2] = piVar1[6];
          iVar2 = iVar2 + 1;
        }
        if (piVar1[7] != 0) {
          local_200[iVar2] = piVar1[7];
          iVar2 = iVar2 + 1;
        }
        if (piVar1[8] != 0) {
          local_200[iVar2] = piVar1[8];
          iVar2 = iVar2 + 1;
        }
        if (piVar1[9] != 0) {
          local_200[iVar2] = piVar1[9];
          iVar2 = iVar2 + 1;
        }
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)(unaff_EDI + 0x34));
    if (0 < iVar2) {
      *(undefined4 *)(unaff_EDI + 0x14) = 1;
      FUN_0053e9e0(&DAT_00743c20,local_200,iVar2,&LAB_0058ce50,0,4);
      return 1;
    }
  }
  return 0;
}

