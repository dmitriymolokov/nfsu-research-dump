/* Decompiled from Speed.exe @ 00510900 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00510900(void)

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
  if (DAT_00735748 == 4) {
    uVar2 = 0xdaf24433;
  }
  else if (DAT_00735748 == 5) {
    uVar2 = 0xa03cfe86;
  }
  else if (DAT_00735748 == 6) {
    uVar2 = 0xf2b1f5a3;
  }
  FUN_00495f00(uVar2);
  FUN_00495f00(*(undefined4 *)(iVar1 + 0x10));
  return;
}

