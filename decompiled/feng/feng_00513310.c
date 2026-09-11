/* Decompiled from Speed.exe @ 00513310 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_00513310(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x18) != 0)) && (*(int **)(iVar1 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar1 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar1 + 0x18));
  }
  iVar1 = *(int *)(unaff_EBX + 0x40);
  FUN_005048e0(&DAT_00744ff0);
  FUN_00495f00(*(undefined4 *)(iVar1 + 0xc));
  if (((*(int *)(unaff_EBX + 0xc) == 0) || (iVar1 = FUN_004f65d0(), iVar1 == 0)) ||
     (iVar1 = FUN_004ffb70(), iVar1 == 0)) {
    if (DAT_0073578c != 0) {
      uVar2 = FUN_004ef050(0xa8a3681a);
      FUN_004f6910(uVar2);
      return;
    }
    iVar1 = 0;
  }
  FUN_004f6910(iVar1);
  return;
}

