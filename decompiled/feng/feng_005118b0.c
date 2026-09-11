/* Decompiled from Speed.exe @ 005118b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_005118b0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar1 + 0x18));
  }
  iVar1 = *(int *)(unaff_EBX + 0x40);
  uVar2 = 0;
  switch(DAT_00735748) {
  case 0:
    uVar2 = 0x1cdd513b;
    break;
  case 1:
    uVar2 = 0x45956ec9;
    break;
  case 2:
    uVar2 = 0x27579dc6;
    break;
  case 3:
    uVar2 = 0x43651cb9;
    break;
  case 4:
    if (DAT_0073574c == 0) {
      uVar2 = 0xd71d9e40;
    }
    else if (DAT_0073574c == 1) {
      uVar2 = 0xd71d9e41;
    }
    break;
  case 5:
    if (DAT_0073574c == 0) {
      uVar2 = 0xa5e5c4f3;
    }
    else if (DAT_0073574c == 1) {
      uVar2 = 0xa5e5c4f4;
    }
    break;
  case 6:
    if (DAT_0073574c == 0) {
      uVar2 = 0x80e2fbe;
    }
    else if (DAT_0073574c == 1) {
      uVar2 = 0x7c8aa0bf;
    }
  }
  FUN_00495f00(uVar2);
  FUN_00495f00(*(undefined4 *)(iVar1 + 0x10));
  return;
}

