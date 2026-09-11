/* Decompiled from Speed.exe @ 004abf50 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


uint FUN_004abf50(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *unaff_EDI;
  
  if (DAT_00777b4c == 8) {
    iVar5 = unaff_EDI[1];
  }
  else {
    iVar5 = *unaff_EDI;
  }
  piVar4 = unaff_EDI + 0x1877;
  piVar1 = (int *)0x0;
  piVar3 = piVar4;
  do {
    if (iVar5 == *piVar3) {
      iVar2 = 0;
      if (0 < unaff_EDI[0x18b3]) goto LAB_004abf90;
      goto LAB_004abf9c;
    }
    piVar1 = (int *)((int)piVar1 + 1);
    piVar3 = piVar3 + 4;
  } while ((int)piVar1 < 0xf);
  goto LAB_004abf7d;
  while( true ) {
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 4;
    if (unaff_EDI[0x18b3] <= iVar2) break;
LAB_004abf90:
    if (*piVar4 == iVar5) {
      piVar1 = unaff_EDI + iVar2 * 4 + 0x1877;
      goto LAB_004abf9e;
    }
  }
LAB_004abf9c:
  piVar1 = (int *)0x0;
LAB_004abf9e:
  if (piVar1[2] == 8) {
    return CONCAT31((int3)((uint)piVar1 >> 8),1);
  }
LAB_004abf7d:
  return (uint)piVar1 & 0xffffff00;
}

