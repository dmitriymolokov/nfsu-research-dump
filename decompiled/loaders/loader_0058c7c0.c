/* Decompiled from Speed.exe @ 0058c7c0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_0058c7c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0xc) == 0) {
    uVar3 = DAT_006f227c ^ 0x1d872b41;
    uVar5 = uVar3 >> 5 ^ uVar3;
    DAT_006f227c = uVar5 << 0x1b ^ uVar5 ^ uVar3;
  }
  puVar1 = (undefined4 *)(unaff_EDI + 0x4c);
  for (puVar2 = *(undefined4 **)(unaff_EDI + 0x4c); puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2
      ) {
    puVar2[2] = 0;
  }
  iVar4 = *(int *)(unaff_EDI + 0x14);
  *(undefined4 *)(unaff_EDI + 0x58) = 0;
  while (iVar4 != 0) {
    FUN_004483c0();
    iVar4 = *(int *)(unaff_EDI + 0x14);
  }
  for (puVar2 = (undefined4 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined4 *)*puVar2) {
    iVar4 = FUN_0058c5a0(unaff_EDI,puVar2,1);
    while (iVar4 != 0) {
      iVar4 = FUN_0058c5a0(unaff_EDI,puVar2,1);
    }
  }
  return;
}

