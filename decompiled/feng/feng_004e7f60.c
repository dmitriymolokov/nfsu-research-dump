/* Decompiled from Speed.exe @ 004e7f60 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7f60(void)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_004abe90();
  DAT_00744ff8 = FUN_004ac060();
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745000);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  FUN_004ac750(DAT_00744ff8,*(int *)(unaff_EBX + 0x84) + 0x10);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar1 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar1 != 0) {
    FUN_004b0e50(iVar1,&DAT_00748850,2);
  }
  FUN_004e7c80();
  return;
}

