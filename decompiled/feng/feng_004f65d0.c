/* Decompiled from Speed.exe @ 004f65d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_004f65d0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x18), iVar2 == 0)) {
    if (DAT_0073578c == 0) {
      return 0;
    }
    iVar1 = *(int *)(DAT_0073578c + 8);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_004fd1e0(iVar1 + 0xdc);
    if (iVar2 == 0) {
      iVar2 = FUN_004fd1e0(iVar1 + 0xec);
    }
  }
  return iVar2;
}

