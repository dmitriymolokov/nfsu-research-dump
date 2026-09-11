/* Decompiled from Speed.exe @ 00472cb0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00472cb0(void)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  
  FUN_00472a90();
  puVar2 = (undefined4 *)(unaff_ESI + 0x1c);
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(code **)(unaff_ESI + 8) = FUN_00472f30;
  *(undefined1 **)(unaff_ESI + 0xc) = &LAB_00472ee0;
  *(undefined4 *)(unaff_ESI + 0x10) = 1;
  return;
}

