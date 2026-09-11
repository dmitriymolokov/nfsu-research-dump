/* Decompiled from Speed.exe @ 005742b0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_005742b0(void)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  int *piVar4;
  int unaff_EDI;
  
  FUN_00571ea0(0,"Joystick");
  FUN_00571c20(unaff_EDI,&DAT_007306c4,2,0xffffffff,0);
  puVar3 = &DAT_0073b260;
  do {
    piVar4 = &DAT_006f1458;
    do {
      FUN_00571c20(unaff_EDI,puVar3 + *piVar4 + 0xb8,1,0xffffffff,0);
      piVar4 = piVar4 + 1;
    } while ((int)piVar4 < 0x6f14b8);
    puVar3 = puVar3 + 0x18c;
  } while ((int)puVar3 < 0x73b578);
  iVar1 = *(char *)(unaff_EDI + 0x40) * 0x10 + 0x4c + unaff_EDI;
  *(int *)(iVar1 + 0xc) = *(int *)(unaff_EDI + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(unaff_EDI + 0x40) + -1;
  *(char *)(unaff_EDI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_EDI + 0x44)) {
    *(undefined4 *)(unaff_EDI + 0x44) = 0xffffffff;
  }
  return;
}

