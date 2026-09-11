/* Decompiled from Speed.exe @ 0044a0e0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0044a0e0(int param_1)

{
  int iVar1;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != 1)) && (iVar1 != 2)) &&
     ((iVar1 != 3 || (*(char *)(param_1 + 4) == '\0')))) {
    return 0;
  }
  return 1;
}

