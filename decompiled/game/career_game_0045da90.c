/* Decompiled from Speed.exe @ 0045da90 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0045da90(void)

{
  undefined4 *unaff_ESI;
  
  unaff_ESI[0x14] = &PTR_FUN_006b9694;
  if ((undefined4 *)unaff_ESI[0x18] != unaff_ESI + 0x19) {
    _free((undefined4 *)unaff_ESI[0x18]);
  }
  unaff_ESI[0x14] = &PTR_LAB_006c7d78;
  unaff_ESI[10] = &PTR_FUN_006b9694;
  if ((undefined4 *)unaff_ESI[0xe] != unaff_ESI + 0xf) {
    _free((undefined4 *)unaff_ESI[0xe]);
  }
  unaff_ESI[10] = &PTR_LAB_006c7d78;
  *unaff_ESI = &PTR_FUN_006b9694;
  if ((undefined4 *)unaff_ESI[4] != unaff_ESI + 5) {
    _free((undefined4 *)unaff_ESI[4]);
  }
  *unaff_ESI = &PTR_LAB_006c7d78;
  return;
}

