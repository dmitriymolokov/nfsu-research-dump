/* Decompiled from Speed.exe @ 005940a0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005940a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int unaff_ESI;
  
  uVar5 = *(uint *)(unaff_ESI + 8) & 0xfffffff8;
  iVar6 = *(int *)(unaff_ESI + 0xc) * 8;
  for (iVar2 = iVar6; iVar2 < (int)uVar5; iVar2 = iVar2 + iVar1 * 8) {
    iVar1 = (int)((uVar5 - iVar2) + ((int)(uVar5 - iVar2) >> 0x1f & 7U)) >> 3;
    if (0x7e0 < iVar1) {
      iVar1 = 0x7e0;
    }
  }
  iVar2 = 0;
  if (0 < *(int *)(unaff_ESI + 0x18)) {
    puVar4 = (undefined4 *)(unaff_ESI + 0x40);
    do {
      *puVar4 = 0;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 9;
    } while (iVar2 < *(int *)(unaff_ESI + 0x18));
  }
  iVar2 = *(int *)(unaff_ESI + 8) - uVar5;
  if (iVar2 != 0) {
    iVar1 = iVar2;
    uVar3 = FUN_00594050(unaff_ESI,*(int *)(unaff_ESI + 8) - iVar2);
    FUN_00593ff0(unaff_ESI,uVar3,iVar1);
  }
  *(int *)(unaff_ESI + 8) = iVar2 + iVar6;
  return;
}

