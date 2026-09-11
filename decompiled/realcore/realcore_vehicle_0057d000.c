/* Decompiled from Speed.exe @ 0057d000 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0057d000(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_10;
  
  local_10 = 0.0;
  if (DAT_0078a2f0 < 1000) {
    iVar3 = 4;
    if (DAT_0078a2f0 / 10 != 6) {
      iVar3 = DAT_0078a2f0 / 10 + -1;
    }
  }
  else {
    iVar3 = 0;
  }
  iVar2 = FUN_0057cfa0();
  while (iVar2 != 0) {
    local_10 = *(float *)(iVar2 + 0xc60 + iVar3 * 4) + local_10;
    iVar2 = FUN_0057cfa0();
  }
  if (ABS(local_10) < _DAT_006cc8bc == (ABS(local_10) == _DAT_006cc8bc)) {
    fVar4 = (float10)FUN_00564a80(local_10);
    fVar1 = (float)fVar4;
    iVar2 = FUN_0057cfa0();
    while( true ) {
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      fVar1 = fVar1 - *(float *)(iVar2 + 0xc60 + iVar3 * 4);
      if (fVar1 < DAT_006cc7a4 != (fVar1 == DAT_006cc7a4)) break;
      iVar2 = FUN_0057cfa0();
    }
    return *(undefined4 *)(iVar2 + 0xc50);
  }
  return 0xffffffff;
}

