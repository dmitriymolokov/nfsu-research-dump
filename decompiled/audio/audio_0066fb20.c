/* Decompiled from Speed.exe @ 0066fb20 */
/* Module: Audio */
/* Ghidra DecompileAll */


void FUN_0066fb20(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int *piVar3;
  
  iVar1 = *(int *)(unaff_ESI + 0xe8);
  iVar2 = 0x800;
  if (iVar1 != *(int *)(unaff_ESI + 0xec)) {
    do {
      iVar2 = iVar2 - *(int *)(*(int *)(unaff_ESI + 0xf0) + iVar1);
      iVar1 = (*(int *)(unaff_ESI + 0xdc) + iVar1) % *(int *)(unaff_ESI + 0xe0);
    } while (iVar1 != *(int *)(unaff_ESI + 0xec));
  }
  if (*(int *)(unaff_ESI + 0xec) != *(int *)(unaff_ESI + 0xe4)) {
    while ((piVar3 = (int *)(*(int *)(unaff_ESI + 0xf0) + *(int *)(unaff_ESI + 0xec)),
           *(int *)(unaff_ESI + 0xec) == *(int *)(unaff_ESI + 0xe8) || (*piVar3 <= iVar2))) {
      iVar2 = iVar2 - *piVar3;
      piVar3[3] = *(int *)(unaff_ESI + 0xd8) + -1;
      if (*(code **)(unaff_ESI + 0x38) != (code *)0x0) {
        (**(code **)(unaff_ESI + 0x38))();
      }
      iVar1 = FUN_0066f830();
      if (iVar1 < 0) {
        return;
      }
      iVar1 = (*(int *)(unaff_ESI + 0xdc) + *(int *)(unaff_ESI + 0xec)) % *(int *)(unaff_ESI + 0xe0)
      ;
      *(int *)(unaff_ESI + 0xec) = iVar1;
      if (iVar1 == *(int *)(unaff_ESI + 0xe4)) {
        return;
      }
    }
  }
  return;
}

