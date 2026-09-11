/* Decompiled from Speed.exe @ 004e6660 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 FUN_004e6660(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((*(int *)(DAT_0073578c + 8) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_0073578c + 8) + 0xe4), iVar1 != 0)) {
    do {
      if (*(int *)(iVar1 + 0x1c) != 0) {
        iVar2 = iVar1;
      }
      iVar1 = *(int *)(iVar1 + 4);
    } while (iVar1 != 0);
    if (iVar2 != 0) {
      iVar2 = FUN_004f3f90(&DAT_00746104);
      if (iVar2 != 0) {
        return *(undefined4 *)(iVar2 + 0x14);
      }
    }
  }
  return 0;
}

