/* Decompiled from Speed.exe @ 00446620 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00446620(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_ESI;
  
  if (DAT_0071db20 == '\0') {
    *(undefined **)(unaff_ESI + 0x824) = &DAT_0071db28;
    *(undefined **)(unaff_ESI + 0x828) = &DAT_0071db28;
    iVar5 = 0;
    *(undefined **)(unaff_ESI + 0x82c) = &DAT_0072a008;
    if (0 < *(int *)(unaff_ESI + 0x820)) {
      puVar4 = (undefined4 *)(unaff_ESI + 0xa8);
      do {
        iVar3 = *(int *)(puVar4[-10] + 0x40);
        uVar1 = *(undefined4 *)(iVar3 + 0x44);
        uVar2 = *(undefined4 *)(iVar3 + 0x48);
        puVar4[-2] = *(undefined4 *)(iVar3 + 0x40);
        puVar4[-1] = uVar1;
        *puVar4 = uVar2;
        iVar3 = *(int *)(puVar4[-10] + 0x40);
        uVar1 = *(undefined4 *)(iVar3 + 0x54);
        uVar2 = *(undefined4 *)(iVar3 + 0x58);
        puVar4[2] = *(undefined4 *)(iVar3 + 0x50);
        puVar4[3] = uVar1;
        iVar5 = iVar5 + 1;
        puVar4[4] = uVar2;
        puVar4[6] = *(undefined4 *)(puVar4[-10] + 0xc);
        puVar4 = puVar4 + 0x34;
      } while (iVar5 < *(int *)(unaff_ESI + 0x820));
    }
    iVar5 = 0;
    if (0 < *(int *)(unaff_ESI + 0x820)) {
      puVar4 = (undefined4 *)(unaff_ESI + 0x8c);
      do {
        puVar4[-1] = *(undefined4 *)(unaff_ESI + 0x828);
        *puVar4 = *(undefined4 *)(unaff_ESI + 0x828);
        puVar4[1] = *(undefined4 *)(unaff_ESI + 0x82c);
        FUN_004465b0(puVar4 + -0x23);
        *(undefined4 *)(unaff_ESI + 0x828) = *puVar4;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 0x34;
      } while (iVar5 < *(int *)(unaff_ESI + 0x820));
    }
  }
  return;
}

