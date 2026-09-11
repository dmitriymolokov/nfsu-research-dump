/* Decompiled from Speed.exe @ 00434a80 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00434a80(void)

{
  int iVar1;
  int unaff_ESI;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = DAT_007361f8;
  if (0 < *(int *)(DAT_007361f8 + 0x1c)) {
    do {
      FUN_004333c0();
      *(int *)(unaff_ESI + 0x520 + *(int *)(unaff_ESI + 0x24) * 4) =
           *(int *)(unaff_ESI + 0x24) * 0x13c + 0x30 + unaff_ESI;
      iVar1 = DAT_007361f8;
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x1c));
  }
  iVar2 = 0;
  if (*(int *)(iVar1 + 0x20) != *(int *)(iVar1 + 0x1c) &&
      -1 < *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c)) {
    do {
      FUN_004333c0();
      *(int *)(unaff_ESI + 0x520 + *(int *)(unaff_ESI + 0x24) * 4) =
           *(int *)(unaff_ESI + 0x24) * 0x13c + 0x30 + unaff_ESI;
      iVar1 = DAT_007361f8;
      *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x24) + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(iVar1 + 0x20) - *(int *)(iVar1 + 0x1c));
  }
  FUN_00434ed0();
  FUN_00434ed0();
  return;
}

