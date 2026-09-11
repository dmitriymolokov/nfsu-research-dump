/* Decompiled from Speed.exe @ 004745b0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004745b0(void)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_EDI;
  
  puVar3 = *(undefined4 **)(unaff_EDI + 0x2c);
  if (puVar3 != (undefined4 *)0x0) {
    iVar4 = *(int *)(unaff_EDI + 0x20);
    uVar1 = puVar3[2];
    uVar5 = *puVar3;
    *(undefined4 *)(iVar4 + 0x1d4) = puVar3[1];
    *(undefined4 *)(iVar4 + 0x1d0) = uVar5;
    *(undefined4 *)(iVar4 + 0x1d8) = uVar1;
  }
  FUN_00584b10();
  fVar2 = *(float *)(*(int *)(unaff_EDI + 0x34) + 0x3d0);
  if ((char)(*(int **)(unaff_EDI + 0x28))[0xc] != '\0') {
    if (fVar2 < DAT_006cc7a4) {
      fVar2 = DAT_006cc7a4;
    }
    iVar4 = **(int **)(unaff_EDI + 0x28);
    FUN_00475460((*(float *)(iVar4 + 8) + *(float *)(iVar4 + 4)) * fVar2);
    return;
  }
  FUN_00475460(0);
  return;
}

