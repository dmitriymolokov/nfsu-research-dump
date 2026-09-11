/* Decompiled from Speed.exe @ 004f6460 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6460(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  if (DAT_0073578c != 0) {
    iVar1 = FUN_004f3f90(&DAT_00746104);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) {
      *(undefined1 *)(*(int *)(iVar1 + 0x18) + 0x15) = param_2;
    }
  }
  return;
}

