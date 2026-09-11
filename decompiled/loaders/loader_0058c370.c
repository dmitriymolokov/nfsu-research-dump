/* Decompiled from Speed.exe @ 0058c370 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_0058c370(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x10) != 0) && (*(char *)(*(int *)(param_1 + 0x10) + 0xd) == '\x02')) &&
      (*(int *)(param_1 + 0x14) != 0)) &&
     ((*(char *)(*(int *)(param_1 + 0x14) + 9) == '\x02' && (*(int *)(param_1 + 0x18) != 0)))) {
    iVar1 = FUN_0058ae50();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

