/* Decompiled from Speed.exe @ 00416f40 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00416f40(void)

{
  int iVar1;
  int unaff_EDI;
  
  FUN_0041f160(*(undefined4 *)(*(int *)(&DAT_0071b868 + *(int *)(unaff_EDI + 0x54) * 4) + 0x10),0,0,
               0x12);
  *(undefined4 *)(unaff_EDI + 600) = 0xd03dd189;
  *(undefined4 *)(unaff_EDI + 0x260) = 0;
  *(undefined4 *)(unaff_EDI + 0x25c) = 0x34e93258;
  DAT_0070108e = 1;
  FUN_0041f4d0();
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    FUN_004f8000(unaff_EDI);
    FUN_004e6ac0();
  }
  *(undefined4 *)(unaff_EDI + 0x5c) = 1;
  return;
}

