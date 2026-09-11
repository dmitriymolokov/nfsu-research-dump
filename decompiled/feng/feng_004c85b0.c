/* Decompiled from Speed.exe @ 004c85b0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c85b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  
  if ((*(char *)(unaff_EBX + 0x7b0) == '\0') && (*(int *)(unaff_EBX + 0x80) != unaff_EBX + 0x80)) {
    iVar3 = *(int *)(unaff_EBX + 0x7c);
    if (param_1 == -0x6edfbf62) {
      if ((iVar3 != *(int *)(unaff_EBX + 0x80)) && (*(int *)(unaff_EBX + 0x80) != unaff_EBX + 0x80))
      {
        *(undefined4 *)(unaff_EBX + 0x7c) = *(undefined4 *)(iVar3 + 4);
      }
    }
    else if (((param_1 == -0x4a68e40f) &&
             (*(undefined4 **)(unaff_EBX + 0x7c) != *(undefined4 **)(unaff_EBX + 0x84))) &&
            (*(int *)(unaff_EBX + 0x80) != unaff_EBX + 0x80)) {
      *(undefined4 *)(unaff_EBX + 0x7c) = **(undefined4 **)(unaff_EBX + 0x7c);
    }
    if (iVar3 != *(int *)(unaff_EBX + 0x7c)) {
      FUN_004f8910();
      FUN_004c86e0();
      iVar1 = *(int *)(*(int *)(unaff_EBX + 0x7c) + 8);
      iVar2 = (int)*(char *)(iVar1 + 0x10);
      iVar3 = unaff_EBX + 0x90;
      *(int *)(unaff_EBX + 0x4dc + iVar2 * 4) = iVar1;
      *(char *)(iVar2 + 0x62c + iVar3) = *(char *)(iVar2 + 0x62c + iVar3) + '\x01';
      FUN_0057ea80(iVar3);
      FUN_004b23b0(iVar3,2);
      iVar3 = FUN_004b2330();
      if (iVar3 != 0) {
        FUN_004b0150();
      }
      if (param_1 == -0x6edfbf62) {
        FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
        return;
      }
      FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
    }
  }
  return;
}

