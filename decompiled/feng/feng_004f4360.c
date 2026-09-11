/* Decompiled from Speed.exe @ 004f4360 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f4360(void)

{
  undefined4 uVar1;
  
  if (DAT_006f94c8 != 0) {
    uVar1 = FUN_00565b60(DAT_006f94cc,0,0,0);
    _DAT_00735794 = uVar1;
    (&DAT_007301d4)[DAT_006f94c8] = &DAT_007301f8 + DAT_006f94c8 * 0x58;
    FUN_00565310(uVar1,"FEngMemoryPool");
    *(bool *)((&DAT_007301d4)[DAT_006f94c8] + 0x39) = DAT_00735798 != 0;
  }
  return;
}

