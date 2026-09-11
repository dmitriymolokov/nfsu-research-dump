/* Decompiled from Speed.exe @ 004f6570 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004f6570(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  
  FUN_00575940("Send message[%x] to package [%s]\n");
  if ((((DAT_0073578c != 0) && (*(int *)(DAT_0073578c + 8) != 0)) &&
      (iVar1 = FUN_004f3f90(&DAT_00746104), iVar1 != 0)) && (*(int *)(iVar1 + 0x18) != 0)) {
    FUN_00575940("Message was queued\n");
    FUN_004f0700(unaff_ESI,0,extraout_ECX,0xffffffff,0);
  }
  return;
}

