/* Decompiled from Speed.exe @ 005843f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005843f0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_006b968c;
  _free((void *)unaff_ESI[0xc]);
  *unaff_ESI = &PTR_FUN_006b9694;
  if ((undefined4 *)unaff_ESI[4] != unaff_ESI + 5) {
    _free((undefined4 *)unaff_ESI[4]);
  }
  *unaff_ESI = &PTR_LAB_006c7d78;
  return;
}

