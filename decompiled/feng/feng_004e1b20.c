/* Decompiled from Speed.exe @ 004e1b20 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e1b20(void)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  
  *(undefined1 *)(unaff_ESI + 200) = 1;
  cVar1 = FUN_004e0bf0();
  if (cVar1 == '\0') {
    cVar1 = FUN_004e0bf0();
    if (cVar1 == '\0') goto LAB_004e1b83;
    iVar2 = unaff_ESI + 100;
  }
  else {
    iVar2 = unaff_ESI + 0x40;
  }
  if (iVar2 != 0) {
    iVar2 = FUN_004f3f90(&DAT_00746104);
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(iVar2 + 0x18) == 0) {
      return;
    }
    if (*(int **)(iVar2 + 0x14) == (int *)0x0) {
      return;
    }
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x12341110,0,0,*(int *)(iVar2 + 0x18));
    return;
  }
LAB_004e1b83:
  *(undefined1 *)(unaff_ESI + 200) = 0;
  return;
}

