/* Decompiled from Speed.exe @ 0046d510 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_0046d510(void)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00571ea0(0,"DriveTrain");
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x14,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x38,1,4,1);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x54,1,4,1);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x40,1,4,1);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x3c,1,4,1);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x44,1,4,1);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x48,4,4,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x4c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x50,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x58,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x5c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x60,1,4,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 100,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x68,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x6c,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x74,1,1,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x78,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EDI + 0x7c,4,0xffffffff,0);
  *(undefined4 *)(unaff_EDI + 0x70) = 0;
  iVar1 = *(char *)(unaff_ESI + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_ESI + 0x58) =
       *(int *)(unaff_ESI + 0x150) - *(int *)(iVar1 + 0x58 + unaff_ESI);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

