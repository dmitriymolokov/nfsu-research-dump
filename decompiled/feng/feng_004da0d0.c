/* Decompiled from Speed.exe @ 004da0d0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004da0d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  undefined4 local_8;
  undefined4 *local_4;
  
  iVar4 = 0;
  if (0 < *(int *)(unaff_ESI + 0xb34)) {
    local_4 = (undefined4 *)FUN_0040a880();
    iVar2 = *(int *)(unaff_ESI + 0xb20);
    do {
      iVar3 = 0;
      for (puVar1 = *(undefined4 **)(unaff_ESI + 0xb2c); puVar1 != local_4;
          puVar1 = (undefined4 *)*puVar1) {
        if (iVar4 == iVar3) goto LAB_004da12d;
        iVar3 = iVar3 + 1;
      }
      puVar1 = (undefined4 *)0x0;
LAB_004da12d:
      local_8 = 0;
      FUN_004d99c0(puVar1[2],&local_8);
      iVar3 = *(int *)(unaff_ESI + 0xb24);
      if (iVar3 < iVar2) {
        do {
          iVar2 = iVar2 * iVar4 + iVar3;
          *(undefined4 *)(unaff_ESI + 0xb78 + iVar2 * 4) = 0;
          *(undefined4 *)(unaff_ESI + 0xb38 + iVar2 * 4) = local_8;
          iVar2 = *(int *)(unaff_ESI + 0xb20);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(unaff_ESI + 0xb34));
  }
  return;
}

