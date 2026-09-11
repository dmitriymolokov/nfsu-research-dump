/* Decompiled from Speed.exe @ 004e1b90 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004e1b90(void)

{
  int iVar1;
  int unaff_EBX;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if (*(int *)(unaff_EBX + 0x14) == 0) {
    uVar3 = 0xa4c3d766;
    uVar2 = 0xd79b67f9;
  }
  else if (*(int *)(unaff_EBX + 0x14) == 1) {
    uVar3 = 0xa4c38ad8;
    uVar2 = 0xd79b1b6b;
  }
  if (((*(int *)(unaff_EBX + 0x20) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(uVar3);
    }
  }
  FUN_004f6970(iVar1);
  if (((*(int *)(unaff_EBX + 0x20) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_004ef050(uVar2);
    }
  }
  FUN_004f6970(iVar1);
  if ((*(int *)(unaff_EBX + 0xc) == *(int *)(unaff_EBX + 4)) ||
     (*(int *)(unaff_EBX + 0xc) == *(int *)(unaff_EBX + 8))) {
    FUN_00495f70();
  }
  return;
}

