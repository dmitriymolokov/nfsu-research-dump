/* Decompiled from Speed.exe @ 00673fda */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined1 * FUN_00673fda(void)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  bVar1 = true;
  if (DAT_006eb694 == (undefined1 *)0x0) {
    DAT_006eb694 = _malloc(0x351);
    if (DAT_006eb694 == (undefined1 *)0x0) {
      return (undefined1 *)0x0;
    }
  }
  *DAT_006eb694 = 0;
  __strcats(DAT_006eb694,3,PTR_s_LC_COLLATE_006eb69c,&DAT_006ac1bc,PTR_DAT_006eb6a0);
  ppuVar3 = &PTR_DAT_006eb6a0;
  do {
    FUN_0067e1e0(DAT_006eb694,&DAT_006a0438);
    ppuVar4 = ppuVar3 + 3;
    iVar2 = _strcmp(*ppuVar3,*ppuVar4);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    __strcats(DAT_006eb694,3,ppuVar3[2],&DAT_006ac1bc,*ppuVar4);
    ppuVar3 = ppuVar4;
  } while ((int)ppuVar4 < 0x6eb6d0);
  if (!bVar1) {
    return DAT_006eb694;
  }
  _free(DAT_006eb694);
  DAT_006eb694 = (undefined1 *)0x0;
  return PTR_DAT_006eb6ac;
}

