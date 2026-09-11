/* Decompiled from Speed.exe @ 00539ac0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00539ac0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x220) == 4) {
    iVar1 = *(int *)(unaff_ESI + 0x240);
  }
  else {
    iVar1 = *(int *)(unaff_ESI + 0x244);
  }
  *(int *)(unaff_ESI + 0x244) = *(int *)(unaff_ESI + 0x50) * iVar1 >> 0xf;
  uVar2 = FUN_00674898();
  *(undefined4 *)(unaff_ESI + 0x24c) = uVar2;
  *(undefined4 *)(unaff_ESI + 0x248) = *(undefined4 *)(unaff_ESI + 0x4c);
  return;
}

