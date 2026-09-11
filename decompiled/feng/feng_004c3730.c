/* Decompiled from Speed.exe @ 004c3730 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c3730(void)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_00735e6c + 0x424) == -1) {
    FUN_0057f2b0(1);
  }
  if (*(char *)(DAT_00735e6c + 0xb44) == -1) {
    FUN_0057f2b0(1);
  }
  iVar2 = DAT_00735e6c + 0x720;
  FUN_004ac750(&DAT_0075eef8,iVar2);
  iVar1 = FUN_00674898();
  DAT_0076026c = DAT_0076026c - iVar1;
  DAT_00760274 = DAT_00760274 + iVar1;
  FUN_004ac750(DAT_00744ff8,iVar2);
  FUN_004ac5a0(DAT_00744ff8,0,&DAT_00745720);
  FUN_004323f0(&DAT_00745000,&DAT_00745720);
  iVar2 = FUN_004b2330();
  FUN_004323f0(&DAT_00748850,&DAT_00745720);
  _DAT_0072cc80 = 2;
  if (iVar2 != 0) {
    FUN_004b0e50(iVar2,&DAT_00748850,2);
  }
  return;
}

