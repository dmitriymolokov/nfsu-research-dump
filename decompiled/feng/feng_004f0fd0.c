/* Decompiled from Speed.exe @ 004f0fd0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f0fd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  if ((((*(int *)(unaff_ESI + 0x18) != 4) || (cVar1 = FUN_004f0eb0(param_1,param_2), cVar1 == '\0'))
      && ((*(int *)(unaff_ESI + 0x18) != 6 || (cVar1 = FUN_004f0f10(param_1,param_2), cVar1 == '\0')
          ))) && (iVar2 = *(int *)(unaff_ESI + 0x3c), iVar2 != 0)) {
    while (*(int *)(iVar2 + 0xc) != unaff_EDI) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) {
        return;
      }
    }
    if (iVar2 != 0) {
      FUN_004f1040(param_1,iVar2,unaff_ESI,param_2,param_3);
    }
  }
  return;
}

