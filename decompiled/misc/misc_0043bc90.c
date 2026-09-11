/* Decompiled from Speed.exe @ 0043bc90 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_0043bc90(void)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_00436d90();
  uVar2 = FUN_00436f20();
  uVar3 = FUN_00436f20();
  iVar4 = FUN_0043b850(uVar1);
  if ((iVar4 != 0) && (*(uint *)(iVar4 + 0x1a8) < uVar2)) {
    *(uint *)(iVar4 + 0x1a8) = uVar2;
    FUN_00439030(uVar3);
  }
  return;
}

