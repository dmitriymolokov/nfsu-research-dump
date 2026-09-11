/* Decompiled from Speed.exe @ 00414a60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00414a60(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  
  uVar1 = FUN_004fd230();
  if (unaff_EDI != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_00414aa5;
    }
  }
  if (DAT_0073578c != 0) {
    uVar1 = FUN_004ef050(uVar1);
    FUN_004f6970(uVar1);
    return;
  }
  iVar2 = 0;
LAB_00414aa5:
  FUN_004f6970(iVar2);
  return;
}

