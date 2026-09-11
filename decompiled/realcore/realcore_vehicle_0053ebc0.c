/* Decompiled from Speed.exe @ 0053ebc0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0053ebc0(int param_1)

{
  int unaff_ESI;
  int *unaff_EDI;
  
  if ((*(byte *)(unaff_ESI + 0xd) & 0x20) == 0) {
    (*(code *)unaff_EDI[2])(*(int *)(unaff_ESI + 0x10) + (*unaff_EDI - 1U) & ~(*unaff_EDI - 1U));
  }
  FUN_00565ce0();
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) - *(int *)(unaff_ESI + 8);
  unaff_EDI[0xc] = unaff_EDI[0xc] + -1;
  unaff_EDI[0xd] = unaff_EDI[0xd] - *(int *)(unaff_ESI + 8);
  return;
}

