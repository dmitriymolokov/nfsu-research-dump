/* Decompiled from Speed.exe @ 004c69f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004c69f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x48);
  if (param_1 == -0x6edfbf62) {
    if (puVar1 == *(undefined4 **)(unaff_EDI + 0x40)) goto LAB_004c6a17;
    uVar3 = puVar1[1];
  }
  else {
    if ((param_1 != -0x4a68e40f) || (puVar1 == *(undefined4 **)(unaff_EDI + 0x44)))
    goto LAB_004c6a17;
    uVar3 = *puVar1;
  }
  *(undefined4 *)(unaff_EDI + 0x48) = uVar3;
LAB_004c6a17:
  if (puVar1 != *(undefined4 **)(unaff_EDI + 0x48)) {
    FUN_004f8340(*(undefined4 *)(unaff_EDI + 0xc));
    DAT_00758c28 = *(undefined4 *)(*(int *)(unaff_EDI + 0x48) + 0x738);
    iVar2 = FUN_004b2330();
    if (iVar2 != 0) {
      FUN_004b1530(iVar2);
    }
    FUN_004f8910();
    FUN_004c6970();
    *(undefined4 *)(unaff_EDI + 0x88) = DAT_0073ad3c;
  }
  return;
}

