/* Decompiled from Speed.exe @ 004c7200 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004c7200(int param_1)

{
  int iVar1;
  int unaff_EBX;
  
  if (*(char *)(unaff_EBX + 0x8b) == '\0') {
    iVar1 = *(int *)(unaff_EBX + 0x40);
    if (param_1 == -0x6edfbf62) {
      if ((iVar1 != *(int *)(unaff_EBX + 0x44)) && (*(int *)(unaff_EBX + 0x44) != unaff_EBX + 0x44))
      {
        *(undefined4 *)(unaff_EBX + 0x40) = *(undefined4 *)(iVar1 + 4);
      }
    }
    else if (((param_1 == -0x4a68e40f) &&
             (*(undefined4 **)(unaff_EBX + 0x40) != *(undefined4 **)(unaff_EBX + 0x48))) &&
            (*(int *)(unaff_EBX + 0x44) != unaff_EBX + 0x44)) {
      *(undefined4 *)(unaff_EBX + 0x40) = **(undefined4 **)(unaff_EBX + 0x40);
    }
    if (iVar1 != *(int *)(unaff_EBX + 0x40)) {
      FUN_004f8910();
      FUN_00495f00(*(undefined4 *)(*(int *)(unaff_EBX + 0x40) + 0x10));
      FUN_004c7150();
      if (param_1 == -0x6edfbf62) {
        FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
        return;
      }
      FUN_004f8340(*(undefined4 *)(unaff_EBX + 0xc));
    }
  }
  return;
}

