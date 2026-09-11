/* Decompiled from Speed.exe @ 0043f430 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0043f430(void)

{
  int *piVar1;
  uint uVar2;
  int *unaff_ESI;
  
  piVar1 = *(int **)(*(int *)(*unaff_ESI + 4) + 0x1c);
  if ((*(char *)((int)piVar1 + 0xe) == '\0') || (*(char *)((int)unaff_ESI + 0xb) != '\0')) {
    *(bool *)((int)unaff_ESI + 0xb) = *(char *)((int)piVar1 + 0xe) != '\0';
  }
  else {
    *(undefined1 *)((int)unaff_ESI + 0xb) = 1;
    if ((char)unaff_ESI[2] == '\0') {
      *(undefined1 *)(unaff_ESI + 2) = 1;
      if (*(char *)(*(int *)(unaff_ESI[1] + 0x44) + 0x14) != '\0') {
        FUN_00436780();
      }
    }
    else if (*(char *)(*(int *)(unaff_ESI[1] + 0x44) + 0x14) != '\0') {
      FUN_00436230(0x3f800000);
    }
  }
  if ((*(char *)((int)piVar1 + 0xd) == '\0') || ((char)unaff_ESI[3] != '\0')) {
    *(bool *)(unaff_ESI + 3) = *(char *)((int)piVar1 + 0xd) != '\0';
  }
  else {
    *(undefined1 *)(unaff_ESI + 3) = 1;
    if (*(char *)((int)unaff_ESI + 9) == '\0') {
      *(undefined1 *)((int)unaff_ESI + 9) = 1;
      if (*(char *)(*(int *)(unaff_ESI[1] + 0x48) + 0x14) != '\0') {
        FUN_00436780();
      }
    }
    else if (*(char *)(*(int *)(unaff_ESI[1] + 0x48) + 0x14) != '\0') {
      FUN_00436230(0x3f800000);
    }
    if ((DAT_0078a345 == '\0') && (DAT_007361a4 == 0)) {
      uVar2 = (uint)(*(char *)((int)piVar1 + 10) == '\x01');
    }
    else {
      uVar2 = FUN_0043eaa0((int)*(short *)(*piVar1 + 10));
    }
    if (uVar2 == 0) {
      if (*(char *)(*(int *)(unaff_ESI[1] + 0x40) + 0x14) != '\0') {
        FUN_00436780();
        return;
      }
    }
    else if (*(char *)(*(int *)(unaff_ESI[1] + 0x40) + 0x14) != '\0') {
      FUN_00436230(0x3f800000);
      return;
    }
  }
  return;
}

