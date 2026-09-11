/* Decompiled from Speed.exe @ 00548a50 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00548a50(undefined4 param_1,int param_2)

{
  int iVar1;
  int unaff_EDI;
  
  iVar1 = 0;
  if (0 < unaff_EDI) {
    do {
      FUN_004389b0(*(undefined1 *)(iVar1 + param_2));
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EDI);
  }
  return;
}

