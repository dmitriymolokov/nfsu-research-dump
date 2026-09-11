/* Decompiled from Speed.exe @ 00578730 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


undefined4 * FUN_00578730(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI + 0x1c);
  if (*(int *)(iVar2 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  uVar1 = *(undefined4 *)(iVar2 + 0x18);
  uVar4 = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(unaff_ESI + 0x54) = *(undefined4 *)(iVar2 + 0x14);
  *(undefined4 *)(unaff_ESI + 0x50) = uVar4;
  *(undefined4 *)(unaff_ESI + 0x58) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x5c) = uVar3;
  iVar2 = *(int *)(unaff_ESI + 0x1c);
  if (*(int *)(iVar2 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x2c);
  uVar1 = *(undefined4 *)(iVar2 + 0x28);
  uVar4 = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(unaff_ESI + 100) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(unaff_ESI + 0x60) = uVar4;
  *(undefined4 *)(unaff_ESI + 0x6c) = uVar3;
  *(undefined4 *)(unaff_ESI + 0x68) = uVar1;
  iVar2 = *(int *)(unaff_ESI + 0x1c);
  if (*(int *)(iVar2 + 0xe4) != 0) {
    FUN_005791c0();
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x3c);
  uVar1 = *(undefined4 *)(iVar2 + 0x38);
  uVar4 = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(unaff_ESI + 0x74) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(unaff_ESI + 0x78) = uVar1;
  *(undefined4 *)(unaff_ESI + 0x70) = uVar4;
  *(undefined4 *)(unaff_ESI + 0x7c) = uVar3;
  return (undefined4 *)(unaff_ESI + 0x50);
}

