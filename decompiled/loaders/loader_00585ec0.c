/* Decompiled from Speed.exe @ 00585ec0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00585ec0(void)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  
  FUN_00571ea0(0,"WorldTime");
  FUN_00571c20(unaff_ESI,&DAT_0073ad34,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,&DAT_006f0898,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,&DAT_006f08a4,4,4,1);
  FUN_00571c20(unaff_ESI,&DAT_006f08a0,4,4,1);
  FUN_00571c20(unaff_ESI,&DAT_00734578,4,4,1);
  FUN_00571c20(unaff_ESI,&DAT_006f089c,4,4,1);
  if ((*(char *)(unaff_ESI + 0x3e) != '\0') || (*(char *)(unaff_ESI + 0x3f) != '\0')) {
    FUN_00571c20(unaff_ESI,&DAT_0073457c,4,0xffffffff,0);
  }
  FUN_00571c20(unaff_ESI,&DAT_00734580,4,0xffffffff,0);
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

