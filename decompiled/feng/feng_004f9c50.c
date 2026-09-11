/* Decompiled from Speed.exe @ 004f9c50 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f9c50(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
  }
  FUN_004f75b0(0x9600ff00);
  iVar2 = *(int *)(unaff_EBX + 0xc);
  uVar1 = FUN_004fd230();
  if ((((iVar2 == 0) || (iVar2 = FUN_004f65d0(), iVar2 == 0)) ||
      (iVar2 = FUN_004ffb70(), iVar2 == 0)) && (DAT_0073578c != 0)) {
    FUN_004ef050(uVar1);
    FUN_004f75b0(0x9600ff00);
    return;
  }
  FUN_004f75b0(0x9600ff00);
  return;
}

