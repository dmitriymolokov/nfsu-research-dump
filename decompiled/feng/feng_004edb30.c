/* Decompiled from Speed.exe @ 004edb30 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004edb30(void)

{
  int iVar1;
  char in_AL;
  char cVar2;
  int unaff_EBX;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBX + 0x5c + unaff_EDI * 4);
  if (in_AL == '\0') {
    if (*(int *)(iVar1 + 0x18) < 0x100) {
      cVar2 = FUN_004feb50();
      if (cVar2 == '\0') {
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar1,0,0);
    }
    iVar1 = *(int *)(unaff_EBX + 0x118 + unaff_EDI * 4);
    if (*(int *)(iVar1 + 0x18) < 0x100) {
      cVar2 = FUN_004feb50();
      if (cVar2 == '\0') {
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar1,0,0);
    }
  }
  else {
    if (*(int *)(iVar1 + 0x18) < 0x100) {
      cVar2 = FUN_004feb50();
      if (cVar2 == '\0') {
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar1,0,0);
    }
    iVar1 = *(int *)(unaff_EBX + 0x118 + unaff_EDI * 4);
    if (*(int *)(iVar1 + 0x18) < 0x100) {
      cVar2 = FUN_004feb50();
      if (cVar2 == '\0') {
        *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 0x400000;
      }
      FUN_004ff2f0(iVar1,0,0);
      return;
    }
  }
  return;
}

