/* Decompiled from Speed.exe @ 0054d630 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054d630(void)

{
  int iVar1;
  
  if ((DAT_00734f80 != 0) && (DAT_00734f88 == 0)) {
    FUN_00665660(DAT_00734f80);
    if (DAT_00734f80 != 0) {
      iVar1 = FUN_00665120(DAT_00734f80);
      if (iVar1 == 0x400) {
        DAT_00734f88 = 2;
        DAT_00734f8c = 0;
        iVar1 = FUN_00664d80(DAT_00734f80,0x646f776e);
        if (iVar1 != 0) {
          iVar1 = FUN_00567cc0();
          if (0 < iVar1) {
            DAT_00734f8c = FUN_0054d5f0();
          }
        }
                    /* WARNING: Could not recover jumptable at 0x0054d6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*_DAT_00734fcc)();
        return;
      }
    }
  }
  return;
}

