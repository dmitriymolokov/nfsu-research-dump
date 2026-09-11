/* Decompiled from Speed.exe @ 004fa870 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004fa870(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_006c183c;
  if ((void *)unaff_ESI[0x22] != (void *)0x0) {
    _free((void *)unaff_ESI[0x22]);
  }
  if ((void *)unaff_ESI[0x27] != (void *)0x0) {
    _free((void *)unaff_ESI[0x27]);
  }
  if ((void *)unaff_ESI[0x26] != (void *)0x0) {
    _free((void *)unaff_ESI[0x26]);
  }
  FUN_004fef10();
  return;
}

