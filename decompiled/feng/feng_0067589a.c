/* Decompiled from Speed.exe @ 0067589a */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0067589a(void)

{
  __mtdeletelocks();
  if (DAT_006eb864 != 0xffffffff) {
    TlsFree(DAT_006eb864);
    DAT_006eb864 = 0xffffffff;
  }
  return;
}

