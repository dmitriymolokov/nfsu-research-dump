/* Decompiled from Speed.exe @ 00458dc0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00458dc0(void)

{
  int iVar1;
  char cVar2;
  char *unaff_EBX;
  char *pcVar3;
  int unaff_ESI;
  char *pcVar4;
  char *local_8;
  
  FUN_00571ea0(0,"DriveTarget");
  FUN_00571c20(unaff_ESI,unaff_EBX,1,1,1);
  FUN_00571c20(unaff_ESI,unaff_EBX + 0x1a0,1,1,1);
  FUN_00571c20(unaff_ESI,unaff_EBX + 0x1a4,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EBX + 0x1a8,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EBX + 0x1ac,4,0xffffffff,0);
  FUN_00571c20(unaff_ESI,unaff_EBX + 0x1b0,1,1,1);
  FUN_00571c20(unaff_ESI,unaff_EBX + 0x1b1,1,1,0);
  if ('\0' < *unaff_EBX) {
    pcVar4 = unaff_EBX + 0x18c;
    pcVar3 = unaff_EBX + 0x164;
    local_8 = unaff_EBX;
    do {
      local_8 = local_8 + 0x10;
      FUN_00571c20(unaff_ESI,local_8,0xc,0xffffffff,0);
      FUN_00571c20(unaff_ESI,pcVar3,2,2,1);
      FUN_00571c20(unaff_ESI,pcVar4 + -0x3c,1,1,1);
      FUN_00571c20(unaff_ESI,pcVar4,1,1,1);
      pcVar3 = pcVar3 + 2;
      pcVar4 = pcVar4 + 1;
    } while ((int)(pcVar4 + (-0x18c - (int)unaff_EBX)) < (int)*unaff_EBX);
  }
  iVar1 = *(char *)(unaff_ESI + 0x40) * 0x10 + 0x4c + unaff_ESI;
  *(int *)(iVar1 + 0xc) = *(int *)(unaff_ESI + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(unaff_ESI + 0x40) + -1;
  *(char *)(unaff_ESI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_ESI + 0x44)) {
    *(undefined4 *)(unaff_ESI + 0x44) = 0xffffffff;
  }
  return;
}

