/* Decompiled from Speed.exe @ 004bb980 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004bb980(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  *(int *)(unaff_EDI + 0x54) = *(int *)(unaff_EDI + 0x54) + -1;
  iVar1 = FUN_005461c0(*(undefined4 *)(unaff_EDI + 0x44),0,0);
  iVar2 = FUN_005461c0(*(undefined4 *)(unaff_EDI + 0x40),0,0);
  if (((iVar1 == 0) || (*(int *)(iVar1 + 0x70) == 0)) ||
     ((*(int *)(iVar1 + 0x3c) != 0 && (*(int *)(iVar1 + 0x74) == 0)))) {
    *(undefined4 *)(unaff_EDI + 0x50) = 0;
  }
  else {
    *(undefined4 *)(unaff_EDI + 0x50) = 1;
  }
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x70) == 0)) ||
     ((*(int *)(iVar2 + 0x3c) != 0 && (*(int *)(iVar2 + 0x74) == 0)))) {
    *(undefined4 *)(unaff_EDI + 0x4c) = 0;
  }
  else {
    *(undefined4 *)(unaff_EDI + 0x4c) = 1;
  }
  if ((*(int *)(unaff_EDI + 0x4c) != 0) && (*(int *)(unaff_EDI + 0x50) != 0)) {
    FUN_004f6c30("PULSE",1);
    FUN_004f6c30("PULSE",1);
  }
  return;
}

