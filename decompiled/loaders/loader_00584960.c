/* Decompiled from Speed.exe @ 00584960 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00584960(void)

{
  int iVar1;
  char cVar2;
  int *unaff_ESI;
  int unaff_EDI;
  char local_1;
  
  FUN_00571ea0(0,"RigidBody");
  FUN_00571c20(unaff_EDI,unaff_ESI + 8,0xc,0xffffffff,0);
  FUN_00571c20(unaff_EDI,unaff_ESI + 0xc,0xc,0xffffffff,0);
  FUN_00571c20(unaff_EDI,unaff_ESI + 0x10,0xc,0xffffffff,0);
  FUN_00571c20(unaff_EDI,unaff_ESI + 0x14,0xc,0xffffffff,0);
  if (*(char *)(unaff_EDI + 0x3c) != '\0' || *(char *)(unaff_EDI + 0x3d) != '\0') {
    unaff_ESI[0xf] = 0;
    unaff_ESI[0x13] = 0;
    unaff_ESI[0x17] = 0;
    unaff_ESI[0x18] = 0;
    unaff_ESI[0x19] = 0;
    unaff_ESI[0x1a] = 0;
    unaff_ESI[0x1b] = 0x3f800000;
    unaff_ESI[0x4c] = 1;
    unaff_ESI[0x4d] = 1;
    unaff_ESI[0x4e] = 0;
  }
  FUN_00571c20(unaff_EDI,unaff_ESI + 0x24,4,0xffffffff,0);
  if (((((float)unaff_ESI[0x1c] != DAT_006cc7a4) || ((float)unaff_ESI[0x1d] != DAT_006cc7a4)) ||
      ((float)unaff_ESI[0x1e] != DAT_006cc7a4)) ||
     ((((float)unaff_ESI[0x20] != DAT_006cc7a4 || ((float)unaff_ESI[0x21] != DAT_006cc7a4)) ||
      (local_1 = '\x01', (float)unaff_ESI[0x22] != DAT_006cc7a4)))) {
    local_1 = '\0';
  }
  FUN_00571c20(unaff_EDI,&local_1,1,1,0);
  if (local_1 == '\0') {
    FUN_00571c20(unaff_EDI,unaff_ESI + 0x1c,0xc,0xffffffff,0);
    FUN_00571c20(unaff_EDI,unaff_ESI + 0x20,0xc,0xffffffff,0);
  }
  else if (*(char *)(unaff_EDI + 0x3c) != '\0' || *(char *)(unaff_EDI + 0x3d) != '\0') {
    unaff_ESI[0x1c] = 0;
    unaff_ESI[0x1d] = 0;
    unaff_ESI[0x1e] = 0;
    unaff_ESI[0x20] = 0;
    unaff_ESI[0x21] = 0;
    unaff_ESI[0x22] = 0;
  }
  if (*(char *)(unaff_EDI + 0x3c) != '\0' || *(char *)(unaff_EDI + 0x3d) != '\0') {
    (**(code **)(*unaff_ESI + 0x1c))();
  }
  iVar1 = *(char *)(unaff_EDI + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_EDI + 0x58) =
       *(int *)(unaff_EDI + 0x150) - *(int *)(iVar1 + 0x58 + unaff_EDI);
  cVar2 = *(char *)(unaff_EDI + 0x40) + -1;
  *(char *)(unaff_EDI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_EDI + 0x44)) {
    *(undefined4 *)(unaff_EDI + 0x44) = 0xffffffff;
  }
  return;
}

