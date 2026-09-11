/* Decompiled from Speed.exe @ 00530e80 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00530e80(int param_1)

{
  int *unaff_EDI;
  
  if ((DAT_006f1dd8 != 0) && ((char)unaff_EDI[0xd4] != '\0')) {
    FUN_005326f0(param_1);
    FUN_00584270((float)unaff_EDI[0x13]);
    param_1 = unaff_EDI[0x91];
    if ((char)unaff_EDI[0xbd] != '\0') {
      param_1 = FUN_00674898();
    }
    FUN_00530740();
    (**(code **)(*unaff_EDI + 0x34))();
    unaff_EDI[0xc2] = param_1;
    unaff_EDI[200] = unaff_EDI[0x93];
    (**(code **)(*unaff_EDI + 0x70))();
  }
  return;
}

