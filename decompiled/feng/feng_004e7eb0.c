/* Decompiled from Speed.exe @ 004e7eb0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7eb0(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x84);
  iVar1 = *(int *)(iVar3 + 8);
  if ((iVar1 < 0) || (9 < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_00758c30 + iVar1 * 0x338;
  }
  FUN_004ac750(puVar2,&DAT_00745720);
  FUN_004323f0(iVar3 + 0x10,&DAT_00745720);
  *(undefined4 *)(iVar3 + 0x730) = 1;
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar3 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar3 != 0) {
    FUN_004b0e50(iVar3,&DAT_00748850,2);
  }
  FUN_004e7c80();
  iVar3 = FUN_004b2330();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x9c) = 0;
  }
  return;
}

