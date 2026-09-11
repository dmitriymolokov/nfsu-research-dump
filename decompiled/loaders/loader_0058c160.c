/* Decompiled from Speed.exe @ 0058c160 */
/* Module: Loader */
/* Ghidra DecompileAll */


void __fastcall FUN_0058c160(undefined4 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  
  iVar3 = 0;
  if (0 < unaff_ESI) {
    do {
      iVar2 = *(int *)(param_2 + iVar3 * 4);
      if (iVar2 != 0) {
        psVar1 = (short *)(iVar2 + 0xc);
        *psVar1 = *psVar1 + -1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_ESI);
  }
  return;
}

