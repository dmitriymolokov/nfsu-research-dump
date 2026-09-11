/* Decompiled from Speed.exe @ 005a6ce0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005a6ce0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar1 = FUN_005a67d0(param_1,1);
  iVar2 = 0;
  if (iVar1 != -1) {
    iVar2 = *(int *)(unaff_ESI + 4) - iVar1;
  }
  if ((*(char *)(unaff_ESI + 0xbc) != '\0') && (iVar2 < 2)) {
    return 1;
  }
  return 0;
}

