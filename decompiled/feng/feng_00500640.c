/* Decompiled from Speed.exe @ 00500640 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_00500640(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0xc);
  if (iVar2 != 0) {
    do {
      if (*(int *)(iVar2 + 0x18) <= *(int *)(param_1 + 0x18)) break;
      iVar2 = *(int *)(iVar2 + 8);
    } while (iVar2 != 0);
  }
  if (param_1 != 0) {
    if (iVar2 == 0) {
      iVar1 = *(int *)(unaff_ESI + 8);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = param_1;
      }
      *(undefined4 *)(param_1 + 8) = 0;
      *(int *)(unaff_ESI + 8) = param_1;
    }
    else {
      iVar1 = *(int *)(iVar2 + 4);
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 8) = param_1;
      }
      *(int *)(param_1 + 8) = iVar2;
      *(int *)(iVar2 + 4) = param_1;
    }
    if (*(int *)(unaff_ESI + 0xc) == iVar2) {
      *(int *)(unaff_ESI + 0xc) = param_1;
    }
    *(int *)(unaff_ESI + 4) = *(int *)(unaff_ESI + 4) + 1;
  }
  return;
}

