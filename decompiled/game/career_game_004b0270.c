/* Decompiled from Speed.exe @ 004b0270 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b0270(void)

{
  undefined4 *puVar1;
  float fVar2;
  int unaff_EDI;
  
  fVar2 = _DAT_006b6b38;
  *(undefined4 *)(unaff_EDI + 0x100) = 0;
  DAT_006fb02c = 0;
  DAT_00735e84 = 0;
  fVar2 = (fVar2 + fVar2) / (_DAT_006b6b40 * _DAT_006b6b40);
  *(float *)(unaff_EDI + 0xf8) = _DAT_006b6b40 * fVar2;
  *(float *)(unaff_EDI + 0xf4) = fVar2 * _DAT_006cc8a8;
  fVar2 = -_DAT_006b6b38;
  *(float *)(unaff_EDI + 0xfc) = fVar2;
  *(float *)(unaff_EDI + 0xf0) = fVar2;
  DAT_0074810c = DAT_0073ad3c;
  FUN_00487e20();
  if (((*(int *)(DAT_007356a8 + 0xbc) != 0) && (*(int *)(*(int *)(unaff_EDI + 0x114) + 0x1ca8) != 0)
      ) && (puVar1 = (undefined4 *)(*(int *)(unaff_EDI + 0x114) + 0x1570),
           puVar1 != (undefined4 *)0x0)) {
    FUN_00522e50(*(int *)(DAT_007356a8 + 0xbc),0x53,*(undefined4 *)(unaff_EDI + 0x110),*puVar1);
    FUN_00522e50(*(undefined4 *)(DAT_007356a8 + 0xbc),0x54,*(undefined4 *)(unaff_EDI + 0x110),
                 *puVar1);
  }
  return;
}

