/* Decompiled from Speed.exe @ 00463e80 */
/* Module: Career_Game */
/* Ghidra DecompileModule */


void FUN_00463e80(void)

{
  int iVar1;
  float fVar2;
  int unaff_EDI;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_00464660(*(undefined4 *)(unaff_EDI + 0xc));
  fVar2 = (*(float *)(unaff_EDI + 0x24) * *(float *)(unaff_EDI + 0xc) + *(float *)(unaff_EDI + 0x20)
          ) / *(float *)(unaff_EDI + 0x10);
  FUN_005673e0(fVar2);
  iVar1 = *(int *)(unaff_EDI + 8);
  *(float *)(iVar1 + 0x70) = local_20;
  *(float *)(iVar1 + 0x74) = local_1c;
  *(float *)(iVar1 + 0x78) = local_18;
  *(undefined1 *)(iVar1 + 0x460) = 0;
  *(float *)(iVar1 + 0x3d0) = fVar2;
  *(float *)(iVar1 + 0x3d4) = SQRT(local_1c * local_1c + local_18 * local_18 + local_20 * local_20);
  return;
}

