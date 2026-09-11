/* Decompiled from Speed.exe @ 00418c00 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00418c00(void)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [256];
  
  local_108 = 0;
  local_104 = 0;
  iVar1 = FUN_0059fb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0059fb80();
  }
  if ((*(int *)(unaff_EDI + 0x274) == unaff_EDI + 0x274) || (*(int *)(unaff_EDI + 0x27c) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(unaff_EDI + 0x27c) + 8) + 8;
  }
  FUN_004f68c0(0x100,iVar1,iVar2);
  local_118 = 0x541389e5;
  local_110 = 0x541389e5;
  local_124 = 0x2c8ec31d;
  local_11c = 0x12349990;
  local_120 = 0x639;
  local_114 = 0x12349000;
  local_10c = 0xb8a7c6cd;
  FUN_004dc6e0(&local_124,"GenericDialog.fng",*(undefined4 *)(unaff_EDI + 0xc));
  FUN_004dccc0(local_100);
  return;
}

