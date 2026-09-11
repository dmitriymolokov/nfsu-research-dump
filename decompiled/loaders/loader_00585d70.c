/* Decompiled from Speed.exe @ 00585d70 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00585d70(undefined4 param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  DAT_006f088c = FUN_00674898(param_1);
  _DAT_0073456c = (float)(extraout_ST0 - (float10)DAT_006f088c * (float10)_DAT_006cc7b0);
  if (DAT_006f088c == 0) {
    DAT_006f088c = 1;
  }
  DAT_006f0884 = DAT_006f0888 + DAT_006f088c;
  DAT_006f0888 = DAT_006f0884;
  iVar1 = FUN_00674898();
  DAT_0073ad3c = DAT_0073ad3c + iVar1;
  DAT_00734574 = DAT_00734574 + 1;
  return;
}

