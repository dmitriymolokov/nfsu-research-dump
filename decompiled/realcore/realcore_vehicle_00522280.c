/* Decompiled from Speed.exe @ 00522280 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00522280(void)

{
  int iVar1;
  
  iVar1 = DAT_00735684;
  if ((&DAT_0072d190)[DAT_00735684] != 0) {
    if ((&DAT_0072d190)[DAT_00735684] == (&DAT_0072cfd8)[DAT_00735684]) {
      (&DAT_0072cfd8)[DAT_00735684] = 0;
    }
    FUN_00565ce0();
    iVar1 = DAT_00735684;
    (&DAT_0072d190)[DAT_00735684] = 0;
  }
  if ((&DAT_0072cfd8)[iVar1] != 0) {
    FUN_00565ce0();
    (&DAT_0072cfd8)[DAT_00735684] = 0;
  }
  return;
}

