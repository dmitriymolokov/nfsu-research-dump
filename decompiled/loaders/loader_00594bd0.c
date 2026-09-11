/* Decompiled from Speed.exe @ 00594bd0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00594bd0(void)

{
  int iVar1;
  
  iVar1 = DAT_0073448c;
  if (DAT_00734484 != 0) {
    do {
      if (iVar1 != 0) {
        FUN_0063f0a0(0);
        FUN_00594870();
        iVar1 = DAT_0073448c;
      }
    } while (iVar1 != 0);
    FUN_00594470(1);
    if (DAT_00734490 != (void *)0x0) {
      _free(DAT_00734490);
      DAT_00734490 = (void *)0x0;
      DAT_00734494 = 0;
    }
    FUN_00567220();
    DAT_00734484 = 0;
    FUN_0063f170(&DAT_007315f8);
  }
  return;
}

