/* Decompiled from Speed.exe @ 00664590 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_00664590(void)

{
  int iVar1;
  int unaff_EBX;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(unaff_EBX + 0x4a8);
  do {
    if ((piVar2[-2] != 0) && (*piVar2 != 0)) {
      iVar1 = FUN_00666fe0(piVar2[-1]);
      if (0 < iVar1) {
        (*(code *)*piVar2)();
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 5;
  } while (iVar3 < 10);
  return;
}

