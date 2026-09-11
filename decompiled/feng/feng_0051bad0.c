/* Decompiled from Speed.exe @ 0051bad0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0051bad0(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860;
  iVar2 = FUN_0053e4f0(&DAT_00740420,PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860);
  if (iVar2 == 0) {
    FUN_0053eed0(&DAT_00740420,puVar1,0,0,0);
    puVar1 = PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860;
    iVar2 = FUN_0053ed70(&DAT_00740420,PTR_s_FRONTEND_MAGAZINE_TEXTURES_BIN_006f8860);
    while (iVar2 != 0) {
      FUN_004483c0();
      iVar2 = FUN_0053ed70(&DAT_00740420,puVar1);
    }
    while (DAT_007360e8 != 0) {
      FUN_004483c0();
    }
  }
  return;
}

