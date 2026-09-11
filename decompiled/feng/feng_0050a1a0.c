/* Decompiled from Speed.exe @ 0050a1a0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_0050a1a0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar2 + 0x18));
  }
  iVar2 = *(int *)(unaff_EBX + 0x40);
  FUN_005048e0(&DAT_00744ff0);
  FUN_00495f00(*(undefined4 *)(iVar2 + 0xc));
  uVar3 = *(undefined4 *)(iVar2 + 8);
  cVar1 = FUN_00509d70(uVar3);
  if (cVar1 != '\0') {
    cVar1 = FUN_00509d70(uVar3);
    if (cVar1 != '\0') {
      cVar1 = FUN_00509d70(uVar3);
      if ((cVar1 != '\0') && (DAT_0073572c == '\0')) {
        FUN_00495fc0();
        return;
      }
    }
  }
  if (*(int *)(unaff_EBX + 0xc) != 0) {
    iVar2 = FUN_004f65d0();
    if (iVar2 != 0) {
      iVar2 = FUN_004ffb70();
      if (iVar2 != 0) goto LAB_0050a28e;
    }
  }
  if (DAT_0073578c != 0) {
    uVar3 = FUN_004ef050(0xa8a3681a);
    FUN_004f6910(uVar3);
    return;
  }
  iVar2 = 0;
LAB_0050a28e:
  FUN_004f6910(iVar2);
  return;
}

