/* Decompiled from Speed.exe @ 00495f70 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00495f70(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  if (unaff_ESI != 0) {
    iVar1 = FUN_004f65d0();
    if (iVar1 != 0) {
      iVar1 = FUN_004ffb70();
      if (iVar1 != 0) goto LAB_00495faa;
    }
  }
  if (DAT_0073578c != 0) {
    uVar2 = FUN_004ef050(unaff_EDI);
    FUN_004f6910(uVar2);
    return;
  }
  iVar1 = 0;
LAB_00495faa:
  FUN_004f6910(iVar1);
  return;
}

