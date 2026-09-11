/* Decompiled from Speed.exe @ 004ad7b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004ad7b0(int param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (((unaff_ESI == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      return;
    }
    iVar1 = FUN_004ef050(unaff_EDI);
    if (iVar1 == 0) {
      return;
    }
  }
  if ((*(int *)(iVar1 + 0x18) == 1) && (*(int *)(iVar1 + 0x24) != param_1)) {
    *(int *)(iVar1 + 0x24) = param_1;
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
  }
  return;
}

