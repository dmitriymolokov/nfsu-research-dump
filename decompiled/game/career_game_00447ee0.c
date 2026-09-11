/* Decompiled from Speed.exe @ 00447ee0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00447ee0(void)

{
  int iVar1;
  LARGE_INTEGER local_8;
  
  QueryPerformanceCounter(&local_8);
  iVar1 = DAT_0073556c;
  if (DAT_0073556c != 0) {
    FUN_00544790();
  }
  if ((DAT_00735564 == 0) && ((DAT_00735568 != 0 || (iVar1 != 0)))) {
    FUN_00408610();
    DAT_00735568 = 0;
    DAT_0073556c = 0;
    _DAT_00735570 = 0;
  }
  return;
}

